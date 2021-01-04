void zoneone()
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
  
  
    while(digitalRead(junc) == HIGH)
   {
     // digitalWrite(31,HIGH);
     
     rak=5;
     intoff();
     
    }
    ka=80;
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
}
while(rak==6)
{
 analogWrite(ma, 0);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 0);
    
    //delay(10);
       /* analogWrite(ma, 25);
    analogWrite(ma1, 25);
    analogWrite(mb, 28);
    analogWrite(mb1, 25);
    do{


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
    
      
    //  mval = ((float)analogRead(lsaload) / 921) * 70;
    
      
      mval = ((float)analogRead(lsaload) / 921) * 70;
    
    }while(!(mval>=1 && mval<=70));*/
    delay(1000);
   
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
    mval = ((float)analogRead(A11) / 921) * 70;
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
    
    
    
    
    

    analogWrite(ma1, 0);
    analogWrite(mb1, 0);
    delay(50);
    
    
    analogWrite(ma, 0);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 0);
    
    //digitalWrite(db,rot4);
      mval = ((float)analogRead(lsa) / 921) * 70;
      if(mval>=30 && mval <=40 )
      {
        mval=35;
        rot3^=1;
       rot4^=1;
      
      }
     else if((mval>40 && mval<=70 ) || (previous>=50))
      {
    rot4^=1;
    digitalWrite(da,rot4);
    do{ 
      mval = ((float)analogRead(lsa) / 921) * 70;
      if(mval>=0 && mval <=40)
      {
        mval=35;
        break;
      }
    analogWrite(ma, 30);
    analogWrite(ma1, 0);
    analogWrite(mb, 30);
    analogWrite(mb1, 0);
    mval = ((float)analogRead(lsa) / 921) * 70;
      }while(!(mval>=30 && mval<=40));
      rot3^=1;
      }
      
      else if((mval<30 && mval>=0) || (previous<=32))
      {
        rot3^=1;
    digitalWrite(db,rot3); 
      do{
        mval = ((float)analogRead(lsa) / 921) * 70;
      if(mval>=30 && mval <=70 )
      {
        mval=35;
        break;
      }
    analogWrite(ma, 30);
    analogWrite(ma1, 0);
    analogWrite(mb, 30);
    analogWrite(mb1, 0);
    
        
      
      mval = ((float)analogRead(lsa) / 921) * 70;
      //lsaf();*/
      
    
    }while(!(mval>=30 && mval<=40));
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
    
  rak=7; //delay(2000);
  for(a=1;a<=5;a++)
  {
    digitalWrite(47,LOW);
    delay(100);
    digitalWrite(47,HIGH);
    delay(100);
  }
  a=1;
digitalWrite(47,LOW);
digitalWrite(49, HIGH);
delay(500);
digitalWrite(49, LOW);
//delay(1000);

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
     rak=8;
     intoff();
    }
   /*else
    {
      digitalWrite(31,LOW);
    }*/
  
  
}
while(rak==8)
{
    diff = c - e;
  diff1 = c1 - e1;
  diff = diff / 10;
  diff1 = diff1 / 10;
  mval = ((float)analogRead(lsa) / 921) * 70;
  lsaf();
  
   
   if(digitalRead(junc) == HIGH)
   {
      //digitalWrite(31,HIGH);
     rak=9;
     intoff();
    }
  
  
  
}


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
         
         delay(10);
         /*if(pakoda==50)
         {
           analogWrite(ma1, 0);
              analogWrite(ma, 0);
              pakoda=50;
              ka=65;
              kb=70;
         }
     else*/ if(!(mval>=35 && mval<=55 ))
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

   delay(1000);
  /*digitalWrite(da, 0);
  digitalWrite(db,1);
  digitalWrite(da1,0);
  digitalWrite(db1,1);
    analogWrite(ma, 50);
    analogWrite(ma1, 50);
    analogWrite(mb, 50);
    analogWrite(mb1, 50);
    delay(500);*/

  digitalWrite(da1, 1);
  digitalWrite(db, 0);
  digitalWrite(db1, 1);
  ka=100;
    analogWrite(mb,0);
        analogWrite(ma1,0);
     analogWrite(ma,ka);
     analogWrite(mb1,ka);
      
         
    while(1)
    {
      mval = ((float)analogRead(lsa) / 921) * 70;
      //adjust = ((float)analogRead(A11) / 921) * 70;
      if((mval>=1 && mval <=70) /*&& vare1>=2*/)
      {
        analogWrite(ma,0);
        analogWrite(mb,0);
        analogWrite(ma1,0);
        analogWrite(mb1,0);
        delay(100);
        intoff();
        break;
        /*if((adjust>=10 && adjust <=69) /*&& vare1>=2)
      {
       /* analogWrite(ma,0);
        analogWrite(mb,0);
        analogWrite(ma1,0);
        analogWrite(mb1,0);
        intoff();
        break;
      }*/
       // break;
      }
       
      
      
    }
    ka=70;
    analogWrite(ma,0);
    analogWrite(mb1,0);
        analogWrite(mb,ka+15);
        analogWrite(ma1,ka);
        
    while(1)
    {
      mval = ((float)analogRead(lsaload) / 921) * 70;
      if(mval>=10 && mval <=70)
      {
        analogWrite(ma,0);
        analogWrite(mb,0);
        analogWrite(ma1,0);
        analogWrite(mb1,0);
        break;
      }
      
    }
    //chusnya=3;
      break;
}
      if(digitalRead(33)==LOW)
{
  break;
}
}
          
        
  
/* vare=1;
    vare1=1;
    ka=30;
    digitalWrite(da, 0);
  digitalWrite(da1, 0);
  digitalWrite(db, 1);
  digitalWrite(db1, 1);
  chotaPIDforLsa();*/
   /* rot2^=1;
   rot3^=1;
    rot4^=1;
   rot1^=1;*/
   //inton();
   //vare1=0;
  
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
