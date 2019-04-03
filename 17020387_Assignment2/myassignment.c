#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display(){
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	//firstRow 
	glBegin(GL_TRIANGLES);
		glColor3f(0.811f,0.8667f,0.7334f);
		glVertex2f(-0.70,0.2);
		glVertex2f(-0.6,0.3);
		glVertex2f(-0.50,0.2);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.647f,0.8039f,0.6627f);
		glVertex2f(-0.70,0.2);
		glVertex2f(-0.6,0.3);
		glVertex2f(-0.70,0.4);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.509f,0.788f,0.607f);
		glVertex2f(-0.70,0.4);
		glVertex2f(-0.6,0.3);
		glVertex2f(-0.65,0.6);
		glVertex2f(-0.70,0.45);
		
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.231f,0.6980f,0.5647f);
		glVertex2f(-0.70,0.45);
		glVertex2f(-0.65,0.6);
		glVertex2f(-0.70,0.6);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.533f,0.8f,0.6156f);
		glVertex2f(-0.55,0.6);
		glVertex2f(-0.6,0.3);
		glVertex2f(-0.65,0.6);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.690f,0.8431f,0.6705f);
		glVertex2f(-0.55,0.6);
		glVertex2f(-0.6,0.3);
		glVertex2f(-0.45,0.3);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.8826f,0.9019f,0.7607f);
		glVertex2f(-0.6,0.3);
		glVertex2f(-0.45,0.3);
		glVertex2f(-0.48,0.2);
		glVertex2f(-0.50,0.2);
		
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.6549f,0.8352f,0.6588f);
		glVertex2f(-0.55,0.6);
		glVertex2f(-0.45,0.3);
		glVertex2f(-0.3,0.32);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.7960f,0.8627f,0.7568f);
		glVertex2f(-0.45,0.3);
		glVertex2f(-0.50,0.2);
		glVertex2f(-0.3,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.8117f,0.8745f,0.7098f);
		glVertex2f(-0.45,0.3);
		glVertex2f(-0.3,0.32);
		glVertex2f(-0.3,0.25);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.4627f,0.7725f,0.5843f);
		glVertex2f(-0.55,0.6);
		glVertex2f(-0.32,0.6);
		glVertex2f(-0.3,0.32);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.5882f,0.8156f,0.6274f);
		glVertex2f(-0.32,0.6);
		glVertex2f(-0.3,0.32);
		glVertex2f(-0.2,0.5);
		glVertex2f(-0.25,0.6);
		
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.5098f,0.7921f,0.6f);
		glVertex2f(-0.25,0.6);
		glVertex2f(-0.2,0.5);
		glVertex2f(-0.15,0.6);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.6156f,0.8235f,0.6235f);
		glVertex2f(-0.15,0.6);
		glVertex2f(-0.2,0.5);
		glVertex2f(-0.10,0.6);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.8078f,0.8823f,0.7098f);
		glVertex2f(-0.2,0.5);
		glVertex2f(-0.3,0.32);
		glVertex2f(-0.1,0.30);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.8705f,0.8901f,0.7411f);
		glVertex2f(-0.3,0.32);
		glVertex2f(-0.3,0.25);
		glVertex2f(-0.1,0.30);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.9372f,0.9176f,0.8078f);
		glVertex2f(-0.5,0.20);
		glVertex2f(-0.1,0.3);
		glVertex2f(0.5,0.20);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.839f,0.8980f,0.7254f);
		glVertex2f(-0.10,0.6);
		glVertex2f(0.0,0.6);
		glVertex2f(-0.1,0.30);
		glVertex2f(-0.2,0.5);
		
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.800f,0.8823f,0.6941f);
		glVertex2f(0.0,0.6);
		glVertex2f(0.1,0.6);
		glVertex2f(0.2,0.45);
		glVertex2f(-0.1,0.30);
		
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.713f,0.8549f,0.650f);
		glVertex2f(0.1,0.6);
		glVertex2f(0.2,0.45);
		glVertex2f(0.25,0.6);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.5647f,0.8078f,0.6117f);
		glVertex2f(0.25,0.6);
		glVertex2f(0.3,0.6);
		glVertex2f(0.35,0.4);
		glVertex2f(0.2,0.45);
		
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.8588f,0.8862f,0.7372f);
		glVertex2f(0.2,0.45);
		glVertex2f(0.35,0.4);
		glVertex2f(0.2,0.25);
		glVertex2f(-0.1,0.30);
		
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.909f,0.9137f,0.7960f);
		glVertex2f(0.2,0.25);
		glVertex2f(0.35,0.4);
		glVertex2f(0.5,0.2);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.580f,0.8117f,0.596f);
		glVertex2f(0.3,0.6);
		glVertex2f(0.33,0.6);
		glVertex2f(0.35,0.4);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.635f,0.8274f,0.6196f);
		glVertex2f(0.33,0.6);
		glVertex2f(0.35,0.4);
		glVertex2f(0.50,0.6);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.647f,0.8313f,0.6078f);
		glVertex2f(0.35,0.4);
		glVertex2f(0.50,0.6);
		glVertex2f(0.45,0.42);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.8470f,0.8901f,0.709f);
		glVertex2f(0.45,0.42);
		glVertex2f(0.5,0.2);
		glVertex2f(0.35,0.4);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.8235f,0.8784f,0.7019f);
		glVertex2f(0.5,0.2);
		glVertex2f(0.45,0.42);
		glVertex2f(0.7,0.3);
		glVertex2f(0.7,0.2);
		
		
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.733f,0.8509f,0.6431f);
		glVertex2f(0.7,0.3);
		glVertex2f(0.7,0.5);
		glVertex2f(0.45,0.42);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.5372f,0.7960f,0.5882f);
		glVertex2f(0.45,0.42);
		glVertex2f(0.7,0.5);
		glVertex2f(0.7,0.55);
		glVertex2f(0.5,0.6);
		
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.3725f,0.7490f,0.5490f);
		glVertex2f(0.5,0.6);
		glVertex2f(0.7,0.6);
		glVertex2f(0.7,0.55);
	glEnd();

	//secondRow
	glBegin(GL_QUADS);
		glColor3f(0.16f,0.58f,0.49f);
		glVertex2f(-0.65,-0.1);
		glVertex2f(-0.7,-0.19);
		glVertex2f(-0.7,-0.2);
		glVertex2f(-0.6,-0.2);
		
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.18f,0.65f,0.55f);
		glVertex2f(-0.65,-0.1);
		glVertex2f(-0.6,-0.2);
		glVertex2f(-0.55,-0.2);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.18f,0.725f,0.639f);
		glVertex2f(-0.65,-0.1);
		glVertex2f(-0.55,-0.2);
		glVertex2f(-0.4,-0.2);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.219f,0.745f,0.674f);
		glVertex2f(-0.65,-0.1);
		glVertex2f(-0.4,-0.2);
		glVertex2f(-0.35,-0.2);
		glVertex2f(-0.45,0.0);
		
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.147f,0.725f,0.650f);
		glVertex2f(-0.65,-0.1);
		glVertex2f(-0.45,0.0);
		glVertex2f(-0.55,0.1);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.172f,0.662f,0.592f);
		glVertex2f(-0.65,-0.1);
		glVertex2f(-0.68,0.15);
		glVertex2f(-0.55,0.1);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.156f,0.576f,0.505f);
		glVertex2f(-0.65,-0.1);
		glVertex2f(-0.68,0.15);
		glVertex2f(-0.70,0.1);
		glVertex2f(-0.70,0.0);
		
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.137f,0.533f,0.435f);
		glVertex2f(-0.65,-0.1);
		glVertex2f(-0.70,0.0);
		glVertex2f(-0.70,-0.19);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.098f,0.364f,0.329f);
		glVertex2f(-0.68,0.15);
		glVertex2f(-0.69,0.2);
		glVertex2f(-0.70,0.2);
		glVertex2f(-0.70,0.1);
		
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.125f,0.4f,0.443f);
		glVertex2f(-0.69,0.2);
		glVertex2f(-0.68,0.15);
		glVertex2f(-0.55,0.2);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.145f,0.533f,0.545f);
		glVertex2f(-0.55,0.2);
		glVertex2f(-0.68,0.15);
		glVertex2f(-0.55,0.1);
		glVertex2f(-0.50,0.2);
		
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.180f,0.68f,0.662f);
		glVertex2f(-0.45,0.0);
		glVertex2f(-0.55,0.1);
		glVertex2f(-0.30,0.1);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.168f,0.572f,0.607f);
		glVertex2f(-0.55,0.1);
		glVertex2f(-0.50,0.2);
		glVertex2f(-0.40,0.2);
		glVertex2f(-0.30,0.1);
		
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.200f,0.745f,0.713f);
		glVertex2f(-0.45,0.0);
		glVertex2f(-0.35,-0.2);
		glVertex2f(-0.25,-0.2);
		glVertex2f(-0.20,-0.1);
		
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.188f,0.72f,0.721f);
		glVertex2f(-0.45,0.0);
		glVertex2f(-0.30,0.1);
		glVertex2f(-0.20,-0.1);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.277f,0.682f,0.674f);
		glVertex2f(-0.25,-0.2);
		glVertex2f(-0.20,-0.1);
		glVertex2f(-0.15,-0.2);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.250f,0.611f,0.6588f);
		glVertex2f(-0.20,-0.1);
		glVertex2f(-0.15,-0.2);
		glVertex2f(-0.05,-0.2);
		glVertex2f(-0.02,-0.15);
		
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.203f,0.619f,0.721f);
		glVertex2f(-0.20,-0.1);
		glVertex2f(-0.02,-0.15);
		glVertex2f(-0.10,0.1);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.1843f,0.639f,0.7137f);
		glVertex2f(-0.20,-0.1);
		glVertex2f(-0.30,0.1);
		glVertex2f(-0.10,0.1);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.149f,0.525f,0.6549f);
		glVertex2f(-0.30,0.1);
		glVertex2f(-0.10,0.1);
		glVertex2f(-0.25,0.2);
		glVertex2f(-0.28,0.2);
		
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.133f,0.490f,0.6f);
		glVertex2f(-0.30,0.1);
		glVertex2f(-0.28,0.2);
		glVertex2f(-0.40,0.2);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.262f,0.525f,0.623f);
		glVertex2f(-0.05,-0.2);
		glVertex2f(-0.02,-0.15);
		glVertex2f(0.0,-0.2);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.258f,0.4823f,0.6784f);
		glVertex2f(0.0,-0.2);
		glVertex2f(-0.02,-0.15);
		glVertex2f(0.2,0.0);
		glVertex2f(0.1,-0.2);
		
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.231f,0.517f,0.705f);
		glVertex2f(-0.02,-0.15);
		glVertex2f(0.2,0.0);
		glVertex2f(-0.10,0.1);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.231f,0.443f,0.678f);
		glVertex2f(-0.10,0.1);
		glVertex2f(0.2,0.0);
		glVertex2f(0.18,0.15);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.219f,0.396f,0.635f);
		glVertex2f(-0.10,0.1);
		glVertex2f(0.18,0.15);
		glVertex2f(0.16,0.2);
		glVertex2f(0.03,0.2);
		
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.152f,0.396f,0.592f);
		glVertex2f(-0.10,0.1);
		glVertex2f(-0.25,0.2);
		glVertex2f(0.16,0.2);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.278f,0.403f,0.635f);
		glVertex2f(0.1,-0.2);
		glVertex2f(0.2,0.0);
		glVertex2f(0.3,-0.2);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.286f,0.349f,0.619f);
		glVertex2f(0.2,0.0);
		glVertex2f(0.3,-0.2);
		glVertex2f(0.4,-0.2);
		glVertex2f(0.45,-0.1);
		
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.290f,0.364f,0.647f);
		glVertex2f(0.2,0.0);
		glVertex2f(0.45,-0.1);
		glVertex2f(0.3,0.2);
		glVertex2f(0.18,0.15);
		
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.254f,0.333f,0.607f);
		glVertex2f(0.3,0.2);
		glVertex2f(0.18,0.15);
		glVertex2f(0.16,0.2);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.290f,0.286f,0.529f);
		glVertex2f(0.4,-0.2);
		glVertex2f(0.45,-0.1);
		glVertex2f(0.5,-0.2);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.270f,0.235f,0.443f);
		glVertex2f(0.5,-0.2);
		glVertex2f(0.45,-0.1);
		glVertex2f(0.65,-0.08);
		glVertex2f(0.55,-0.2);
		
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.301f,0.305f,0.560f);
		glVertex2f(0.3,0.2);
		glVertex2f(0.45,-0.1);
		glVertex2f(0.5,0.1);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.278f,0.235f,0.431f);
		glVertex2f(0.45,-0.1);
		glVertex2f(0.5,0.1);
		glVertex2f(0.65,-0.08);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.196f,0.141f,0.301f);
		glVertex2f(0.5,-0.2);
		glVertex2f(0.65,-0.08);
		glVertex2f(0.70,-0.2);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.180f,0.129f,0.262f);
		glVertex2f(0.65,-0.08);
		glVertex2f(0.70,-0.2);
		glVertex2f(0.70,-0.02);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.243f,0.188f,0.333f);
		glVertex2f(0.65,-0.08);
		glVertex2f(0.70,-0.02);
		glVertex2f(0.70,0.01);
		glVertex2f(0.5,0.1);
		
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.258f,0.188f,0.317f);
		glVertex2f(0.70,0.01);
		glVertex2f(0.5,0.1);
		glVertex2f(0.70,0.15);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.274f,0.196f,0.313f);
		glVertex2f(0.70,0.15);
		glVertex2f(0.70,0.20);
		glVertex2f(0.65,0.20);
		glVertex2f(0.5,0.1);
		
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.282f,0.211f,0.356f);
		glVertex2f(0.65,0.20);
		glVertex2f(0.5,0.1);
		glVertex2f(0.50,0.20);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.305f,0.262f,0.466f);
		glVertex2f(0.50,0.20);
		glVertex2f(0.5,0.1);
		glVertex2f(0.30,0.20);
	glEnd();

	//ThirdRow
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.286f,0.0941f,0.0588f);
		glVertex2f(-0.7,-0.20);
		glVertex2f(-0.6,-0.35);
		glVertex2f(-0.5,-0.20);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.4549f,0.152f,0.0901f);
		glVertex2f(-0.5,-0.20);
		glVertex2f(-0.6,-0.35);
		glVertex2f(-0.55,-0.5);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.6156f,0.3019f,0.2392f);
		glVertex2f(-0.5,-0.20);
		glVertex2f(-0.4,-0.30);
		glVertex2f(-0.55,-0.5);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.7921f,0.4509f,0.3490f);
		glVertex2f(-0.4,-0.30);
		glVertex2f(-0.55,-0.5);
		glVertex2f(-0.25,-0.48);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.3725f,0.2509f,0.2588f);
		glVertex2f(-0.5,-0.20);
		glVertex2f(-0.4,-0.30);
		glVertex2f(-0.2,-0.20);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.5921f,0.4156f,0.4156f);
		glVertex2f(-0.2,-0.20);
		glVertex2f(-0.40,-0.30);
		glVertex2f(-0.25,-0.48);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.3921f,0.3098f,0.3372f);
		glVertex2f(-0.2,-0.20);
		glVertex2f(-0.1,-0.30);
		glVertex2f(-0.25,-0.48);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.6901f,0.5333f,0.5176f);
		glVertex2f(-0.25,-0.48);
		glVertex2f(-0.1,-0.30);
		glVertex2f(-0.15,-0.5);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.4745f,0.4274f,0.4705f);
		glVertex2f(-0.10,-0.30);
		glVertex2f(-0.15,-0.5);
		glVertex2f(0.0,-0.35);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.5529f,0.5411f,0.5529f);
		glVertex2f(-0.15,-0.5);
		glVertex2f(0.0,-0.35);
		glVertex2f(0.15,-0.55);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.3411f,0.4862f,0.5215f);
		glVertex2f(0.15,-0.55);
		glVertex2f(0.0,-0.35);
		glVertex2f(0.15,-0.30);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.2745f,0.3764f,0.4431f);
		glVertex2f(-0.10,-0.30);
		glVertex2f(0.15,-0.30);
		glVertex2f(0.0,-0.35);
		
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.2156f,0.2705f,0.3294f);
		glVertex2f(-0.10,-0.30);
		glVertex2f(0.15,-0.30);
		glVertex2f(-0.2,-0.20);
		
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.1450f,0.3058f,0.3647f);
		glVertex2f(0.20,-0.25);
		glVertex2f(0.15,-0.30);
		glVertex2f(-0.2,-0.20);
		
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.3490f,0.5725f,0.5686f);
		glVertex2f(0.15,-0.30);
		glVertex2f(0.15,-0.55);
		glVertex2f(0.30,-0.40);
		
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.3019f,0.6196f,0.5843f);
		glVertex2f(0.35,-0.58);
		glVertex2f(0.15,-0.55);
		glVertex2f(0.30,-0.40);
		
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.1529f,0.5764f,0.5725f);
		glVertex2f(0.30,-0.40);
		glVertex2f(0.35,-0.58);
		glVertex2f(0.5,-0.5);
		
		
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.1450f,0.4313f,0.4980f);
		glVertex2f(0.20,-0.25);
		glVertex2f(0.15,-0.30);
		glVertex2f(0.30,-0.40);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.1137f,0.4392f,0.5215f);
		glVertex2f(0.20,-0.25);
		glVertex2f(0.40,-0.30);
		glVertex2f(0.30,-0.40);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.1176f,0.4274f,0.5254f);
		glVertex2f(0.5,-0.5);
		glVertex2f(0.40,-0.30);
		glVertex2f(0.30,-0.40);
	glEnd();	
	glBegin(GL_TRIANGLES);
		glColor3f(0.1058f,0.3137f,0.4705f);
		glVertex2f(0.5,-0.5);
		glVertex2f(0.40,-0.30);
		glVertex2f(0.6,-0.4);
	glEnd();	
	glBegin(GL_QUADS);
		glColor3f(0.098f,0.2784f,0.427f);
		glVertex2f(0.50,-0.50);
		glVertex2f(0.6,-0.4);
		glVertex2f(0.7,-0.43);
		glVertex2f(0.7,-0.48);
		
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.145f,0.160f,0.329f);
		glVertex2f(0.7,-0.2);
		glVertex2f(0.5,-0.2);
		glVertex2f(0.6,-0.4);
		glVertex2f(0.7,-0.43);
		
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.1294f,0.250f,0.4392f);
		glVertex2f(0.5,-0.2);
		glVertex2f(0.45,-0.2);
		glVertex2f(0.40,-0.30);
		glVertex2f(0.6,-0.4);
		
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.1372f,0.2313f,0.4156f);
		glVertex2f(0.45,-0.20);
		glVertex2f(0.4,-0.30);
		glVertex2f(0.35,-0.20);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.1098f,0.2705f,0.3686f);
		glVertex2f(0.20,-0.25);
		glVertex2f(-0.2,-0.20);
		glVertex2f(0.25,-0.20);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.1058f,0.2784f,0.4392f);
		glVertex2f(0.25,-0.20);
		glVertex2f(0.20,-0.25);
		glVertex2f(0.4,-0.30);
		glVertex2f(0.45,-0.20);
		
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.282f,0.0862f,0.05882f);
		glVertex2f(-0.7,-0.20);
		glVertex2f(-0.6,-0.35);
		glVertex2f(-0.7,-0.45);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.5058f,0.1529f,0.0980f);
		glVertex2f(-0.70,-0.45);
		glVertex2f(-0.6,-0.35);
		glVertex2f(-0.55,-0.5);
		glVertex2f(-0.7,-0.48);
		
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.4156f,0.1372f,0.0823f);
		glVertex2f(-0.70,-0.60);
		glVertex2f(-0.70,-0.48);
		glVertex2f(-0.55,-0.5);
		glVertex2f(-0.65,-0.60);
		
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.666f,0.2745f,0.1411f);
		glVertex2f(-0.65,-0.60);
		glVertex2f(-0.55,-0.5);
		glVertex2f(-0.5,-0.60);
	glEnd();

	
	
	glBegin(GL_QUADS);
		glColor3f(0.82f,0.38f,0.2f);
		glVertex2f(-0.25,-0.48);
		glVertex2f(-0.55,-0.5);
		glVertex2f(-0.5,-0.6);
		glVertex2f(-0.48,-0.6);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.93f,0.57f,0.25f);
		glVertex2f(-0.25,-0.48);
		glVertex2f(-0.48,-0.6);
		glVertex2f(-0.28,-0.6);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.96f,0.74f,0.48f);
		glVertex2f(-0.25,-0.48);
		glVertex2f(-0.28,-0.6);
		glVertex2f(-0.20,-0.6);
		glVertex2f(-0.15,-0.5);
	glEnd();
	
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.96f,0.69f,0.33f);
		glVertex2f(-0.15,-0.5);
		glVertex2f(-0.20,-0.6);
		glVertex2f(-0.10,-0.6);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.93f,0.73f,0.47f);
		glVertex2f(-0.15,-0.5);
		glVertex2f(-0.10,-0.6);
		glVertex2f(0.0,-0.6);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.74f,0.64f,0.58f);
		glVertex2f(-0.15,-0.5);
		glVertex2f(0.0,-0.6);
		glVertex2f(0.1,-0.6);
		glVertex2f(0.15,-0.55);
	glEnd();	
	
	glBegin(GL_QUADS);
		glColor3f(0.50f,0.60f,0.57f);
		glVertex2f(0.15,-0.55);
		glVertex2f(0.1,-0.6);
		glVertex2f(0.3,-0.6);
		glVertex2f(0.35,-0.58);
	glEnd();
		
	glBegin(GL_TRIANGLES);
		glColor3f(0.32f,0.54f,0.54f);
		glVertex2f(0.35,-0.58);
		glVertex2f(0.3,-0.6);
		glVertex2f(0.36,-0.6);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.16f,0.63f,0.56f);
		glVertex2f(0.5,-0.5);
		glVertex2f(0.35,-0.58);
		glVertex2f(0.36,-0.6);
		glVertex2f(0.55,-0.6);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.10f,0.41f,0.49f);
		glVertex2f(0.5,-0.5);
		glVertex2f(0.55,-0.6);
		glVertex2f(0.60,-0.6);
	glEnd();
	
	glBegin(GL_QUADS);
		glColor3f(0.10f,0.33f,0.46f);
		glVertex2f(0.7,-0.45);
		glVertex2f(0.5,-0.5);
		glVertex2f(0.6,-0.6);
		glVertex2f(0.7,-0.6);
	glEnd();
	
	glFlush();
	glutSwapBuffers(); 
		
}

int main(int argc,char** argv){
	//int mode=GLUT_RGB|GLUT_DOUBLE;
	glutInit(&argc, argv);
    	glutInitDisplayMode(GLUT_SINGLE);    
    	glutInitWindowSize(714,533);        
    	glutInitWindowPosition(1,1);    
    	glutCreateWindow("Triangle Tesselation"); 
    	glutDisplayFunc(display);            
    
    	glutMainLoop(); 
    return 0;
}
