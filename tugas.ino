void setup(){
   Serial.begin(9600);
 }

void loop()
{

 Serial.println("Kalkulator mencari sudut segitiga ");
 Serial.println("MIRING: ");
 float a = getFloatFromSerialMonitor();
 Serial.println(a);
 Serial.println("SAMPING: ");  
 float b = getFloatFromSerialMonitor();
 Serial.println(b); 
 Serial.println("DEPAN: ");  
 float c = getFloatFromSerialMonitor();
 Serial.println(c);
 Serial.println("SUDUT: ");  
 float d= (atan(c/b)*(180/3.14));
 Serial.println(d);
 Serial.println("~~~~~~~~~~~~~~~~~~");    
}

  float getFloatFromSerialMonitor(){
  char inData[20];  
  float f=0;    
  int a=0;  
  while (a<1){  
  String str;   
  if (Serial.available()) {
    delay(100);
    int i=0;
    while (Serial.available() > 0) {
     char  inByte = Serial.read();
      str=str+inByte;
      inData[i]=inByte;
      i+=1;
      a=2;
    }
    f = atof(inData);
    memset(inData, 0, sizeof(inData));  
  }
  }//END WHILE A<1  
   return f; 
  }
