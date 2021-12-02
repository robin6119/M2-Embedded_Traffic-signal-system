# INTRODUCTION

         The  project  is  aimed  at  designing  a  density based dynamic traffic signal system 
        where the  timing of signal  will  change  automatically  on  sensing  the  traffic density  at
        any  junction.  Traffic  congestion  is  a  severe problem in most cities across the world and therefore
        it is time to shift more manual mode or fixed timer mode to an automated  system  with  decision  making 
        capabilities. Present  day traffic  signaling system  is fixed  time based which  may  render
        inefficient  if one  lane  is operational than the others. To optimize this problem we have made
        a framework  for  an  intelligent  traffic  control  system.
 ## FEATURES OF TRAFFIC SIGNAL SYSTEM 
  
         In this system, we will use IR sensors to measure the traffic density.
         We have to arrange one IR sensor for each road; these sensors always sense
         the traffic on that particular road. All these sensors are interfaced to the microcontroller.
         Based on these sensors, controller detects the traffic and controls the traffic system.

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

## STATE OF ART

    Though the prototype model worked very efficiently with remarkable outputs, the real life situation is going to be 
    way  more  challenging  and  demanding.  Few  of  the challenges that should be taken into account are listed as follows 
    Low range IR sensors may not be an answer for long range signaling system. We may resort to ultrasound or radar techniques
    for big scale set-ups.
    • Next is  the influence of stray signals that may alter the reading of sensor receptors and lead to conveying false information
    to the microcontroller.  • Periodic checking of the accuracy and precision is a must  for  efficacious  operation  of  this 
    prototype.  Safety  first:  it  has  to  be  absolutely  made  sure  that  no compromise  is  being  made  on  safety  issues,  
    a secondary  stand-by  set-upthat  can  switch  over  from automated to manual mode, should be provided in case of sensor  or 
    circuit  malfunctions  so  that   crowd does not go beyond control.  As  part  of  future  advancements,  the  traffic
    check  post may be  connected by wireless  transmitters by  the crossings ahead may be an anticipation of the traffic that
    is approaching. This may be achieved the connecting the sensor  network  with  GPS  connectivity  and  short  wave radio
    transmission signals. This act as a feedforward system  making the  signaling  system even  more smooth and congestion free.

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
 
        If there will be no traffic on the other signal, one shouldn’t wait for that signal. 
        The system will skip that signal and will move on the next one.

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



