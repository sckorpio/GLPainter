#ifndef MANAGER_H
#define MANAGER_H

#define GL_GLEXT_PROTOTYPES

#include <GL/glew.h> 
#include <GL/glut.h>  
#include <GL/gl.h>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

enum ShapeType{ LINE=0, RECTANGLE=1 };


void loadDataInBuffers(float* vertices,int size,unsigned int* indices,int count);

void CreateShaderProgram();

void manager_init();

void SetMode(ShapeType i);

void FillShape();

void SetColor(float R,float G,float B,float A);

void draw();

#endif // MANAGER_H