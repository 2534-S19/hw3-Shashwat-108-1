/*
 * GPIO.c
 *
 *  Created on:  3rd March, 2020
 *      Author:  Shashwat Singh
 */

// For the code you place here, you may use your code that uses register references.
// However, I encourage you to start using the Driver Library as soon as possible.

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "myGPIO.h"

// defining the buttons here:
#define L_left BIT1 // Launchpad left
#define L_right BIT4 // Launchpad right
#define B_up BIT1 // Booster up
#define B_down BIT5 // Booster down

// defining the LEds on the launchpad:
#define L_1 BIT0 // launchpad led1
#define L_red BIT0 // launchpad led2 red
#define L_green BIT1 // launchpad led2 green
#define L_blue BIT2 // launchpad led2 blue

// defining the LEds on the Booster:
#define B_red BIT6 // launchpad led2 red
#define B_green BIT4 // launchpad led2 green
#define B_blue BIT6 // launchpad led2 blue

// TODO: Create a function to initialize the GPIO.
// Even though this assignment does not use all of the pushbuttons, you should write one function that does a complete GPIO init.
void initGPIO()
{
    P1DIR &= ~L_left;
    P1REN |= L_left;
    P1OUT |= L_left;

    P1DIR &= ~L_right;
    P1REN |= L_right;
    P1OUT |= L_right;

    P5DIR &= ~B_up;
    P5REN |= B_up;
    P5OUT |= B_up;

    P3DIR &= ~B_down;
    P3REN |= B_down;
    P3OUT |= B_down;
//    -----------------------
    P1DIR |= L_1;
    P2DIR |= L_red;
    P2DIR |= L_green;
    P2DIR |= L_blue;
//    ------------------------
    P2DIR |= B_red;
    P2DIR |= B_green;
    P5DIR |= B_blue;

    // Turn off all LEDs at the start.
    // turning off the LEDs:
    P1OUT &= ~L_1;
    P2OUT &= ~L_red;
    P2OUT &= ~L_green;
    P2OUT &= ~L_blue;
    P2OUT &= ~B_red;
    P2OUT &= ~B_green;
    P5OUT &= ~B_blue;
}


// TODO: Create a function to return the status of Launchpad Pushbutton S1
unsigned char checkStatus_LaunchpadS1()
{
    return (P1IN & L_left);
}

// TODO: Create a function to return the status of Launchpad Pushbutton S2
unsigned char checkStatus_LaunchpadS2()
{
    return (P1IN & L_right);
}

// TODO: Create a function to return the status of Boosterpack Pushbutton S1
unsigned char checkStatus_BoosterpackS1()
{
    return (P5IN & B_up);
}

// TODO: Create a function to return the status of Boosterpack Pushbutton S2
unsigned char checkStatus_BoosterpackS2()
{
    return (P3IN & B_down);
}

// TODO: Create a function to turn on Launchpad LED1.
void turnOn_LaunchpadLED1()
{
    P1OUT |= L_1;
}

// TODO: Create a function to turn off Launchpad LED1.
void turnOff_LaunchpadLED1()
{
    P1OUT &= ~L_1;
}

// TODO: Create a function to turn on the Red Launchpad LED2.
void turnOn_LaunchpadLED2Red()
{
    P2OUT |= L_red;
}

// TODO: Create a function to turn off the Red Launchpad LED2.
void turnOff_LaunchpadLED2Red()
{
    P2OUT &= ~L_red;
}

// TODO: Create a function to turn on the Green Launchpad LED2.
void turnOn_LaunchpadLED2Green()
{
    P2OUT |= L_green;
}

// TODO: Create a function to turn off the Green Launchpad LED2.
void turnOff_LaunchpadLED2Green()
{
    P2OUT &= ~L_green;
}

// TODO: Create a function to turn on the Blue Launchpad LED2.
void turnOn_LaunchpadLED2Blue()
{
    P2OUT |= L_blue;
}

// TODO: Create a function to turn off the Blue Launchpad LED2.
void turnOff_LaunchpadLED2Blue()
{
    P2OUT &= ~L_blue;
}

// TODO: Create a function to turn on the Red Boosterpack LED2.
void turnOn_BoosterpackLEDRed()
{
    P2OUT |= B_red;
}

// TODO: Create a function to turn off the Red Boosterpack LED2.
void turnOff_BoosterpackLEDRed()
{
    P2OUT &= ~B_red;
}

// TODO: Create a function to turn on the Green Boosterpack LED2.
void turnOn_BoosterpackLEDGreen()
{
    P2OUT |= B_green;
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDGreen()
{
    P2OUT &= ~B_green;
}

// TODO: Create a function to turn on the Blue Boosterpack LED2.
void turnOn_BoosterpackLEDBlue()
{
    P5OUT |= B_blue;
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDBlue()
{
    P5OUT &= ~B_blue;
}
