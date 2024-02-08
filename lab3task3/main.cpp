/*
* GL02Primitive.cpp: Vertex, Primitive and Color
* Draw Simple 2D colored Shapes: quad, triangle and polygon.
*/
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display2() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.60f, 0.85f);
	glVertex2f(0.60f, 0.85f);
	glVertex2f(0.9f, 0.34f);
	glVertex2f(0.9f, -0.34f);
	glVertex2f(0.60f, -0.85f);
	glVertex2f(-0.60f, -0.85f);
    glVertex2f(-0.9f, -0.34f);
	glVertex2f(-0.9f, 0.34f);
	glEnd();

    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.60f, 0.85f);
	glVertex2f(0.60f, 0.85f);

	glVertex2f(0.60f, 0.85f);
	glVertex2f(0.9f, 0.34f);

    glVertex2f(0.9f, 0.34f);
	glVertex2f(0.9f, -0.34f);

	glVertex2f(0.9f, -0.34f);
	glVertex2f(0.60f, -0.85f);

	glVertex2f(0.60f, -0.85f);
	glVertex2f(-0.60f, -0.85f);

	glVertex2f(-0.60f, -0.85f);
    glVertex2f(-0.9f, -0.34f);

    glVertex2f(-0.9f, -0.34f);
	glVertex2f(-0.9f, 0.34f);
	glVertex2f(-0.9f, 0.34f);

	glVertex2f(-0.60f, 0.85f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.1f, 0.51f);
	glVertex2f(0.0f, 0.51f);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.2f, 0.0f);
	glVertex2f(0.2f, 0.68f);
	glVertex2f(0.1f, 0.68f);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.2f, 0.0f);
	glVertex2f(0.3f, 0.0f);
	glVertex2f(0.3f, 0.17f);
	glVertex2f(0.2f, 0.34f);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.3f, 0.0f);
	glVertex2f(0.4f, 0.0f);
	glVertex2f(0.4f, 0.17f);
	glVertex2f(0.3f, 0.17f);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.4f, 0.0f);
	glVertex2f(0.5f, 0.0f);
	glVertex2f(0.5f, 0.40f);
	glVertex2f(0.4f, 0.17f);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.4f, 0.51f);
	glVertex2f(0.5f, 0.51f);
	glVertex2f(0.5f, 0.40f);
	glVertex2f(0.4f, 0.40f);
	glEnd();

		glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.5f, 0.51f);
	glVertex2f(0.6f, 0.51f);
	glVertex2f(0.6f, 0.0f);
	glVertex2f(0.5f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.6f, 0.51f);
	glVertex2f(0.8f, 0.17f);
	glVertex2f(0.8f, 0.0f);
	glVertex2f(0.6f, 0.0f);
	glEnd();









		glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.0f, 0.0f);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(-0.1f, 0.51f);
	glVertex2f(-0.0f, 0.51f);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.2f, 0.68f);
	glVertex2f(-0.1f, 0.68f);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.3f, 0.0f);
	glVertex2f(-0.3f, 0.17f);
	glVertex2f(-0.2f, 0.34f);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.3f, 0.0f);
	glVertex2f(-0.4f, 0.0f);
	glVertex2f(-0.4f, 0.17f);
	glVertex2f(-0.3f, 0.17f);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, 0.0f);
	glVertex2f(-0.5f, 0.0f);
	glVertex2f(-0.5f, 0.40f);
	glVertex2f(-0.4f, 0.17f);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, 0.51f);
	glVertex2f(-0.5f, 0.51f);
	glVertex2f(-0.5f, 0.40f);
	glVertex2f(-0.4f, 0.40f);
	glEnd();

		glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.5f, 0.51f);
	glVertex2f(-0.6f, 0.51f);
	glVertex2f(-0.6f, 0.0f);
	glVertex2f(-0.5f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.6f, 0.51f);
	glVertex2f(-0.8f, 0.17f);
	glVertex2f(-0.8f, 0.0f);
	glVertex2f(-0.6f, 0.0f);
	glEnd();







	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.3f, 0.0f);
	glVertex2f(0.3f, -0.34f);
	glVertex2f(0.0f, -0.68f);
	glEnd();

		glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.3f, 0.0f);
	glVertex2f(0.55f, 0.0f);
	glVertex2f(0.55f, -0.68f);
	glVertex2f(0.3f, -0.34f);
	glEnd();

			glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.55f, 0.0f);
	glVertex2f(0.8f, 0.0f);
	glVertex2f(0.8f, -0.17f);
	glVertex2f(0.55f, -0.68f);
	glEnd();

		glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.0f, 0.0f);
	glVertex2f(-0.3f, 0.0f);
	glVertex2f(-0.3f, -0.34f);
	glVertex2f(-0.0f, -0.68f);
	glEnd();

		glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.3f, 0.0f);
	glVertex2f(-0.55f, 0.0f);
	glVertex2f(-0.55f, -0.68f);
	glVertex2f(-0.3f, -0.34f);
	glEnd();

			glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.55f, 0.0f);
	glVertex2f(-0.8f, 0.0f);
	glVertex2f(-0.8f, -0.17f);
	glVertex2f(-0.55f, -0.68f);
	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(display2);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}



