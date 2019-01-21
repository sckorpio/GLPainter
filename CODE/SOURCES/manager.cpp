#include "manager.h"
#include "vertexbuffer.h"
#include "indexbuffer.h"
#include "vertexarray.h"
#include "shader.h"
#include "renderer.h"

 
 
Shader SH;
VertexArray VA;
Renderer RND;
IndexBuffer IB;


 
void loadDataInBuffers(float* vertices,int size,unsigned int* indices,int count)
{
	
//--------VAO-----------
  VA.Gen();

//--------VBO ------	
  VertexBuffer VB(vertices , size);

 //---------IB---------
  IB.Gen(indices, count );
  
//--------layout--------
  VertexBufferLayout layout;
  layout.Push<float>(3);

//--------attaching VB and (its)layout to VA---  
  VA.AddBuffer(VB,layout);


//---------unbind--------------
    VB.UnBind();
    VA.UnBind();


}

void CreateShaderProgram()
{
	SH.Gen("CODE/RES/SHADERS/basic_shader.shader");
	
	SH.UnBind();
}


void SetColor(float R,float G,float B,float A)
{
	SH.Bind();
	SH.SetUniform4f("u_Color",R,G,B,A);
    SH.UnBind();
}

void FillShape()
{
	RND.Fill();
}

void SetMode(ShapeType i)
{
	switch(i)
	{
		case LINE : RND.SetMode(GL_LINES); break;
		case RECTANGLE: RND.SetMode(GL_QUADS); break;
	}
}



void draw()
{
	RND.ClearBackground(1,1,1,1);
	

    RND.Draw(VA,IB,SH);
	
}