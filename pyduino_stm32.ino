  #include "CommandLine.h"

  void
  setup() {
  Serial.begin(115200);
  //pinMode(LED_BUILTIN, OUTPUT);
  while(!Serial.available());
  for(int i =0;i<100;i++)
Serial.println(" ");
  }

  void
  loop() {
  bool received = getCommandLineFromSerialPort(CommandLine);      //global CommandLine is defined in CommandLine.h
  if (received) 
  DoMyCommand(CommandLine);
  }
