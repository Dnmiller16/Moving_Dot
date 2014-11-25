#include <MeggyJrSimple.h>

int x=4;
int y=7;
int V=random(15);

void setup( )
{
  MeggyJrSimpleSetup();
}

void loop()
{
  {
    int V=random(15);
  CheckButtonsDown();

    if(Button_Right)
    { 
    if ( ReadPx(x+1,y) == 0 )
      x=x+1;
    }
  
      if(Button_Left)
    { 
    if ( ReadPx(x-1,y) == 0 )
      x=x-1;
    }
  
      if(Button_Up)
    { 
    if ( ReadPx(x,y+1) == 0 )
      y=y+1;
    }
  
     if(Button_Down)
    { 
    if ( ReadPx(x,y-1) == 0 )
      y=y-1;
    }
  
  
  {
  
  DrawPx(x,y,V);
  DisplaySlate();
  delay(150);
  ClearSlate();
  }
  }
  {
  DrawPx(7,6,1);
  DrawPx(7,7,1);
  DrawPx(7,5,1);
  DrawPx(7,4,1);
  DrawPx(7,3,1);
  DrawPx(7,2,1);
  DrawPx(7,1,1);
  DrawPx(7,0,1);
    DrawPx(0,6,1);
  DrawPx(0,7,1);
  DrawPx(0,5,1);
  DrawPx(0,4,1);
  DrawPx(0,3,1);
  DrawPx(0,2,1);
  DrawPx(0,1,1);
  DrawPx(0,0,1);
    DrawPx(1,0,1);
    DrawPx(1,5,1);
  DrawPx(2,0,1);
  DrawPx(2,1,1);
  DrawPx(2,2,1);
  DrawPx(2,3,1);
  DrawPx(3,0,1);
  DrawPx(4,0,1);
  //
  //DrawPx(4,1,1);
  DrawPx(4,2,1);
  DrawPx(5,2,1);
  DrawPx(4,3,1);
  DrawPx(4,4,1);
  DrawPx(4,5,1);
  DrawPx(3,5,1);
  DrawPx(5,5,1);
  DrawPx(6,3,1);
  DrawPx(6,0,1);
  DrawPx(7,0,1);
    DrawPx(1,7,1);
  DrawPx(2,7,1);
  DrawPx(3,7,1);
  //DrawPx(4,7,1);
  DrawPx(5,7,1);
  DrawPx(6,7,1);
  DrawPx(7,7,1);
  DisplaySlate();
  }
 1
}



