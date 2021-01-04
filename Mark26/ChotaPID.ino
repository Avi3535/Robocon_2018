void chotaPIDforLoad()
{
    kp = 1; ki = 0.000001; kd = 1;
  
  inton();
  while(1)
  {
  mval = ((float)analogRead(lsaload) / 921) * 70;  
  erlsa = sval - mval;
  p = kp * erlsa;
  d = kd * (erlsa - per);
  totaler += erlsa;
  i = totaler * ki;
  pwm = p + i + d;
  pwm=abs(pwm);
 // pwm*=(-1);
 Serial.println(vare);
  if ((vare >= choluchan && vare <= (8))|| vare1 >= 1 && vare1 <= (8) )
   { //er = 180 - e;
    analogWrite(ma,0);
    analogWrite(ma1,0);
    analogWrite(mb,0);
    analogWrite(mb1,0);
    Serial.println("HERE");
    //delay(2000);
    break;
   }
  

  else if(mval>60)
  {
    if(previous<=32)
    {
      analogWrite(ma,0);
      analogWrite(mb1,0);
      analogWrite(ma1,80);
      analogWrite(mb,80);
     
     
      
    }
   else if(previous>=40)
    {
       analogWrite(ma1,0);
      analogWrite(mb,0);
      analogWrite(ma,80);
      analogWrite(mb1,80); 
      
    }
  }
  else
  {
    previous=mval;
  }  
  
  if (mval >= 0 && mval <= 30)
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
  else if (mval > 36 && mval < 60)
  {
     lessthan();
    
  }
  }
}

