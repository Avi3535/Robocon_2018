void zonetwo()
{
  ccount=6;
  ka=100;
  while(anna==1)
  {
    
    adjust = ((float)analogRead(A11) / 921) * 70;
  
  if (adjust > 70)
  {
    if (pehla <= 32)
    {
      setti=2;
    }
    else if (pehla >= 39)
    {
      setti=1;
    }

  }
  else
  {
    pehla = adjust;
  }
  
 if(rak==3)
{
  
    ka=100;
    analogWrite(ma, 0);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 0);
    delay(100);
 /* mval = ((float)analogRead(lsa) / 921) * 70;
    if(mval >= 0 && mval <= 70 )
    {
      inton();
    z=51;
    rak=4;
    ka=100;
    
    digitalWrite(db1, rot2);
    digitalWrite(db, rot3);
    digitalWrite(da, rot4);
    digitalWrite(da1, rot1);
    break;
      
    }*/
    
  z=50;


  while(z==50){
  digitalWrite(da, 0);

    digitalWrite(db1, 1);
    analogWrite(ma, 80);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 80);
    mval = ((float)analogRead(lsa) / 921) * 70;
    if(mval >= 5 && mval <= 60 )
    {
      inton();
    z=51;
    rak=4;
    ka=100;
    
    digitalWrite(db1, rot2);
    digitalWrite(db, rot3);
    digitalWrite(da, rot4);
    digitalWrite(da1, rot1);
    break;
      
    }
     
  }
} 
 if(rak==4)
{
    diff = c - e;
  diff1 = c1 - e1;
  diff = diff / 10;
  diff1 = diff1 / 10;
  mval = ((float)analogRead(lsa) / 921) * 70;
  lsaf();
  
  
    if(digitalRead(junc) == HIGH)
   {
     // digitalWrite(31,HIGH);
      analogWrite(ma, 0);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 0);
     rak=6;
     intoff();
     
    }
    ka=80;
   /* else
    {
      digitalWrite(31,LOW);
    }*/
   
    
    
    
     
    
}

 /*if(rak==5)
{
  diff = c - e;
  diff1 = c1 - e1;
  diff = diff / 10;
  diff1 = diff1 / 10;
  mval = ((float)analogRead(lsa) / 921) * 70;
  lsaf();
  if (digitalRead(junc) == HIGH)
  {
    analogWrite(ma, 0);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 0);
    //delay(2000);
    rak=6;
    intoff();
  }
}*/
while(rak==6)
{
   analogWrite(ma, 0);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 0);
    
    delay(100);
    /*do{
    analogWrite(ma, 25);
    analogWrite(ma1, 25);
    analogWrite(mb, 28);
    analogWrite(mb1, 25);
      
      mval = ((float)analogRead(lsaload) / 921) * 70;
    
    }while(!(mval>=35 && mval<=70));*/
    //delay(50);
   
    mval = ((float)analogRead(A11) / 921) * 70;
    if(mval>=65 && mval<=70) 
    {
      mval=35;
      setti=500;
      rot1^=1;
      rot2^=1;
      
    }
    else if(setti==2 || (mval<=64 && mval>=0))
    {
      
    rot2^=1;
    digitalWrite(db1, rot2);
    do{
    mval = ((float)analogRead(A11) / 921) * 70;
    if(mval>=65 && mval<=70)
    {
      //mval=35;
      setti=500;
      break;
    }
    
    analogWrite(ma, 0);  
    analogWrite(mb, 0);
    analogWrite(ma1, 25);
    analogWrite(mb1, 25);
    mval = ((float)analogRead(A11) / 921) * 70;
    }while(!(mval>=65 && mval<=70));
    rot1^=1;
       
      
    }
    
   else if(setti==1 /*|| (mval>=41 && mval<=70)*/)
    {
      
    rot1^=1;
    digitalWrite(da1, rot1);
    do{
    mval = ((float)analogRead(A11) / 921) * 70;
    if(mval>=65 && mval<=70)
    {
     // mval=35;
      setti=500;
      break;
    }
    
    analogWrite(ma, 0);  
    analogWrite(mb, 0);
    analogWrite(ma1, 25);
    analogWrite(mb1, 25);
    mval = ((float)analogRead(A11) / 921) * 70;
    
    
    }while(!(mval>=65 && mval<=70));
    rot2^=1;
       
      
    }
    
    
    
    
    

    analogWrite(ma1, 0);
    analogWrite(mb1, 0);
    delay(50);
    
    
    analogWrite(ma, 0);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 0);
    
    //digitalWrite(db,rot4);
     
      mval = ((float)analogRead(lsa) / 921) * 70;
      if(mval>=60 && mval <=70 )
      {
        mval=25;
        rot3^=1;
       rot4^=1;
      
      }
    
      
      else if((mval<60 && mval>=0)|| (previous<=32))
      {
        rot3^=1;
    digitalWrite(db,rot3); 
      do{
      if(mval>=60 && mval <=70 )
      {
        mval=65;
        break;
      }
    analogWrite(ma, 35);
    analogWrite(ma1, 0);
    analogWrite(mb, 35);
    analogWrite(mb1, 0);
    
        
      
      mval = ((float)analogRead(lsa) / 921) * 70;
      
      
    
    }while(!(mval>=60 && mval<=70));
    rot4^=1;
      }
       else if( (previous>=40))// CHECK THIS LOOP From MARK15**************************************************************************************
      {
    rot4^=1;
    digitalWrite(da,rot4);
    do{ 
      
      if(mval>=60 && mval <=70 )
      {
        mval=65;
        break;
      }
    analogWrite(ma, 25);
    analogWrite(ma1, 0);
    analogWrite(mb, 25);
    analogWrite(mb1, 0);
    mval = ((float)analogRead(lsa) / 921) * 70;
      }while(!(mval>=60 && mval<=70));
      rot3^=1;
      }
  
 // rot1^=1;
  analogWrite(ma, 0);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 0);
   digitalWrite(db1, rot2);
   digitalWrite(da1, rot1);
   digitalWrite(db,rot3);
   digitalWrite(da,rot4);
    
  rak=7;
  //delay(2000);
  //delay(3000);
  for(a=1;a<=10;a++)
  {
    digitalWrite(47,LOW);
    delay(100);
    digitalWrite(47,HIGH);
    delay(100);
  }
  a=1;
