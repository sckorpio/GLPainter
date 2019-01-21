#include <GL/glew.h> 
#include <GL/glut.h>  
#include <GL/gl.h>
#include <iostream> 
#include <string> 

#include "manager.h"
#include "mydrawing.h"

void init() 
{ 
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
   CreateShaderProgram();
   drawingpage();
} 

void display() 
{  
    
    draw();
    glutSwapBuffers(); 
} 

void reshape(int width,int height)
{
	glViewport(0, 0, width, height);

}

int main(int argc, char** argv) 
{ 
  
    glutInit(&argc, argv); 
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE); 
    glutInitWindowSize(500, 500); 
    glutInitWindowPosition(100, 50); 
    glutCreateWindow("Modern OpenGL"); 
    glutReshapeFunc(reshape);
    glewInit(); 
    init(); 
    glutDisplayFunc(display); 
    glutMainLoop(); 
    return 0; 
} 
