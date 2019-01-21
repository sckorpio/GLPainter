#include "renderer.h"
#include <iostream>

void GLClearError()
{
	while(glGetError()!=GL_NO_ERROR);
}

bool GLLogCall(const char* function,const char* file,int line)
{
	while(GLenum error =glGetError())
	{
		std::cout<<"[ OpenGL Error ] ("<< error <<")"<<function<<" "<< file<<" : "<<line<<std::endl;
	    return false;
	}
	return true;
}

//---------------------------------------------------

void Renderer::Draw(const VertexArray& va,const IndexBuffer& ib,const Shader& shader) const
{
    shader.Bind();
    va.Bind();
    ib.Bind();

    glDrawElements(mode,ib.GetCount(),GL_UNSIGNED_INT,0);

     glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

     
	
}

void Renderer::ClearBackground(float R,float G,float B,float A)
{
	glClearColor(R,G,B,A);
	glClear(GL_COLOR_BUFFER_BIT); 
}

void Renderer::Fill()
{
	 glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}

void Renderer::SetMode(GLenum x)
{
	mode=x;
}