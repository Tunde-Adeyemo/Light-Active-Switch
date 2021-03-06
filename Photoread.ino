//Tunde Ade/20
//22.07.20 rev 01/03/21

int R0 = 0,R1 = 1,R2 = 2;
float V,V1,V2,vx =5.0 ;


void setup() 
{
  Serial.begin(9600);
}

void loop() 
{  
  V =vx/1024*analogRead(R0);
  V1 =vx/1024*analogRead(R1);
  V2 =vx/1024*analogRead(R2);
  Serial.print(V);Serial.print(" \t");
  Serial.print(V1);Serial.print(" \t");
  Serial.print(V2);Serial.print(" \t");
  Serial.println(millis()/1000000.0);
  delay(200);
}
