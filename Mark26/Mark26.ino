#include<SoftwareSerial.h>
#include<avr/interrupt.h>

/***************************************************Initalize******************************************************/



/* CONNECT 31  TO INT3*/ /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int a = 1, s = 0, f = 1, g = 1,  vare = 0, varc = 0, junc = 48, n = 1,pakoda=1,bhajji=1;
long int diff;
int  z = 1, rak =0 ,choluchan=7,rot4=1,rot3=0,rot2=0,rot1=1;
int ccount=6;//For TZ & TZ2
int adjust,pehla,setti,anna=1;
int war,machine;
int swit=43,looop;
int  zhapzhap=1;


unsigned long c = 0, e = 0;
int  er0, er11, vare1 = 0, varc1 = 0;
long int diff1;
unsigned long c1 = 0, e1 = 0;
unsigned int ka=140,kb=100, ka1=100, kb1=100;

float pyr = 0.5, pyra = 0.5;


float kp = 4, ki = 0.000000001, kd = 1; //To Be adjusted
int per = 0;
int erlsa = 0;
int sval = 35;
int mval = 0;
int p = 0, d = 0;
float pwm = 150, totaler = 0, i = 0;
int lsa = A2;
//int dir1=9,dir2=11,dir3=2,dir4=4;
//int pwm1=10,pwm2=12,pwm3=3,pwm4=5;
int previous;
int ma = 10, mb = 8, ma1 =12, mb1 = 11, da = 9, db = 36, da1 = 25, db1 = 29;

int bhara=0;
int lsaload=A4,juncload=50,juncret=52;


void bakuda();
void lsaf();
void greater();
void less();
void between();
void pahilaphatekrot();
void skipjunc();
void zonethree();

ISR(INT2_vect)
{
  c++;
  if (c % 135 == 0)
  {

    varc++;
    c = 0;


  }
  
}
ISR(INT0_vect)
{
  e++;
  if (e % 135 == 0)
  {

    vare++;
    e = 0;
  }
  

}
ISR(INT1_vect)
{
  c1++;
  if (c1 % 135 == 0)
  {

    varc1++;
    c1 = 0;


  }

  
}
ISR(INT4_vect)
{
  e1++;
  if (e1 % 135 == 0)
  {

    vare1++;
    e1 = 0;
  }
  
}




void inton()
{
  EICRA |=  (1 << ISC01) | (1 << ISC21) | (1 << ISC11) | (1 << ISC31) ;
  EICRB |= (1 << ISC41);
  EIMSK |= (1 << INT2) | (1 << INT0) | (1 << INT1) | (1 << INT4) | (1 << INT3) ;
}

void intoff()
{
  //EICRA =  0;
  // EICRB |= (1<<ISC41);
  EIMSK |= (0<< INT2) | (0 << INT0) | (0 << INT1) | (0 << INT4) | (1 << INT3) ;
  c=0;e=0;c1=0;e1=0;
}

  

void setup() {
  // put your setup code here, to run once:
  pinMode(ma, OUTPUT);
  pinMode(mb, OUTPUT);
  pinMode(ma1, OUTPUT);
  pinMode(mb1, OUTPUT);
  pinMode(da, OUTPUT);
  pinMode(db, OUTPUT);
  pinMode(da1, OUTPUT);
  pinMode(db1, OUTPUT);
  pinMode(31,OUTPUT);
  digitalWrite(31,LOW);
  pinMode(18, INPUT);

  pinMode(lsa, INPUT);
  pinMode(19, INPUT);
  pinMode(20, INPUT);
  pinMode(21, INPUT);
  pinMode(2, INPUT);
  pinMode(junc, INPUT);
  pinMode(lsaload, INPUT);
  pinMode(juncload, INPUT);
  pinMode(A11, INPUT);
  pinMode(A7, INPUT);
  pinMode(43, INPUT);
  pinMode(3, INPUT);
   
pinMode(51,OUTPUT);
pinMode(53,OUTPUT);
pinMode(49,OUTPUT);
pinMode(47,OUTPUT);
pinMode(40,INPUT);
pinMode(46,OUTPUT);
digitalWrite(46,1);

  //attachInterrupt(3, skipjunc, FALLING);
  
  inton();
  vare = 0, varc = 0, vare1 = 0, varc1 = 0;
  Serial.begin(9600);
  digitalWrite(da,rot4);
  digitalWrite(db,rot3);
  digitalWrite(da1,rot1);
  digitalWrite(db1,rot2);
   // analogWrite(ma, 30);
    analogWrite(ma1, 50);
    analogWrite(mb, 50);
   // analogWrite(mb1, 30);
   // delay(2000);
    a=50;
    g=1;
    
 //   chusnya=1;
 //   rot2^=1;
  //  rot4^=1; 
  // bogus=1;
 // rak=2;z=2;

//ka=100;
if(digitalRead(3)==1)
    {
      looop=1;
      choluchan=7;
      Serial.println("Looop is 1");
    }
    else if(digitalRead(3)==0) 
    {
      looop=2;
      choluchan=9;
      Serial.println("Looop is 0");
      ka=100;
    }
  
}




