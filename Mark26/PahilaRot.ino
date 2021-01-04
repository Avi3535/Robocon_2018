void pahilaphatekrot()
{
  int sap=80;


  /*if(a==1){
    
      z=50;
  choluchan=1000;
      per = 0;
      erlsa = 0;
      sval = 35;
      mval = 0;
      p = 0; i = 0; d = 0;
      pwm = 0; totaler = 0;
        
      ka=103;
      kb=100;
      ka1=100;
      kb1=105;
      rot2^=1;
       rot4^=1;
    delay(2000);
    a*=(-1);
  }*/
  
   
  
    pakoda=1;
    bhajji=1;
    s=1;
    f=1;
    ka=80;
    kb=80;
   //s=1;f=1;
  
      
      delay(500);
       digitalWrite(da, HIGH);
    digitalWrite(db, LOW);
    digitalWrite(da1, LOW);
    digitalWrite(db1, HIGH);
    mval = ((float)analogRead(lsa) / 921) * 70;
    adjust = ((float)analogRead(A11) / 921) * 70;
      while(!(s==50 && f==50))
      {
         //delay(10);
         if(!(mval>=5 && mval<=60 ))
         {
           mval = ((float)analogRead(lsa) / 921) * 70;
          analogWrite(ma, ka);
          analogWrite(mb, ka);
         }
         else
         {
          analogWrite(ma, 0);
              analogWrite(mb, 0);
              s=50;
              ka=55;
              //kb=60;
             



          
              
         }
          
          //delay(10);
        if(!(adjust>=5 && adjust<=50 ))
         {
           analogWrite(ma1, ka);
           analogWrite(mb1, ka);
           adjust = ((float)analogRead(A11) / 921) * 70;
         }
         else
         {
       analogWrite(ma1, 0);
      analogWrite(mb1, 0);
      f=50;
      ka=55;
              //kb=60;
         }
      
      }
      
       analogWrite(ma1, 0);
      analogWrite(mb1, 0);
       analogWrite(ma, 0);
      analogWrite(mb, 0);

      delay(100);
      rak=3;
      s=1;
      f=1;
      pakoda=1;
  z=50;
  choluchan=1000;
      per = 0;
      erlsa = 0;
      sval = 35;
      mval = 0;
      p = 0; i = 0; d = 0;
      pwm = 0; totaler = 0;
        
      ka=100;
      kb=100;
      ka1=100;
      kb1=105;
      anna=2;
    // zhapzhap++;
      
      

  
  


}
