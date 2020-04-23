# Ultrasonic ranging module

## Summary

1. [Description](#Description)
2. [HC-SR04 module](#HC-SR04-module)
3. [Code description](#Code-description)
4. [Results](#Results)
5. [References](#References)

## Description

>Our goal in this project is creation of *field-programmable gate array* which will measure distance between  
>its sensors and a detectable object. The object must be at a distance between 2 centimeters and 4 meters
>and also must not deviate more than 15 degrees away from the detectors axis. 
>For this purpose we will be using [HC-SR04 module](#HC-SR04-module) mounted on Coolrunner II CPLD board.

### Schematic

<img src="Images/schema.png" alt="Scheme" height="300"/> 

## HC-SR04 module
*All informations about connection pins, functionality and timing* 
*have been drawn from enclosed HC-SR04.pdf file*
>This module consists of ultrasonic emitter and receiver and necessary circuitry to achieve its function. Connection with board 
>is transmitted via four pins as follows: **U<sub>cc</sub>**, **Trig**, **Echo** and **GND**. **U<sub>cc</sub>** and **GND** are 
>used for powering the module with **+5V** voltage. After sending 10us 40 kHz signal to **Trig** the module emitter sends out 
>burst of 8 40 kHz sonic pulse signals and waits for reflected signals. During this time, between sending and receiving, is signal 
>on pin **Echo** set to logic 1. 
	
## Code-description

>Our objective is to measure time of output from the module, convert it to distance and display it on the 4-digit 7-segment display.
###Driver for HC-SR04 module 
Three inputs: 

* 10 Mhz clock input 
* synchronous reset
* echo - signal timing modules output

Two outputs:

* trigg_o for triggering the module
* distance - distance in mm in binary after division

This driver works as a Finite State Machine (FSM) with three states, described in following diagram.

<img src="Images/HC_SR04_driver_state_diagram.png" alt="Scheme" height="250"/> 

During measurement process a variable s_time is filled with according value, which is then transformed into distance in a combinational section.

## Results
### HC-SR04_driver


On the following pictures is a screenshot of simulation of HC-SR04_driver and screenshot of the moment between two measurements.

<img src="Images/HC_SR40_driver_tb00_simulation.png" alt="Scheme" height="300"/> 
<img src="Images/HC_SR40_driver_tb00_simulation_close.png" alt="Scheme" height="300"/> 

## References
> [*Type conversion article*](https://www.bitweenie.com/listings/vhdl-type-conversion/)
> Following sites were used a lot to get much appreciated information
> *[*All about FPGA*](https://allaboutfpga.com)
> *[*Stack overflow*](https://stackoverflow.com)
