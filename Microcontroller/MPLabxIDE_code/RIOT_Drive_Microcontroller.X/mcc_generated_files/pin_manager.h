/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F24Q10
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set Drive_A aliases
#define Drive_A_TRIS                 TRISAbits.TRISA4
#define Drive_A_LAT                  LATAbits.LATA4
#define Drive_A_PORT                 PORTAbits.RA4
#define Drive_A_WPU                  WPUAbits.WPUA4
#define Drive_A_OD                   ODCONAbits.ODCA4
#define Drive_A_ANS                  ANSELAbits.ANSELA4
#define Drive_A_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define Drive_A_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define Drive_A_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define Drive_A_GetValue()           PORTAbits.RA4
#define Drive_A_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define Drive_A_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define Drive_A_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define Drive_A_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define Drive_A_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define Drive_A_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define Drive_A_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define Drive_A_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set Drive_B aliases
#define Drive_B_TRIS                 TRISAbits.TRISA5
#define Drive_B_LAT                  LATAbits.LATA5
#define Drive_B_PORT                 PORTAbits.RA5
#define Drive_B_WPU                  WPUAbits.WPUA5
#define Drive_B_OD                   ODCONAbits.ODCA5
#define Drive_B_ANS                  ANSELAbits.ANSELA5
#define Drive_B_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define Drive_B_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define Drive_B_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define Drive_B_GetValue()           PORTAbits.RA5
#define Drive_B_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define Drive_B_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define Drive_B_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define Drive_B_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define Drive_B_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define Drive_B_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define Drive_B_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define Drive_B_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set Drive_C aliases
#define Drive_C_TRIS                 TRISAbits.TRISA6
#define Drive_C_LAT                  LATAbits.LATA6
#define Drive_C_PORT                 PORTAbits.RA6
#define Drive_C_WPU                  WPUAbits.WPUA6
#define Drive_C_OD                   ODCONAbits.ODCA6
#define Drive_C_ANS                  ANSELAbits.ANSELA6
#define Drive_C_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define Drive_C_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define Drive_C_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define Drive_C_GetValue()           PORTAbits.RA6
#define Drive_C_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define Drive_C_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define Drive_C_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define Drive_C_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define Drive_C_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define Drive_C_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define Drive_C_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define Drive_C_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set Drive_D aliases
#define Drive_D_TRIS                 TRISAbits.TRISA7
#define Drive_D_LAT                  LATAbits.LATA7
#define Drive_D_PORT                 PORTAbits.RA7
#define Drive_D_WPU                  WPUAbits.WPUA7
#define Drive_D_OD                   ODCONAbits.ODCA7
#define Drive_D_ANS                  ANSELAbits.ANSELA7
#define Drive_D_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define Drive_D_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define Drive_D_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define Drive_D_GetValue()           PORTAbits.RA7
#define Drive_D_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define Drive_D_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define Drive_D_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define Drive_D_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define Drive_D_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define Drive_D_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define Drive_D_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define Drive_D_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set En_Pulse aliases
#define En_Pulse_TRIS                 TRISBbits.TRISB0
#define En_Pulse_LAT                  LATBbits.LATB0
#define En_Pulse_PORT                 PORTBbits.RB0
#define En_Pulse_WPU                  WPUBbits.WPUB0
#define En_Pulse_OD                   ODCONBbits.ODCB0
#define En_Pulse_ANS                  ANSELBbits.ANSELB0
#define En_Pulse_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define En_Pulse_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define En_Pulse_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define En_Pulse_GetValue()           PORTBbits.RB0
#define En_Pulse_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define En_Pulse_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define En_Pulse_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define En_Pulse_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define En_Pulse_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define En_Pulse_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define En_Pulse_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define En_Pulse_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set En_Ion aliases
#define En_Ion_TRIS                 TRISBbits.TRISB1
#define En_Ion_LAT                  LATBbits.LATB1
#define En_Ion_PORT                 PORTBbits.RB1
#define En_Ion_WPU                  WPUBbits.WPUB1
#define En_Ion_OD                   ODCONBbits.ODCB1
#define En_Ion_ANS                  ANSELBbits.ANSELB1
#define En_Ion_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define En_Ion_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define En_Ion_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define En_Ion_GetValue()           PORTBbits.RB1
#define En_Ion_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define En_Ion_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define En_Ion_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define En_Ion_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define En_Ion_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define En_Ion_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define En_Ion_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define En_Ion_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set En_Cathode aliases
#define En_Cathode_TRIS                 TRISBbits.TRISB2
#define En_Cathode_LAT                  LATBbits.LATB2
#define En_Cathode_PORT                 PORTBbits.RB2
#define En_Cathode_WPU                  WPUBbits.WPUB2
#define En_Cathode_OD                   ODCONBbits.ODCB2
#define En_Cathode_ANS                  ANSELBbits.ANSELB2
#define En_Cathode_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define En_Cathode_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define En_Cathode_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define En_Cathode_GetValue()           PORTBbits.RB2
#define En_Cathode_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define En_Cathode_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define En_Cathode_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define En_Cathode_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define En_Cathode_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define En_Cathode_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define En_Cathode_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define En_Cathode_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSELC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSELC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSELC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/