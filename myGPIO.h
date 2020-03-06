/*
 * myGPIO.h
 *
 *  Created on:  3/2/2020
 *      Author:  Shashwat Singh
 *
 */

#ifndef MYGPIO_H_
#define MYGPIO_H_

// This function initializes the peripherals used in the program.
void initGPIO();
// This function returns the value of Launchpad S1.
unsigned char checkStatus_LaunchpadS1();
// This function returns the value of Launchpad S2.
unsigned char checkStatus_LaunchpadS2();
// This function returns the value of Boosterpack S1.
unsigned char checkStatus_BoosterpackS1();
// This function returns the value of Boosterpack S2.
unsigned char checkStatus_BoosterpackS2();
// This function turns on Launchpad LED1.
void turnOn_LaunchpadLED1();
// This function turns off Launchpad LED1.
void turnOff_LaunchpadLED1();
// This function turns on Launchpad Red LED2.
void turnOn_LaunchpadLED2Red();
// This function turns off Launchpad Red LED2.
void turnOff_LaunchpadLED2Red();
// This function turns on Launchpad Blue LED2.
void turnOn_LaunchpadLED2Blue();
// This function turns off Launchpad Blue LED2.
void turnOff_LaunchpadLED2Blue();
// This function turns on Launchpad Green LED2.
void turnOn_LaunchpadLED2Green();
// This function turns off Launchpad Green LED2.
void turnOff_LaunchpadLED2Green();
// This function turns on Boosterpack Red LED.
void turnOn_BoosterpackLEDRed();
// This function turns off Boosterpack Red LED.
void turnOff_BoosterpackLEDRed();
// This function turns on Boosterpack Green LED.
void turnOn_BoosterpackLEDGreen();
// This function turns off Boosterpack Green LED.
void turnOff_BoosterpackLEDGreen();
// This function turns on Boosterpack Blue LED.
void turnOn_BoosterpackLEDBlue();
// This function turns off Boosterpack Blue LED.
void turnOff_BoosterpackLEDBlue();

// TODO: Define any constants that are local to myGPIO.c using #define

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

#endif /* MYGPIO_H_ */
