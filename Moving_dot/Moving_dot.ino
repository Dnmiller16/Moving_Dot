#include <MeggyJrSimple.h>

int x=4;
int y=7;
int c=15;
int d=2;
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
    
     if(Button_Down)
    { 
    if ( ReadPx(x,y-1) == 15 ){
      c=0;
      d=0;
      y=1;
    } 
    if(x==0)
    {
     ClearSlate();
     void Drawwin();
     DisplaySlate();
    }
      
 
    }
  
  
  {
  
  DrawPx(x,y,V);
  DisplaySlate();
  delay(150);
  ClearSlate();
  }
  }
  {
  DrawPx(5,0,d); // draws exit
  DrawPx(1,1,c); // draws key
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
  //DisplaySlate();
  }
 
}

void Drawwin()
{
  for(int i=0;i<8;i++)
  for(int m=0;m<8;m++)
  {
    int n=random(15);
    int m=random(7);
    int i=random(7);

  DrawPx(i,0,n);
  DrawPx(i,1,n);
  DrawPx(i,2,n);
  DrawPx(i,3,n);
  DrawPx(i,4,n);
  DrawPx(i,5,n);
  DrawPx(i,6,n);
  DrawPx(i,7,n);
  DrawPx(0,m,n);
  DrawPx(1,m,n);
  DrawPx(2,m,n);
  DrawPx(3,m,n);
  DrawPx(4,m,n);
  DrawPx(5,m,n);
  DrawPx(6,m,n);
  DrawPx(7,m,n);
 DisplaySlate();
delay(100);
DisplaySlate();
  }
}


