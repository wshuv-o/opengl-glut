#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void initGL() {
	// Set "clearing" or background color
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void display2() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // Yellow
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(-1.0f, 0.72f);
	glVertex2f(1.0f, 0.72f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(1.0f, 0.72f);
	glVertex2f(-1.0f, 0.72f);
	glVertex2f(-1.0f, 0.44f);
	glVertex2f(1.0f, 0.44f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(1.0f, 0.72f);
	glVertex2f(-1.0f, 0.72f);
	glVertex2f(-1.0f, 0.44f);
	glVertex2f(1.0f, 0.44f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.6f, 0.5f); // Yellow
	glVertex2f(1.0f, 0.44f);
	glVertex2f(-1.0f, 0.44f);
	glVertex2f(-1.0f, 0.16f);
	glVertex2f(1.0f, 0.16f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.8f, 0.6f, 0.5f); // Yellow
	glVertex2f(1.0f, 0.16f);
	glVertex2f(-1.0f, 0.16f);
	glVertex2f(-1.0f, -0.12f);
	glVertex2f(1.0f, -0.12f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.2f, 0.6f, 0.5f); // Yellow
	glVertex2f(1.0f, -0.12f);
	glVertex2f(-1.0f, -0.12f);
	glVertex2f(-1.0f, -0.40f);
	glVertex2f(1.0f, -0.40f);

	glEnd();
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.2f, 1.0f, 0.8f); // Yellow
	glVertex2f(1.0f, -0.40f);
	glVertex2f(-1.0f, -0.40f);
	glVertex2f(-1.0f, -0.68f);
	glVertex2f(1.0f, -0.68f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 0.8f); // Yellow
	glVertex2f(1.0f, -0.68f);
	glVertex2f(-1.0f, -0.68f);
	glVertex2f(-1.0f, -0.96f);
	glVertex2f(1.0f, -0.96f);

	glEnd();


	glFlush();  // Render now
}
void Rectangle(float x, float y)
{
    	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 0.8f); // Yellow
	glVertex2f(1.0f, -0.68f);
	glVertex2f(-1.0f, -0.68f);
	glVertex2f(-1.0f, -0.96f);
	glVertex2f(1.0f, -0.96f);

	glEnd();
}
/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Vertex, Primitive & Color");
	glutInitWindowSize(1920, 1080);
	glutInitWindowPosition(0, 0);
	glutDisplayFunc(display2);       // Register callback handler for window re-paint event
	initGL();
	initGL();
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}



