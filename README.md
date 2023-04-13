### MQ2 Gas Sensor
The MQ2 gas sensor is a sensor commonly used to detect combustible gases such as LPG, propane, methane, hydrogen, alcohol, smoke, and others. It uses a thermal resistance to measure the gas concentration.

To operate the MQ2 sensor with Arduino, connect the VCC pin of the sensor to the 5V pin of the Arduino, the GND pin of the sensor to the GND pin of the Arduino, and the AO (analog output) pin of the sensor to an analog input pin of the Arduino. If the DOUT (digital output) pin of the sensor is not used, it can be left unconnected.

For the Arduino code, the AO pin of the sensor should be defined as an analog input. Then, you can use the analogRead() function to read the voltage value from the AO pin of the sensor, which depends on the gas concentration detected by the sensor.

![alt text](https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png "Logo Title Text 1")
