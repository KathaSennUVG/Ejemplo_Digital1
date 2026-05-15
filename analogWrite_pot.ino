// C++ code
//
int pot1 = A6;

int led_b = 9;


int val_b;
int val1;

int voltaje;

void setup()
{
Serial.begin(9600);
}

void loop()
{
  val1 = analogRead(pot1);
  Serial.print("valor pot: ");
  Serial.println(val1);

  val_b = map(val1, 0, 1023, 0, 255);
    
  Serial.print("valor led: ");
  Serial.println(val_b);

  analogWrite(led_b, val_b);

  delay(500);


}