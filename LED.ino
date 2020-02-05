void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);  
  pinMode(8, OUTPUT);  
  pinMode(9, OUTPUT);  
  pinMode(10, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()==0)
  {
    
  }
      int number=Serial.parseInt();
      
      
      int binary[5]={0,0,0,0,0};
      int count=0,remain;
      while(number!=0)
      {
        remain=number%2;
        number=number/2;
        binary[count]=remain;
        count++;
      }
      for(int i=5;i>0;i--)
      {
        if(binary[i]==1)
          digitalWrite(i+5,HIGH);
      }

}
