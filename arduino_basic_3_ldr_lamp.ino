//create by:   modified : 31-dec-2017
//Name : Muhammad Syaiful anwar
//team : angkrang
//project_3_smart_lamp

int sensorvalue = 0;
int ldr  = A3;
int lamp = 7;


void setup() 
{
  Serial.begin(9600);
  pinMode(ldr, INPUT);
  pinMode(lamp, OUTPUT);
}

void loop() 
{
  sensorvalue = analogRead(A3);
  Serial.println(sensorvalue);

  if (sensorvalue > 100)
  {
   digitalWrite(lamp, HIGH);
  }
  else
  {
   digitalWrite(lamp, LOW); 
  }

}
