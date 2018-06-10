 
 #include <Rainbowduino.h>

void setup()
{
  Rb.init(); //initialize Rainbowduino driver
}
unsigned int v; 
unsigned int z,x,y;
unsigned int c; 
void loop()
{
 
 for(x=0;x<4;x++)
  {
       delay(20);
    for(y=0;y<4;y++)
    {
      delay(20);
      for(z=0;z<4;z++) {
     Rb.setPixelZXY(z,x,y,0xff0000); //RED 
      }
    }
  }  
  

   for(x=0;x<4;x++)
  {
       delay(20);
    for(y=0;y<4;y++)
    {
      delay(20);
      for(z=0;z<4;z++) {
     Rb.setPixelZXY(z,x,y,0xe6e600); // YELLOW
      }
    }
  }  



   for(x=0;x<4;x++)
  {
       delay(20);
    for(y=0;y<4;y++)
    {
      delay(20);
      for(z=0;z<4;z++) {
     Rb.setPixelZXY(z,x,y,0x00e600); // GREEN
      }
    }
  }

  
  
//  delay(100);
  // Rb.blankDisplay();


 for(x=0;x<4;x++)
  {
       delay(20);
    for(y=0;y<4;y++)
    {
      delay(20);
      for(z=0;z<4;z++) {
     Rb.setPixelZXY(z,x,y,0x33bbff); // BLUE
      }
    }
  }  


 for(x=0;x<4;x++)
  {
       delay(20);
    for(y=0;y<4;y++)
    {
      delay(20);
      for(z=0;z<4;z++) {
     Rb.setPixelZXY(z,x,y,0xcc33ff); // Purple
      }
    }
  }  
}
