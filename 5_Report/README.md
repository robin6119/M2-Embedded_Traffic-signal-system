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

SOFTWARE COMPONENTS:
            
          Atmega328p
          
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
          Faster communication.

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

## BLOCK DIAGRAM

![WhatsApp Image 2021-11-27 at 7 10 04 PM](https://user-images.githubusercontent.com/94118694/143685072-c55e7d77-4f03-4208-bfa2-55423d5cf443.jpeg)

## BEHAVIOURAL DIAGRAM

![WhatsApp Image 2021-11-27 at 7 10 05 PM](https://user-images.githubusercontent.com/94118694/143685121-d200e68a-30c3-4f9f-8fac-34a8a54bb497.jpeg)

![WhatsApp Image 2021-11-27 at 7 51 05 PM (1)](https://user-images.githubusercontent.com/94118694/143846175-2d7f3bcf-6bdd-4fbe-b5a9-e7d4ac018b11.jpeg)

## STRUCTURAL DIAGRAM

![WhatsApp Image 2021-11-27 at 7 10 05 PM (1)](https://user-images.githubusercontent.com/94118694/143685126-90f3439a-a8f1-44bd-8930-aba82f8a0e36.jpeg)

![WhatsApp Image 2021-11-29 at 3 21 07 PM](https://user-images.githubusercontent.com/94118694/143846676-b0c88be6-aba4-42de-a2c3-ab84c827f065.jpeg)

## Simulation Image
![Circuit Simulation](https://user-images.githubusercontent.com/89175883/144375630-e623e24b-22c4-4759-a6a1-b08b7eccf356.jpeg)

## HIGH LEVEL TESTING SCENARIOS

|ID NO|DESCRIPTION|EXPECTED I/P|EXPECTED O/P|ACTUAL O/P|TYPES OF TEST|
|---|---|---|---|---|---|
|H_01|Check and verify whether the traffic light led's are working or not|PASSED|Led's should be displayed|Led's should be displayed|Requirement Based|
|H_02|Check and verify whether the traffic light is working for that particular time|PASSED|Light should be working at that particular time|Light should be working at that particular  time|Scenario Based|
|H_03|Check and verify whether the signal is skipped when there is no traffic on that road|PASSED|Signal shouls be skipped|Signal should be skipped|Boundary Based|

## LOW LEVEL TESTING SCENARIOS

|ID NO|DESCRIPTION|EXPECTED I/P|EXPECTED O/P|ACTUAL O/P|TYPES OF TEST|
|---|---|---|---|---|---|
|L_01|If you receive logic 0 from any of these sensors, we have to give the green signal to that particular path and give red signal to all other paths|PASSED|Working properly|Working properly|Requirement Based|
|L_02|Check whether the sensors are working properly during rainy days or not|PASSED|Sensors should work|sensors should work|Scenario Based|
|L_03|Check and verify whether Cameras should be working properly or not|PASSED|Cameras should work|Cameras should work|Boundary Based|

## CONCLUSION
        
       There  is  exigent  need  of  efficient  traffic  management system  in  our  country,  as  India  meets
       with  384  road accidents  every  day.  To  reduce  this  congestion  and unwanted  time  delay  in  traffic 
       an  advanced  system  is designed here in this project.
