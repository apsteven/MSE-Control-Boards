void setup() {
  // put your setup code here, to run once:

// Automated function variables
// Used as a boolean to turn on/off automated functions like periodic random sounds and periodic dome turns
boolean isInAutomationMode = true;
unsigned long automateMillis = 0;
byte automateDelay = random(2, 10); // set this to min and max seconds between sounds

}

void loop() {
  // put your main code here, to run repeatedly:

  if (isInAutomationMode)&(mode1)&(driveState == 1) {
    triggerAutomation();
  }

}

void triggerAutomation(){
  // Plays random sounds for automations when in automation mode
    unsigned long currentMillis = millis();

    if (currentMillis - automateMillis > (automateDelay * 1000)) {
      automateMillis = millis();


          sendCommand(CMD_PLAY_W_INDEX, random(7, 24));



      // sets the mix, max seconds between automation actions - sounds and dome movement
      automateDelay = random(2,10);
    }
}
