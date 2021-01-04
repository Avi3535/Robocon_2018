void chotaPIDforLsa()
{
  digitalWrite(da,0);
  digitalWrite(db,0);
  digitalWrite(da1,1);
  digitalWrite(db1,1);
kp = 0.5; ki = 0.000001; kd = 1;
  
  inton();
 // ka=50;
  
  do
  {
     mval = ((float)analogRead(lsaload) / 921) * 70;
    if (mval>=0 && mval <=70)
   {
    analogWrite(ma,0);
    analogWrite(ma1,0);
    analogWrite(mb,0);
    analogWrite(mb1,0);
    Serial.println("HERE");
    delay(100);
    break;
   }
  mval = ((float)analogRead(lsa) / 921) * 70;  
  erlsa = sval - mval;
  p = kp * erlsa;
  d = kd * (erlsa - per);
  totaler += erlsa;
  i = totaler * ki;
  pwm = p + i + d;
 // pwm=abs(pwm);
  pwm*=(-1);
 //Serial.println(vare);
  
  

   if(mval>70)
  {
    if(previous<=32)
    {
      
     
      analogWrite(ma1,0);
      analogWrite(mb,0);
      analogWrite(ma,30);
      analogWrite(mb1,30);
      
    }
   else if(previous>=40)
    {
       analogWrite(ma,0);
      analogWrite(mb1,0);
      analogWrite(ma1,30);
      analogWrite(mb,30);
      
    }
  }
  
 else if (mval >= 0 && mval <= 30)
  {
    greaterthan();
   
  }
  else if (mval >= 34 && mval <= 36)
  {

    pwm = 0;
    per = 0;
    totaler = 0;
    inbetween();

  }
  else if (mval > 36 && mval < 70)
  {
     lessthan();
    
  }
  }while((ka<=50));
}

