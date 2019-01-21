#ifndef PAINTER_H
#define PAINTER_H

class Painter
{
   private:
   	float px=0,py=0; //pen coordinates

   public:
    void MoveTo(float x,float y);
    void Rectangle(float x2,float y2);
    void Line(float x2,float y2);
    void Fill();
    void SelectColor(float R,float G,float B,float A);
    void Stroke();	

    void Check();
};

#endif // PAINTER_H