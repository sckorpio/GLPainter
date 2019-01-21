#shader vertex

#version 130
in vec3 pos;
void main() 
{
   gl_Position = vec4(pos, 1);
} 

#shader fragment

#version 130

uniform vec4 u_Color;

void main() 
{
    gl_FragColor = u_Color;
} 
