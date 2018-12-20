/*
 * Project PhotonSensor
 * Description:
 * Author: SAB
 * Date: 12/19/2018

 */

 // The on-board LED
 int led = D7;

 void setup() {
   pinMode(led, OUTPUT);
 }
 void loop() {
   // Turn the LED Off
   digitalWrite(led, HIGH);
   // Publish an event to trigger the integration
   // Replace "my-event" with the event name you used when configuring the integration
   // Replace "test-data" with the real data you'd like to send to Google Cloud Platform
   //Particle.publish("LED-Change", "value", PRIVATE);
   // Wait for 3 seconds
   delay(3000);
   // Turn the LED off
   digitalWrite(led, LOW);
   delay(3000);
 }
