//create by:   modified 31-dec-2017
//Name : Muhammad Syaiful anwar
//team : angkrang
//project_2_RGB

#define red   = 7;
#define green = 8;
#define blue  = 9;

void setup() 
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);  
  pinMode(blue, OUTPUT);

}

void loop() 
{
digitalWrite(red,   HIGH);
digitalWrite(green, LOW);
digitalWrite(blue,  LOW);
delay(1000);
digitalWrite(red,   LOW);
digitalWrite(green, HIGH);
digitalWrite(blue,  LOW);
delay(1000);
digitalWrite(red,   LOW);
digitalWrite(green, LOW);
digitalWrite(blue,  HIGH);
}
