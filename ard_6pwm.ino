

int leds[6]={3,5,6,9,10,11};
int brgt[6]={0,0,0,0,0,0};

int moo=0;

void setup() 
{                
  for(int i=0;i<6;i++)
  {
    pinMode(leds[i], OUTPUT);     
    analogWrite(leds[i],brgt[i]);
  }
}


void loop() 
{

  if( moo<250)
  {
  
    brgt[0]=moo;
    brgt[1]=moo;
    brgt[2]=moo;
    brgt[3]=moo;
    brgt[4]=moo;
    brgt[5]=moo;
  
    analogWrite(leds[0],brgt[0]);
    analogWrite(leds[1],brgt[1]);
    analogWrite(leds[2],brgt[2]);
    analogWrite(leds[3],brgt[3]);
    analogWrite(leds[4],brgt[4]);
    analogWrite(leds[5],brgt[5]);
    moo=moo+10;
 
  }
  else
  {
    moo=0;
  }  
  
  delay(100);
  

}
