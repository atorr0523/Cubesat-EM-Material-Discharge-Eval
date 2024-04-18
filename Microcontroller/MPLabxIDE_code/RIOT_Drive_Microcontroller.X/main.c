/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F24Q10
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include <string.h>

#define MAX_CMD_LEN 8
#define clockwise 0
#define counter_clockwise 1

/*
    Variables 
*/

int c;
char data;
char command[MAX_CMD_LEN];
char prev_command[MAX_CMD_LEN];
int index;
int steps;
int i;
//unsigned int ADC_result;
//float voltage;
const uint8_t speed = 3; // Used to regulate speed of stepper motor



/*
    Functions 
 */

//void LoadDAC(uint16_t d) { //SPI for DAC
//uint16_t dac;
//
//dac = d | 0x3000;  //Insert command DACA, unbuffered, G = 1, output ON
//SSP1CON1 = 0x20;   //Enabled, Fosc/4, CKP = 0
//CS_SetLow(); // Enable transfer
//SSP1BUF = (unsigned char)(dac >> 8); // Put bits in buffer
//while(!PIR3bits.SSP1IF); // Check if transfer complete
//SSP1BUF = (unsigned char)(dac & 0x00ff);
//while(!PIR3bits.SSP1IF);
//CS_SetHigh();
//SSP1CON1 = 0x00;  //Disabled
//}

void full_drive(uint8_t dir) {  // Code adapted from circuitdigest.com
    if(dir == clockwise){

        Drive_A_SetHigh();  //1100
        Drive_B_SetHigh();
        Drive_C_SetLow();
        Drive_D_SetLow();
        __delay_ms(speed);
        
        Drive_A_SetLow();   //0110
        Drive_B_SetHigh();
        Drive_C_SetHigh();
        Drive_D_SetLow();
        __delay_ms(speed);
        
        Drive_A_SetLow();   //0011
        Drive_B_SetLow();
        Drive_C_SetHigh();
        Drive_D_SetHigh();
        __delay_ms(speed);
        
        Drive_A_SetHigh();  //1001
        Drive_B_SetLow();
        Drive_C_SetLow();
        Drive_D_SetHigh();
        __delay_ms(speed);
        
        Drive_A_SetHigh();  //1100
        Drive_B_SetHigh();
        Drive_C_SetLow();
        Drive_D_SetLow();

    }

    if(dir == counter_clockwise) {

        Drive_A_SetHigh();  //1001
        Drive_B_SetLow();
        Drive_C_SetLow();
        Drive_D_SetHigh();
        __delay_ms(speed);
        
        Drive_A_SetLow();   //0011
        Drive_B_SetLow();
        Drive_C_SetHigh();
        Drive_D_SetHigh();
        __delay_ms(speed);
        
        Drive_A_SetLow();   //0110
        Drive_B_SetHigh();
        Drive_C_SetHigh();
        Drive_D_SetLow();
        __delay_ms(speed);
        
        Drive_A_SetHigh();  //1100
        Drive_B_SetHigh();
        Drive_C_SetLow();
        Drive_D_SetLow();
        __delay_ms(speed);
        
        Drive_A_SetHigh();  //1001
        Drive_B_SetLow();
        Drive_C_SetLow();
        Drive_D_SetHigh();

    }
}


void executeCommand(char *command) {
    if (strcmp(command, "EnCat") == 0) {   // Enable Thermionic Cathode
        En_Cathode_SetHigh();
        printf("Thermionic Cathode Enabled.\r\n");
    }
    else if (strcmp(command, "EnIon") == 0) {   // Enable Ionizer Chips
        En_Ion_SetHigh();
        printf("Ionizers Enabled.\r\n");
    }
    else if (strcmp(command, "DisCat") == 0) {  // Disable Thermionic Cathode
        En_Cathode_SetLow();
        printf("Thermionic Cathode Disabled.\r\n");
    }
    else if (strcmp(command, "DisIon") == 0) {  // Disable Ionizer Chips
        En_Ion_SetLow();
        printf("Ionizers Disabled.\r\n");
    } 
    else if (strcmp(command, "EnBoth") == 0) {   // Enable both
        En_Pulse_SetHigh();
        En_Ion_SetHigh();
        En_Cathode_SetHigh();
        printf("Components Enabled.\r\n");
    }
    else if (strcmp(command, "DisBoth") == 0) {  // Disable both
        En_Pulse_SetLow();
        En_Ion_SetLow();
        En_Cathode_SetLow();
        printf("Components Disabled.\r\n");
    }
    else if (((atoi(command) >= -8192) && (atoi(command) <= 8192)) && (atoi(command) != 0)) {//Flow Valve Step Control
        steps = atoi(command);
        if(steps < 0){
            printf("Opening valve.\r\n");
            for(i=0; i>steps; i--) {
                full_drive(counter_clockwise);
            }
            printf("Done.\r\n");
        }
        else if(steps > 0) {
            printf("Closing valve.\r\n");
            for(i=0; i<steps; i++) {
                full_drive(clockwise);
            }
            printf("Done.\r\n");
        }
//        else if(steps == 0) {
//            printf("Incorrect command.\r\n");
//        }
    }
    else {
        printf("Incorrect command.\r\n");
    }
}

/*
                         Main application
 */

void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Enable the Peripheral Interrupts

    // Disable the Peripheral Interrupts
    // INTERRUPT_PeripheralInterruptDisable();

//    if(!SPI1_Open(SPI1_DEFAULT)) {
//        printf("SPI not open.");
//        return;
//    }
//    SSP1CON1bits.SSPEN = 1; // Make sure SPI enabled
    
    printf("PIC RIOT Drive prototype interface.\r\n");
    printf("'EnCat/DisCat' to enable/disable Thermionic Cathode. \r\n");
    printf("'EnIon/DisIon' to enable/disable Ionizer. \r\n");
    printf("'EnBoth/DisBoth' to enable/disable both. \r\n");
    printf("Enter a positive value for clockwise turns of stepper motor. \r\n");
    printf("Enter a negative value for counter-clockwise turns of the stepper motor. \r\n");
    
    __delay_ms(50);
    //LDAC_SetLow();
    
    while (1) {
        // EUSART Code
        c = getch();
        data = c; // Converting to char
        if(data != '\n' && data != '\r')
        {
            command[index++] = data;
            if(index > MAX_CMD_LEN)
            {
                index = 0;
            }
        }
        
        if(data == '\n')
        {
            command[index] = '\0';
            index = 0;
            executeCommand(command);
        }
        
//        // ADC Code
//        ADC_result = 0;
//        ADCC_StartConversion(channel_ANC1);
//        while(!ADCC_IsConversionDone());
//        ADC_result = ADCC_GetConversionResult();
//        voltage = (ADC_result * 5.0)/1024; //Change multiplication for changing input voltage
        
    }
}



/**
 End of File
*/