digitalWrite(47,LOW);
digitalWrite(53, HIGH);
delay(500);
digitalWrite(53, LOW);
//delay(2000);

bakudatwo();
rak=7;
ka=100;
inton();

 
}
while(rak==7)
{
    diff = c - e;
  diff1 = c1 - e1;
  diff = diff / 10;
  diff1 = diff1 / 10;
  mval = ((float)analogRead(lsa) / 921) * 70;
  lsaf();
  
  while (digitalRead(junc) == HIGH)
   {
      //digitalWrite(31,HIGH);
     rak=9;
    }
   /*else
    {
      digitalWrite(31,LOW);
    }*/
  
  
}
/*while(rak==8)
{
    diff = c - e;
  diff1 = c1 - e1;
  diff = diff / 10;
  diff1 = diff1 / 10;
  mval = ((float)analogRead(lsa) / 921) * 70;
  lsaf();
  
   
   while(digitalRead(junc) == HIGH)
   {
      //digitalWrite(31,HIGH);
     rak=9;
     intoff();
    }
  
  
  
}*/

while(rak==9)
{
  ka=100;
  analogWrite(ma, 0);
      analogWrite(mb, 0);
      analogWrite(ma1, 0);
      analogWrite(mb1, 0);
      delay(100);
  
  pakoda=1;bhajji=1;
     digitalWrite(da, LOW);
    digitalWrite(db, HIGH);
    digitalWrite(da1, HIGH);
    digitalWrite(db1, LOW);
    mval = ((float)analogRead(lsaload) / 921) * 70;
    adjust = ((float)analogRead(A7) / 700) * 70;
    while(!(pakoda==50 && bhajji==50) )
      {
         
         //delay(10);
         /*if(pakoda==50)
         {
           analogWrite(ma1, 0);
              analogWrite(ma, 0);
              pakoda=50;
              ka=65;
              kb=70;
         }
     else*/ if(!(mval>=15 && mval<=65 ))
         {
          analogWrite(ma, ka);
      analogWrite(ma1, ka);
      mval = ((float)analogRead(lsaload) / 921) * 70;
         }
         else
         {
          analogWrite(ma1, 0);
              analogWrite(ma, 0);
              pakoda=50;
              ka=65;
              kb=70;
              
         }
          
          //delay(10);
         /* if(bhajji==50)
         {
            analogWrite(mb1, 0);
      analogWrite(mb, 0);
      //pakoda=50;
      bhajji=50;
      ka=35;
              kb=40;
         }
       else*/ if(!(adjust>=15 && adjust<=40 ))
         {
           analogWrite(mb, ka);
           analogWrite(mb1, kb);
           adjust = ((float)analogRead(A7) / 700) * 70;
         }
         else
         {
       analogWrite(mb1, 0);
      analogWrite(mb, 0);
      //pakoda=50;
      bhajji=50;
      ka=65;
              kb=70;
              //break;
         }
         }
         analogWrite(ma, 0);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 0);
         
         delay(1000);

      while(1)
        {
           if((digitalRead(41)==LOW) || (digitalRead(37)==LOW) )
{
 
    //chusnya=3;
      break;
}

}

  
    rak=2;
        z=2;
        anna=2;
        rot1^=1;
        rot2^=1;
        rot3^=1;
        rot4^=1;
    zhapzhap++;
    break;
  
     
    
     
      
}

  

}
}
