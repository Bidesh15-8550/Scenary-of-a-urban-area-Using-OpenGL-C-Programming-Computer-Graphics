#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(0,0,0,0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 35.0, 0.0, 40.0);
}

void BideshBiswasBiki(void)
{
    float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window
    	glColor3f(0.329412  ,0.329412 , 0.329412);

	glBegin(GL_POLYGON); //road
		glVertex2i(0, 1);
		glVertex2i(35, 1);

		glVertex2i(35, 9);
		glVertex2i(0, 9);

	glEnd();

	glLineWidth(3);
	glColor3f(1 ,1  ,1	);
	glBegin(GL_LINES);
		glVertex2i(2, 5);
		glVertex2i(4,5);
		glVertex2i(8, 5);
		glVertex2i(10, 5);
        glVertex2i(14, 5);
		glVertex2i(16, 5);
		glVertex2i(21, 5);
		glVertex2i(23, 5);
		glVertex2i(27, 5);
		glVertex2i(29, 5);
		glVertex2i(32, 5);
		glVertex2i(34, 5);

	glEnd();

    glColor3f(0.36    ,0.25   , 0.20); //lampost
    glBegin(GL_POLYGON);
		glVertex2i(3, 9);
		glVertex2i(4, 9);

		glVertex2i(4, 16);
		glVertex2i(3, 16);
	glEnd();
	   glColor3f(1, 1, 0); //light
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



    glVertex2f(3.5+1.3*cos(theta),17+1.3*sin(theta));  // here (12,10) is the center and 2 is the radius
	}

	glEnd();
	 glColor3f(0.36    ,0.25   , 0.20); //flower pot
    glBegin(GL_POLYGON);
		glVertex2i(7, 9);
		glVertex2i(8, 9);

		glVertex2i(9, 11);
		glVertex2i(6, 11);
	glEnd();

     glColor3f(0    ,1   , 0); //tree color
    glBegin(GL_POLYGON);
		glVertex2i(7, 11);
		glVertex2i(8, 11);
		glVertex2i(8, 12);
		glVertex2i(7, 12);
	glEnd();

	glColor3f(0.2588, 0.4118, 0.1843); //tree
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;



	  glVertex2f(7.5+1.5*cos(theta),12.5+1.5*sin(theta));  // here (12,10) is the center and 2 is the radius
	}

	glEnd();

    glColor3f(0.90 , 0.17, 0.31); //building

	glBegin(GL_POLYGON);
		glVertex2i(13, 9);
		glVertex2i(18, 9);

		glVertex2i(18, 29);
		glVertex2i(13, 29);

	glEnd();
	glColor3f(1 , 1, 0); //building

	glBegin(GL_POLYGON);
		glVertex2i(14, 25);
		glVertex2i(17, 25);

		glVertex2i(17, 28);
		glVertex2i(14, 28);

	glEnd();

		glColor3f(0 , 0, 0); //building

	glBegin(GL_POLYGON);
		glVertex2i(14, 19);
		glVertex2i(17, 19);

		glVertex2i(17, 22);
		glVertex2i(14, 22);

	glEnd();

			glColor3f(1 , 1, 0); //building

	glBegin(GL_POLYGON);
		glVertex2i(14, 14);
		glVertex2i(17, 14);

		glVertex2i(17, 17);
		glVertex2i(14, 17);

	glEnd();

	glColor3f(0.56 , 0.59, 0.47); //building

	glBegin(GL_POLYGON);
		glVertex2i(14, 9);
		glVertex2i(17, 9);

		glVertex2i(17, 12);
		glVertex2i(14, 12);

	glEnd();
	glColor3f(0.49 , 0.04, 0.01); //building

	glBegin(GL_POLYGON);
		glVertex2i(15, 9);
		glVertex2i(16, 9);

		glVertex2i(16, 11);
		glVertex2i(15, 11);

	glEnd();

    glColor3f(0.60 , 0.40, 0.40); //building

	glBegin(GL_POLYGON);
		glVertex2i(19, 9);
		glVertex2i(23, 9);

		glVertex2i(23, 27);
		glVertex2i(19, 27);

	glEnd();
	  glColor3f(0.98 , 0.93, 0.36); //building

	glBegin(GL_POLYGON);
		glVertex2i(20, 23);
		glVertex2i(22, 23);

		glVertex2i(22, 26);
		glVertex2i(20, 26);

	glEnd();
	glColor3f(0.55 , 0.57, 0.67); //building

	glBegin(GL_POLYGON);
		glVertex2i(20, 18);
		glVertex2i(22, 18);

		glVertex2i(22, 21);
		glVertex2i(20, 21);

	glEnd();
	glColor3f(0 , 0, 0); //building

	glBegin(GL_POLYGON);
		glVertex2i(20, 13);
		glVertex2i(22, 13);

		glVertex2i(22, 16);
		glVertex2i(20, 16);

	glEnd();
	glColor3f(0.38 , 0.25, 0.32); //building

	glBegin(GL_POLYGON);
		glVertex2i(20, 9);
		glVertex2i(22, 9);

		glVertex2i(22, 12);
		glVertex2i(20, 12);

	glEnd();
	glColor3f(0  ,0  ,0	);//door
	glBegin(GL_LINES);
		glVertex2i(21, 9);
		glVertex2i(21, 12);
	glEnd();

    glColor3f(0.36    ,0.25   , 0.20); //lampost
    glBegin(GL_POLYGON);
		glVertex2i(24, 9);
		glVertex2i(25, 9);

		glVertex2i(25, 17);
		glVertex2i(24, 17);
	glEnd();
	  glColor3f(0.36    ,0.25   , 0.20); //lampost
    glBegin(GL_POLYGON);
		glVertex2i(25, 16);
		glVertex2i(28, 16);

		glVertex2i(28, 17);
		glVertex2i(25, 17);
	glEnd();
	 glColor3f(0.36    ,0.25   , 0.20); //lampost
    glBegin(GL_POLYGON);
		glVertex2i(27, 15);
		glVertex2i(28, 15);

		glVertex2i(28, 16);
		glVertex2i(27, 16);
	glEnd();
	glColor3f(1    ,1   , 0); //lampost
    glBegin(GL_POLYGON);
		glVertex2i(26, 14);
		glVertex2i(29, 14);

		glVertex2i(29, 15);
		glVertex2i(26, 15);
	glEnd();
	glColor3f(0.86  ,0.08  ,0.24	);//bench
	glBegin(GL_LINES);
		glVertex2i(26, 10);
		glVertex2i(34, 10);
		glVertex2i(34, 10);
		glVertex2i(34, 11);
        glVertex2i(34, 11);
		glVertex2i(26, 11);
		glVertex2i(26, 11);
		glVertex2i(26, 10);
		glVertex2i(27, 9);
		glVertex2i(28, 9);
		glVertex2i(28, 9);
		glVertex2i(28, 10);
        glVertex2i(28, 10);
		glVertex2i(27, 10);
		glVertex2i(27, 10);
		glVertex2i(27, 9);
        glVertex2i(32, 9);
		glVertex2i(33, 9);
		glVertex2i(33, 9);
		glVertex2i(33, 10);
		glVertex2i(33, 10);
		glVertex2i(32, 10);
		glVertex2i(32, 10);
		glVertex2i(32, 9);
		glVertex2i(26, 11);
		glVertex2i(26, 13);
		glVertex2i(26, 13);
		glVertex2i(33, 13);
		glVertex2i(33, 13);
		glVertex2i(33, 11);
		glVertex2i(26, 12);
		glVertex2i(33, 12);
	glEnd();

    glColor3f(0.98, 0.84, 0.65); //moon
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(26+2*cos(theta),34+2*sin(theta));  // here (12,10) is the center and 2 is the radius
	}

	glEnd();

       glColor3f(0.98, 0.92, 0.84); //star
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(15+.1*cos(theta),35+.1*sin(theta));  // here (12,10) is the center and 2 is the radius
	}

	glEnd();
	glColor3f(0.98, 0.92, 0.84); //star
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(11+.1*cos(theta),38+.1*sin(theta));  // here (12,10) is the center and 2 is the radius
	}

	glEnd();
	glColor3f(0.98, 0.92, 0.84); //star
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(9+.1*cos(theta),30+.1*sin(theta));  // here (12,10) is the center and 2 is the radius
	}

	glEnd();
	glColor3f(0.98, 0.92, 0.84); //star
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(7+.1*cos(theta),37+.1*sin(theta));  // here (12,10) is the center and 2 is the radius
	}

	glEnd();
	glColor3f(0.98, 0.92, 0.84); //star
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(5+.1*cos(theta),33+.1*sin(theta));  // here (12,10) is the center and 2 is the radius
	}

	glEnd();

	glColor3f(0.98, 0.92, 0.84); //star
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(20+.1*cos(theta),34+.1*sin(theta));  // here (12,10) is the center and 2 is the radius
	}

	glEnd();

	glColor3f(0.98, 0.92, 0.84); //star
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(31+.1*cos(theta),36+.1*sin(theta));  // here (12,10) is the center and 2 is the radius
	}

	glEnd();

	glColor3f(0.98, 0.92, 0.84); //star
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(34+.1*cos(theta),30+.1*sin(theta));  // here (12,10) is the center and 2 is the radius
	}

	glEnd();


glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(700 , 600);					// Set window size
	glutCreateWindow("171-15-8550");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(BideshBiswasBiki);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
