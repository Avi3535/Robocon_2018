void greater()
{

  /* analogWrite(pwm1,150+pwm);
       analogWrite(pwm2,150-pwm);
       analogWrite(pwm3,150+pwm);
       analogWrite(pwm4,150-pwm);*/

  if (diff > 0)
  {

    
    analogWrite(ma, ka - (pyr)*diff - pwm);
    analogWrite(mb, ka + (pyra)*diff + pwm);

    // Serial.println("JAST");
  }
  else if (diff < 0)
  {
    //d=0;
    
    analogWrite(ma, ka - (pyr)*diff - pwm);
    analogWrite(mb, ka + (pyra)*diff + pwm);
    // Serial.println("KAMI");
  }
  else if (diff == 0)
  {
    //d=0;
   
    analogWrite(ma, ka - pwm);
    analogWrite(mb, ka + pwm);

    // Serial.println("SAHI");
  }
  /*
      PICHE WAALE MOTORWA KE LIYE
    }*/
  if (diff1 > 0)
  {
    
    analogWrite(mb1, ka  + (pyra)*diff1 - pwm);
    analogWrite(ma1, ka - (pyr)*diff1 + pwm-5);
    // Serial.println("JAST1");
  }
  else if (diff1 < 0)
  {
    //d=0;
    
    analogWrite(mb1, ka  + (pyra)*diff1 - pwm);
    analogWrite(ma1, ka - (pyr)*diff1 + pwm-5);

    // Serial.println("KAMI1");
  }
  else if (diff1 == 0)
  {
    //d=0;
    

    analogWrite(mb1, ka  - pwm);
    analogWrite(ma1, ka + pwm-5);
    // Serial.println("SAHI1");
  }


}

void greaterthan()
{
  analogWrite(ma1,ka+pwm);
 analogWrite(mb,ka+pwm);
 analogWrite(ma,ka-pwm);
 analogWrite(mb1,ka-pwm);
 
}


