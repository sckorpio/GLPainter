#include "mydrawing.h"
#include "painter.h"

void drawingpage()
{
   Painter P;

    P.MoveTo(0.3,0.3);
    P.Rectangle(0.5,0.5);
    P.SelectColor(1,0,0,1);

   

    //----------------

    P.MoveTo(-0.3,-0.3);
    P.Rectangle(-0.5,-0.5);
    P.SelectColor(1,1,0,1);
    P.Fill();

    //-----------------

    P.MoveTo(0.3,-0.3);
    P.Line(-0.5,0.5);
    P.SelectColor(0,1,0,1);
   
    //P.Stroke();
   
  
}