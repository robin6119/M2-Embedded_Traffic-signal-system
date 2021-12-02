## HIGH LEVEL TESTING SCENARIOS

|ID NO|DESCRIPTION|EXPECTED I/P|EXPECTED O/P|ACTUAL O/P|TYPES OF TEST|
|---|---|---|---|---|---|
|H_01|Check and verify whether the traffic light led's are working or not|PASSED|Led's should be displayed|Led's should be displayed|Requirement Based|
|H_02|Check and verify whether the traffic light is working for that particular time|PASSED|Light should be working at that particular time|Light should be working at that particular time|Scenario Based|
|H_03|Check and verify whether the signal is skipped when there is no traffic on that road|PASSED|Signal shouls be skipped|Signal should be skipped|Boundary Based|

## LOW LEVEL TESTING SCENARIOS

|ID NO|DESCRIPTION|EXPECTED I/P|EXPECTED O/P|ACTUAL O/P|TYPES OF TEST|
|---|---|---|---|---|---|
|L_01|If you receive logic 0 from any of these sensors, we have to give the green signal to that particular path and give red signal to all other paths|PASSED|Working properly|Working properly|Requirement Based|
|L_02|Check whether the sensors are working properly during rainy days or not|PASSED|Sensors should work|sensors should work|Scenario Based|
|L_03|Check and verify whether Cameras should be working properly or not|PASSED|Cameras should work|Cameras should work|Boundary Based|
