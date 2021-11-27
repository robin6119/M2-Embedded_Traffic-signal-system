# INTRODUCTION

       Nowadays, controlling the traffic becomes major issue because of rapid increase in automobiles and also because of large time delays between traffic lights. So, in order to rectify this problem, we will go for density based traffic lights system. This project explains you how to control the traffic based on density.
       
 ## FEATURES OF TRAFFIC SIGNAL SYSTEM 
  
    In this system, we will use IR sensors to measure the traffic density. We have to arrange one IR sensor for each road; these sensors always sense the traffic on that particular road. All these sensors are interfaced to the microcontroller. Based on these sensors, controller detects the traffic and controls the traffic system.

## IDENTIFYING THE REQUIREMENTS

HARDWARE COMPONENTS:

ATmega8 controller

PCB board

IR sensors -4

LED’s-12(4-red,4-green,4-yellow)

12v Battery or adaptor

Serial cable

Connecting wires

SOFTWARE COMPONENTS:

SimulIDE

Virtual studio code

avr-gcc

Make

## SWOT ANALYSIS

STRENGTH: 

  This project helps in reducing the time delay.

WEAKNESS:

  IR sensors sometimes may absorb normal light also. As a result, traffic system works in improper way.
  
  IR sensors work only for fewer distances.
  
  We have to arrange IR sensors in accurate manner otherwise they may not detect the traffic density.

OPPORTUNITIES:

  Avoids wastage of time due to the traffic
  
  Fully automatic
  
  Low power consumption
  
  It provides the easy access in the traffic light
  
  Low cost to design the circuit, maintenance of the circuit is good
  
  Easy convenience to handle.

THREADS:

 IR sensors sometimes may absorb normal light also. As a result, traffic system works in improper way.
  
 ## 4W's AND 1H
 
 WHAT:
 
  This Project explains you how to control the traffic based on density.
 
 WHERE:
 
  In High traffic density areas to control traffic automatically and efficiently.
  
 WHEN:
 
  During dense traffic areas.
  High populated areas.
 
 WHY:
 
    If there will be no traffic on the other signal, one shouldn’t wait for that signal. The system will skip that signal and will move on the next one.

 HOW:
 
    It controls traffic signals automatically using sensors and microcontroller.

## HIGH LEVEL REQUIREMENTS

|ID|DESCRIPTION|STATUS|
|---|---|---|
|HLR_1|Fully Automated|Future|
|HLR_2|Sensors And Atmega328|Implemented|
|HLR_3|Alarm Interfaced with atmega328|Future|

## LOW LEVEL REQUIREMENTS

|ID|DESCRIPTION|STATUS|
|---|---|---|
|LLR_1|LEDs Interfaced with atmega|Implemented|
|LLR_2|Resistors|Implemented|
|LLR_3|Cameras|Implemented|
