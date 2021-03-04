int LDR=A0;
int LED=3;
int dataSensor;
int pinEnable = 4;
int motor_in1 = 5;
int motor_in2 = 6;
void setup()
{
  pinMode(LDR, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(pinEnable, OUTPUT);
  pinMode(motor_in1, OUTPUT);
  pinMode(motor_in2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  dataSensor = analogRead(LDR);
  Serial.println (dataSensor);
  digitalWrite(13, HIGH);
  digitalWrite(13, LOW);
  if (dataSensor <100){
    digitalWrite (LED, HIGH);
    digitalWrite (pinEnable, HIGH);
    digitalWrite (motor_in1, HIGH);
    digitalWrite (motor_in2, LOW);
  }
  else
  digitalWrite (LED, LOW);
  digitalWrite (pinEnable, HIGH);
  digitalWrite (motor_in1, LOW);
  digitalWrite (motor_in2, LOW);
}