void loop() {
  // analogWrite(ma, 100);
  // put your main code here, to run repeatedly:
 // mval = ((float)analogRead(lsa) / 921) * 70;
  //  chotaPIDforLoad();
   // lsaf();
 // Serial.println(pwm);
 
   while(a==50)
    {
       mval = ((float)analogRead(lsa) / 921) * 70;
       if(mval<=70 && mval>=7 )
       {
        a=51;
        analogWrite(ma, 0);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 0);
    delay(100);
    rot2^=1;
    rot4^=1;
    digitalWrite(da, rot4);
  digitalWrite(da1, rot1);
  digitalWrite(db, rot3);
  digitalWrite(db1, rot2);
  ka=100;
        break;
       }
    }
    

     while(g==1 && looop==1)
  {
  diff = c - e;
  diff1 = c1 - e1;
  diff = diff / 10;
  diff1 = diff1 / 10;
     mval = ((float)analogRead(lsa) / 921) * 70;
    lsaf();
    //lsaf();
  //Serial.println(pwm);
    if (vare >= choluchan && vare <= (choluchan + 5)) 
   { //er = 180 - e;
    ka=105;
    kb=100;
    g=2;
    choluchan=1;
    //rak=2;
    intoff();
   }
   
   if (digitalRead(junc) == HIGH)
    {
      intoff();
    //pahilanaka();
    ka=140;
    kb=100;
    g=2;
    z=2;
    analogWrite(ma, 0);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 0);
      
    }
     
    
  }
  ka=100;
  n=1;
  while(g==1 && looop==2)
  {
    while(n==1)
    {
  diff = c - e;
  diff1 = c1 - e1;
  diff = diff / 10;
  diff1 = diff1 / 10;
     mval = ((float)analogRead(lsa) / 921) * 70;
    lsaf();
    while(digitalRead(junc)==HIGH)
    {
      n=2;
    }
    }
    while(n==2)
    {
      
      ka=75;
  diff = c - e;
  diff1 = c1 - e1;
  diff = diff / 10;
  diff1 = diff1 / 10;
     mval = ((float)analogRead(lsa) / 921) * 70;
    lsaf();
    while(digitalRead(junc)==HIGH)
    {
      g=2;
      n=3;
      choluchan=3;
    analogWrite(ma, 0);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 0);
    }
    }
    
     
    
  }
 // ka=140;
 // kb=140;
  while( g==2 )
  {
    ka--;
    kb *=0.99;////////////////////////////////////////////////////////////////////////
    
    ka=max(ka,50);
    kb=max(kb,25);/////////////////////////////////////////////////////////////////
    bakuda();
    
    
    //chotaPIDforLsa();
    
    mval = ((float)analogRead(lsaload) / 921) * 70;
    if (mval>=15 && mval <=70)
    {
    
     analogWrite(ma, 0);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 0);
    delay(1000);
      inton();
      vare=0;
      pwm=0;
     // pwm = 0;
    per = 0;
    totaler = 0;
      rot2^=1;
      rot4^=1;
  digitalWrite(da, rot4);
  digitalWrite(da1, rot1);
  digitalWrite(db, rot3);
  digitalWrite(db1, rot2);
    analogWrite(ma, 0);
    analogWrite(ma1, 0);
    analogWrite(mb, 0);
    analogWrite(mb1, 0);
    delay(10);
    ka=40;
    vare=0;
  vare1=0;
      chotaPIDforLoad();
      rot2^=1;
      rot4^=1;
      g=3;
    }
  }
 
  while(1)
  {

  if(digitalRead(33)==LOW)
{
   Serial.println("One");
  pahilaphatekrot();
  z=2;
  rak=3;
   anna=1;
   zoneone();
  
}

else if(digitalRead(41)==LOW)
{
  Serial.println("TWO");
  pahilaphatekrot();
   anna=1;
   z=2;
  rak=3;
   zonetwo();
}
else if(digitalRead(37)==LOW)
{
  Serial.println("Three");
  pahilaphatekrot();
   anna=1;
   z=2;
  rak=3;
   zonethree();
}
  }


}

void lsaf()
{
  digitalWrite(da, rot4);
  digitalWrite(da1, rot1);
  digitalWrite(db, rot3);
  digitalWrite(db1, rot2);
  
  
  // mval = constrain(mval,0,70);
 // Serial.println(mval);
 
  per = erlsa;


  // Serial.print(mval);
  erlsa = sval - mval;
  p = kp * erlsa;
  d = kd * (erlsa - per);
  totaler += erlsa;
  i = totaler * ki;
  pwm = p + i + d;
  //pwm=abs(pwm);
  if(rak>=0 && rak<=ccount)
  {
    pwm*=(-1);
    war=0;
    machine=120;
  }
  else
  {
    war=120;
    machine=0;
  }

  if(mval>60 || (mval>0 && mval<5) )
  {
    if(previous<=30)
    {
      
     
      analogWrite(ma1,war);
      analogWrite(mb,war);
      analogWrite(ma,machine);
      analogWrite(mb1,machine);
      
    }
   else if(previous>=50)
    {
       analogWrite(ma,war);
      analogWrite(mb1,war);
      analogWrite(ma1,machine);
      analogWrite(mb,machine);
      
    }
  }
  else
  {
    previous=mval;
  }  
  
  if (mval >= 5 && mval <= 30)
  {
    greater();
   
  }
  else if (mval >= 34 && mval <= 36)
  {

    pwm = 0;
    per = 0;
    totaler = 0;
    between();

  }
  else if (mval > 36 && mval < 70)
  {
     less();
    
  }
  
  
}

ISR(INT3_vect)
{
  rak++;
  
}



  
