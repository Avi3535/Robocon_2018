
void zonethree()
{
  ccount=9;
  while(anna==1){
   //pehla=adjust;
   
   
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
  mval = ((float)analogRead(lsa) / 921) * 70;
   /*  if(mval >= 0 && mval <= 70 )
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
    analogWrite(ma, 40);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 30);
    mval = ((float)analogRead(lsa) / 921) * 70;
  // mval=35;
    if(mval >= 5 && mval <= 60 )
    {
      inton();
    z=51;
    rak=4;
    ka=140;
    
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
  
  
   while (digitalRead(junc) == HIGH)
   {
     // digitalWrite(31,HIGH);
     rak=5;
    }
   /* else
    {
      digitalWrite(31,LOW);
    }*/
    
    
    
    
     
    
}

 if(rak==5)
{
    diff = c - e;
  diff1 = c1 - e1;
  diff = diff / 10;
  diff1 = diff1 / 10;
  mval = ((float)analogRead(lsa) / 921) * 70;
  lsaf();
  
  
   while (digitalRead(junc) == HIGH)
   {
     // digitalWrite(31,HIGH);
     rak=6;
    }
   /* else
    {
      digitalWrite(31,LOW);
    }*/
    
    
    
    
     
    
}
 if(rak==6)
{
    diff = c - e;
  diff1 = c1 - e1;
  diff = diff / 10;
  diff1 = diff1 / 10;
  mval = ((float)analogRead(lsa) / 921) * 70;
  lsaf();
  
  
   while (digitalRead(junc) == HIGH)
   {
     // digitalWrite(31,HIGH);
     rak=7;
    }
   /* else
    {
      digitalWrite(31,LOW);
    }*/
    
    
    
    
     
    
}
 if(rak==7)
{
    diff = c - e;
  diff1 = c1 - e1;
  diff = diff / 10;
  diff1 = diff1 / 10;
  mval = ((float)analogRead(lsa) / 921) * 70;
  lsaf();
  
  
  while (digitalRead(junc) == HIGH)
   {
     // digitalWrite(31,HIGH);
     rak=8;
     //intoff();
    }
   /* else
    {
      digitalWrite(31,LOW);
    }*/
    ka=75;
    ka1=75;
    kb=75;
    kb1=75;
     
    
    
    
     
    
}


if(rak==8)
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
    rak=9;
    intoff();
    
  }
}
while(rak==9)
{
    
    analogWrite(ma, 0);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 0);
    delay(100);
    do{
    analogWrite(ma, 25);
    analogWrite(ma1, 25);
    analogWrite(mb, 28);
    analogWrite(mb1, 25);
      /*mval = ((float)analogRead(lsa) / 921) * 70;
      lsaf();*/
      mval = ((float)analogRead(lsaload) / 921) * 70;
    
    }while(!(mval>=60 && mval<=70));
    //delay(600);
   
    delay(80);
    mval = ((float)analogRead(A11) / 921) * 70;
    if(mval>=30 && mval<=40)
    {
      mval=35;
      setti=500;
      rot1^=1;
      rot2^=1;
      
    }
    else if(setti==2 || (mval<=29 && mval>=0))
    {
      
    rot2^=1;
    digitalWrite(db1, rot2);
    do{
    mval = ((float)analogRead(A11) / 921) * 70;
    if(mval>=30 && mval<=70)
    {
      //mval=35;
      setti=500;
      break;
    }
    
    analogWrite(ma, 0);  
    analogWrite(mb, 0);
    analogWrite(ma1, 30);
    analogWrite(mb1, 30);
    
    }while(!(mval>=30 && mval<=40));
    rot1^=1;
       
      
    }
    
   else if(setti==1 || (mval>=41 && mval<=70))
    {
      
    rot1^=1;
    digitalWrite(da1, rot1);
    do{
    mval = ((float)analogRead(A11) / 921) * 70;
    if(mval>=0 && mval<=40)
    {
     // mval=35;
      setti=500;
      break;
    }
    
    analogWrite(ma, 0);  
    analogWrite(mb, 0);
    analogWrite(ma1, 30);
    analogWrite(mb1, 30);
    mval = ((float)analogRead(A11) / 921) * 70;
    
    
    }while(!(mval>=30 && mval<=40));
    rot2^=1;
       
      
    }
    analogWrite(ma, 0);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 0);
    
    //digitalWrite(db,rot4);
     
      mval = ((float)analogRead(lsa) / 921) * 70;
      if(mval>=32 && mval <=45 )
      {
        mval=35;
        rot3^=1;
       rot4^=1;
      
      }
     else if((mval>45 && mval<=70 ) || (previous>=40))
      {
    rot4^=1;
    digitalWrite(da,rot4);
    do{ 
      mval = ((float)analogRead(lsa) / 921) * 70;
      if(mval>=0 && mval <=45)
      {
        mval=35;
        break;
      }
    analogWrite(ma, 30);
    analogWrite(ma1, 0);
    analogWrite(mb, 30);
    analogWrite(mb1, 0);
    
      }while(!(mval>=35 && mval<=45));
      rot3^=1;
      }
      
      else if((mval<35 && mval>=0) || (previous<=32))
      {
        rot3^=1;
    digitalWrite(db,rot3); 
      do{
      if(mval>=30 && mval <=70 )
      {
        
        break;
      }
    analogWrite(ma, 30);
    analogWrite(ma1, 0);
    analogWrite(mb, 30);
    analogWrite(mb1, 0);
    
        
      
      mval = ((float)analogRead(lsa) / 921) * 70;
      //lsaf();*/
      
    
    }while(!(mval>=35 && mval<=45));
    rot4^=1;
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
   
  
  
    
  rak=10;
  //delay(2000);
for(a=1;a<=5;a++)
  {
    digitalWrite(47,LOW);
    delay(100);
    digitalWrite(47,HIGH);
    delay(100);
  }
  a=1;

digitalWrite(51, HIGH);
delay(500);
digitalWrite(51, LOW);
digitalWrite(47,LOW);
//delay(1000);
ka=140;
inton();
 per = 0;
      erlsa = 0;
      sval = 35;
      mval = 0;
      p = 0; i = 0; d = 0;
      pwm = 0; totaler = 0;
      mval=40;
    
  
}
while(rak==10)
{
  diff = c1 - e;
  diff1 = c - e1;
  diff = diff / 10;
  diff1 = diff1 / 10;
  
  lsaf();
  mval = ((float)analogRead(lsa) / 921) * 70;
   while (digitalRead(junc) == HIGH)
   {
      //digitalWrite(31,HIGH);
      rak=11;
    }
   /* else
    {
      digitalWrite(31,LOW);
    }*/
  
  
}
while(rak==11)
{
  diff = c1 - e;
  diff1 = c - e1;
  diff = diff / 10;
  diff1 = diff1 / 10;
  mval = ((float)analogRead(lsa) / 921) * 70;
  lsaf();
  
  while (digitalRead(junc) == HIGH)
   {
      //digitalWrite(31,HIGH);
      rak=12;
    }
   /* else
    {
      digitalWrite(31,LOW);
    }*/
  
  
}

