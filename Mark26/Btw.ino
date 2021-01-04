void between()
{


  if (diff > 0)
  {

    
    analogWrite(ma, ka - (pyr)*diff);
    analogWrite(mb, ka + (pyra)*diff);

    // Serial.println("JAST");
  }
  else if (diff < 0)
  {
    //d=0;
   

    analogWrite(ma, ka - (pyr)*diff);
    analogWrite(mb, ka + (pyra)*diff);
    // Serial.println("KAMI");
  }
  else if (diff == 0)
  {
    //d=0;
   
    analogWrite(ma, ka);
    analogWrite(mb, ka);
    // Serial.println("SAHI");
  }
  /*
      PICHE WAALE MOTORWA KE LIYE
    }*/
  if (diff1 > 0)
  {
    
    analogWrite(mb1, ka  - (pyr)*diff1);
    analogWrite(ma1, ka + (pyra)*diff1-5);
    // Serial.println("JAST1");
  }
  else if (diff1 < 0)
  {
    //d=0;
   
    analogWrite(mb1, ka  - (pyr)*diff1);
    analogWrite(ma1, ka + (pyra)*diff1-5);
    // Serial.println("KAMI1");
  }
  else if (diff1 == 0)
  {
    //d=0;
    
    analogWrite(mb1, ka );
    analogWrite(ma1, ka-5);
    // Serial.println("SAHI1");
  }


}

void inbetween()
{
  analogWrite(ma1,ka);
 analogWrite(mb,ka);
 analogWrite(ma,ka);
 analogWrite(mb1,ka);

 
}


