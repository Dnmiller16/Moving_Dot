#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();      // Required code, line 2 of 2.
}

void loop()                     // run over and over again
{
  
  ClearSlate();              // Erase the screen
 int xcoord = 4;        // Set initial cursor position to 4,4.
 int ycoord = 4;
  
  CheckButtonsPress();
  if (Button_Right);
  {
    if (xcoord < 7)
      xcoord = xcoord + 1;
    if (xcoord > 7)
      xcoord = 0;
  }
    
  
  DrawPx(xcoord,ycoord,Yellow);           // Draw a dot at x=3, y=4, in yellow.
  DisplaySlate();                  // Write the drawing to the screen.
  delay(100);
  ClearSlate();  // waits for a second
               // waits for a second
}