while(rak==12)
{
  diff = c1 - e;
  diff1 = c - e1;
  diff = diff / 10;
  diff1 = diff1 / 10;
  mval = ((float)analogRead(lsa) / 921) * 70;
  lsaf();
  
    while (digitalRead(junc) == HIGH)
   {
      //digitalWrite(31,HIGH);
      rak=13;
    }
   /* else
    {
      digitalWrite(31,LOW);
    }*/
    
    
  
}
while(rak==13)
{
  diff = c1 - e;
  diff1 = c - e1;
  diff = diff / 10;
  diff1 = diff1 / 10;
  mval = ((float)analogRead(lsa) / 921) * 70;
  lsaf();
  
    while (digitalRead(junc) == HIGH)
   {
      //digitalWrite(31,HIGH);
      rak=14;
      
    }
   /* else
    {
      digitalWrite(31,LOW);
    }
    ka=75;
    ka1=75;
    kb=75;
    kb1=75;*/
  
}
while(rak==14)
{
  diff = c1 - e;
  diff1 = c - e1;
  diff = diff / 10;
  diff1 = diff1 / 10;
  mval = ((float)analogRead(lsa) / 921) * 70;
  lsaf();
  s=1;f=1;
    if(digitalRead(junc) == HIGH)
   {
      //digitalWrite(31,HIGH);
      rak=15;
      
    
     // break;
      
    }
   /* else
    {
      digitalWrite(31,LOW);
    }*/
  
}



s=1;
f=1;
while(rak==15)
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
     else*/ if(!(mval>=35 && mval<=65 ))
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
      //delay(100);
      
      

      delay(1000);
  
        // delay(1000);

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

  
