#ifndef RENDERER_H
#define RENDERER_H
#include <GL/glew.h>  
#include <GL/gl.h>
#include <signal.h> 

#include "vertexbuffer.h"
#include "indexbuffer.h"
#include "vertexarray.h"
#include "shader.h"
//---------------Error handling(if needed)-----------------

 #define ASSERT(x) if (!(x)) raise(SIGINT);
 
 #define GLCall(x) GLClearError();\
   x;\
   ASSERT(GLLogCall(#x,__FILE__,__LINE__))



void GLClearError();
bool GLLogCall(const char* function,const char* file,int line);

//------------------------------------------

class Renderer
{
private:   
	GLenum mode;
public:
	void Draw(const VertexArray& va,const IndexBuffer& ib,const Shader& shader) const;
	void ClearBackground(float R,float G,float B,float A);
	void Fill();
	void SetMode(GLenum x);
};
#endif // RENDERER_H