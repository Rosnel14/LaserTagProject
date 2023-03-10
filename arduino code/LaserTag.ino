
// Sets up global constants for pin numbers
int Test_Pin = 1;
int Button_Pin = 2;
int LED_PIN = 3;


void setup() 
{
  // put your setup code here, to run once:
  
  // Set up communication port for later 
  Serial.begin(9600);
  
  // Pin 1 is an output for testing
  pinMode(Test_Pin,OUTPUT);
  
  // Pin 3 is an output to LED
  pinMode(LED_PIN,OUTPUT);
  
  // Pin 2 reads in button input
  pinMode(Button_Pin, INPUT_PULLUP);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  // read the input pin
  
  button_test();
}

void button_test()
{
  // if button is pressed then light will turn on
  // if let go then it will stop
  if (digitalRead(Button_Pin) == HIGH)
  {
    digitalWrite(LED_PIN, HIGH);
  } 
  else 
  {
    digitalWrite(LED_PIN, LOW);
  }
}
