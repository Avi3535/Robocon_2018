void bakuda()
{
        analogWrite(ma,0);
        analogWrite(mb,ka+5);
        analogWrite(ma1,ka);
        analogWrite(mb1,0);
        
       /* analogWrite(ma,30);
        analogWrite(mb,30);
        analogWrite(ma1,30);
        analogWrite(mb1,30);*/
    
}

/*void bakudaone()
{
        analogWrite(ma,0);
        analogWrite(mb,ka);
        analogWrite(ma1,ka-10);
        analogWrite(mb1,0);
        
       
    
}*/


void bakudatwo()
{
        digitalWrite(da, HIGH);
    digitalWrite(db, LOW);
    digitalWrite(da1, LOW);
    digitalWrite(db1, HIGH);
 
      while(!(s==50 && f==50))
      {
         mval = ((float)analogRead(lsa) / 921) * 70;
         delay(10);
         if(!(mval>=5 && mval<=45 ))
         {
          analogWrite(ma, ka);
      analogWrite(mb, ka);
         }
         else
         {
          analogWrite(ma, 0);
              analogWrite(mb, 0);
              s=50;
              ka=55;
              kb=60;
             



          
              
         }
          adjust = ((float)analogRead(A11) / 921) * 70;
          //delay(10);
        if(!(adjust>=5 && adjust<=45 ))
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
         }
      
      }
      
       analogWrite(ma1, 0);
      analogWrite(mb1, 0);
       analogWrite(ma, 0);
      analogWrite(mb, 0);

      delay(100);
      rak=3;
  
}

