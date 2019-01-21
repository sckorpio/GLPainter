#include "painter.h"
#include "manager.h"

void Painter::MoveTo(float x,float y)
{
	px=x; py=y;
}

void Painter::Line(float x,float y)
{
	float vertices[]={px,py,0,
	                  x,y,0};
	unsigned int indices[]={0,1};
	
    loadDataInBuffers(vertices,sizeof(vertices),indices,2);

    SetMode(LINE);
}


void Painter::Rectangle(float x,float y)
{
    float vertices[]={px,py,0,
	                  x,py,0,
	                  x,y,0,
	                  px,y,0};
	unsigned int indices[]={0,1,2,3};

	std::cout<<"AAA"<<(sizeof(indices) / sizeof(indices[0]))<<std::endl;
	
    loadDataInBuffers(vertices,sizeof(vertices),indices,4);

    SetMode(RECTANGLE);
}

void Painter::Fill()
{
	FillShape();
}

void Painter::SelectColor(float R,float G,float B,float A)
{
	SetColor(R,G,B,A);
}

void Painter::Check()
{
	 float vertices[] = {
         0.3f,  0.3f, 0.0f,  // top right
         0.5f,  0.3f, 0.0f,  // bottom right
         0.5f,  0.5f, 0.0f,  // bottom left
         0.3f,  0.5f, 0.0f   // top left 
    };

    unsigned int indices[] = {  // note that we start from 0!
       0, 1, 2, 0 ,2 ,3 // first Triangle
         // second Triangle
    };

    loadDataInBuffers(vertices,sizeof(vertices),indices,6);
     SetMode(RECTANGLE);

}

void Painter::Stroke()
{
	draw();
}