void pahilanaka()
{
  
  int sap=100;
  rak=1;
    analogWrite(ma, 0);
      analogWrite(mb, 0);
      analogWrite(ma1, 0);
      analogWrite(mb1, 0);
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
      rot2^=1;
      rot4^=1;
    delay(2000);
    
 
  while(rak==1 )
  {
   
    digitalWrite(da, HIGH);
    digitalWrite(db, LOW);
    digitalWrite(da1, LOW);
    digitalWrite(db1, HIGH);
    Serial.println("ZHAP");
    // TCCR3B |=0;
    // TCCR1B |=0;
   


      analogWrite(ma, sap);
      analogWrite(mb, sap);
      analogWrite(ma1, 0);
      analogWrite(mb1, 0);
      delay(1600);
      rak=2;
  }
  while(rak==2)
  {    
      
     /*mval = ((float)analogRead(lsa) / 921) * 70;
      
    if (mval >= 5 && mval <= 20 )
    {
      digitalWrite(31,HIGH);
      
    }
    else
    {
      digitalWrite(31,LOW);
    }*/

    ka=85;
    kb=100;
    do
      {
         mval = ((float)analogRead(lsa) / 921) * 70;
         delay(10);
         if(!(mval>=0 && mval<=69 ))
         {
          analogWrite(ma, ka);
      analogWrite(mb, kb);
         }
         else
         {
         
              analogWrite(ma, 0);
              analogWrite(mb, 0);
              s=50;
              f=50;
              ka=55;
              kb=60;
         }
          /*adjust = ((float)analogRead(A11) / 921) * 70;
          delay(10);
        if(!(adjust>=0 && adjust<=69))
         {
           analogWrite(ma1, ka);
           analogWrite(mb1, kb);
     
         }
         else
         {
       analogWrite(ma1, 0);
      analogWrite(mb1, 0);
      f=50;
      ka=55;
              kb=60;
         }*/
      
      }while(!(s==50 && f==50));
        analogWrite(ma1, 0);
      analogWrite(mb1, 0);
       analogWrite(ma, 0);
      analogWrite(mb, 0);
      delay(10);
      /*while(!(adjust>=10 && adjust<=60))
      {
      adjust = ((float)analogRead(A11) / 921) * 70;
          delay(10);
        
           analogWrite(ma1, ka);
           analogWrite(mb1, kb);
     
         
         
      }*/
     /* while(1)
      {
        digitalWrite(da, 0);

  digitalWrite(db1, 1);
   analogWrite(ma, 80);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 80);
    mval = ((float)analogRead(lsa) / 921) * 70;
    if(mval >= 0 && mval <= 60 )
    {
      inton();
    z=51;
    rak=4;
    rot2^=1;
    rot3^=1;
    rot4^=1;
    rot1^=1;
    digitalWrite(db1, rot2);
    digitalWrite(db, rot3);
    digitalWrite(da, rot4);
    digitalWrite(da1, rot1);
    break;  
      }
      }*/
      analogWrite(ma1, 0);
      analogWrite(mb1, 0);
      analogWrite(ma, 0);
      analogWrite(mb, 0);
      delay(100);
      rak=3;
      s=1;
      f=1;
      ka=100;
    
   
}



}

