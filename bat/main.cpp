
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void initGL() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

void display2() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(-0.467f, 0.534f);
	glVertex2f(0.467f, 0.534f);
	glVertex2f(0.834f, 0.178f);
	glVertex2f(0.834f, -0.178f);
	glVertex2f(0.467f, -0.534f);
	glVertex2f(-0.467f, -0.534f);
    glVertex2f(-0.834f, -0.178f);
	glVertex2f(-0.834f, 0.178f);
	glEnd();

    glLineWidth(10);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.534f);
	glVertex2f(0.467f, 0.534f);
	glVertex2f(0.467f, 0.534f);
	glVertex2f(0.840f, 0.178f);
	glVertex2f(0.834f, 0.178f);
	glVertex2f(0.834f, 0.0f);
    glVertex2f(0.834f, -0.178f);
	glVertex2f(0.834f, 0.0f);
	glVertex2f(0.0f, -0.534f);
	glVertex2f(0.467f, -0.534f);
	glVertex2f(0.0f, -0.534f);
	glVertex2f(-0.467f, -0.534f);
	glVertex2f(-0.467f, -0.534f);
	glVertex2f(-0.834f, -0.178f);
	glVertex2f(-0.834f, 0.178f);
	glVertex2f(-0.834f, 0.0f);
    glVertex2f(-0.834f, 0.0f);
    glVertex2f(-0.834f, -0.178f);
    glVertex2f(-0.834f, -0.178f);
	glVertex2f(-0.834f, 0.0f);
	glVertex2f(0.0f, 0.534f);
	glVertex2f(-0.467f, 0.534f);
	glVertex2f(-0.834f, 0.178f);
    glVertex2f(-0.467f, 0.534f);
	glVertex2f(0.834f, -0.178f);
    glVertex2f(0.467f, -0.534f);
	glEnd();

    glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2f(0.25f, -0.257f);
    glVertex2f(0.31f, 0.33f);
    glVertex2f(-0.25f, -0.257f);
    glVertex2f(-0.32f, 0.33f);
	glVertex2f(0.0f, -0.4f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.0f, 0.367f);
	glVertex2f(0.067f, 0.367f);
	glVertex2f(0.067f, -0.387f);
	glVertex2f(0.0f, -0.387f);
    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0.067f, 0.433f);
	glVertex2f(0.133f, 0.433f);
	glVertex2f(0.133f, -0.295f);
	glVertex2f(0.067f, -0.387f);
    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0.133f, 0.433f);
	glVertex2f(0.18f, 0.167f);
	glVertex2f(0.133f, 0.167f);
    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(-0.133f, 0.433f);
	glVertex2f(-0.18f, 0.167f);
	glVertex2f(-0.133f, 0.167f);
    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0.18f, 0.167f);
	glVertex2f(0.133f, 0.167f);
	glVertex2f(0.133f, -0.2f);
	glVertex2f(0.18f, -0.2f);
    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0.133f, 0.167f);
	glVertex2f(0.133f, 0.133f);
	glVertex2f(0.23f, 0.133f);
    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0.28f, 0.167f);
	glVertex2f(0.28f, 0.133f);
	glVertex2f(0.23f, 0.133f);
    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(-0.133f, 0.167f);
	glVertex2f(-0.133f, 0.133f);
	glVertex2f(-0.23f, 0.133f);
    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(-0.28f, 0.167f);
	glVertex2f(-0.28f, 0.133f);
	glVertex2f(-0.23f, 0.133f);
    glEnd();


    glBegin(GL_POLYGON);
	glVertex2f(0.28f, 0.133f);
	glVertex2f(0.133f, 0.133f);
	glVertex2f(0.133f, -0.231f);
	glVertex2f(0.28f, -0.231f);

    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0.346f, 0.167f);
	glVertex2f(0.28f, 0.167f);
	glVertex2f(0.28f, -0.433f);
	glVertex2f(0.346f, -0.433f);

    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0.446f, 0.367f);
	glVertex2f(0.346f, 0.367f);
	glVertex2f(0.346f, -0.433f);
	glVertex2f(0.446f, -0.37f);

    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0.446f, 0.367f);
	glVertex2f(0.513f, 0.334f);
	glVertex2f(0.513f, -0.334f);
	glVertex2f(0.446f, -0.367f);

    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0.513f, 0.334f);
	glVertex2f(0.58f, 0.267f);
	glVertex2f(0.58f, -0.267f);
	glVertex2f(0.513f, -0.334f);

    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0.58f, 0.267f);
	glVertex2f(0.647f, 0.2f);
	glVertex2f(0.647f, -0.2f);
	glVertex2f(0.58f, -0.267f);

    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0.647f, 0.2f);
	glVertex2f(0.715f, 0.135);
	glVertex2f(0.715f, -0.135f);
	glVertex2f(0.647f, -0.2f);

    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0.0f, 0.367f);
	glVertex2f(-0.067f, 0.367f);
	glVertex2f(-0.067f, -0.387f);
	glVertex2f(0.0f, -0.387f);
    glEnd();
    glBegin(GL_POLYGON);
	glVertex2f(-0.067f, 0.433f);
	glVertex2f(-0.133f, 0.433f);
	glVertex2f(-0.133f, -0.295f);
	glVertex2f(-0.067f, -0.387f);
    glEnd();
    glBegin(GL_POLYGON);
	glVertex2f(-0.18f, 0.167f);
	glVertex2f(-0.133f, 0.167f);
	glVertex2f(-0.133f, -0.2f);
	glVertex2f(-0.18f, -0.2f);
    glEnd();
    glBegin(GL_POLYGON);
	glVertex2f(-0.28f, 0.133f);
	glVertex2f(-0.133f, 0.133f);
	glVertex2f(-0.133f, -0.231f);
	glVertex2f(-0.28f, -0.231f);
    glEnd();
    glBegin(GL_POLYGON);
	glVertex2f(-0.346f, 0.167f);
	glVertex2f(-0.28f, 0.167f);
	glVertex2f(-0.28f, -0.433f);
	glVertex2f(-0.346f, -0.433f);
    glEnd();
    glBegin(GL_POLYGON);
	glVertex2f(-0.446f, 0.367f);
	glVertex2f(-0.346f, 0.367f);
	glVertex2f(-0.346f, -0.433f);
	glVertex2f(-0.446f, -0.37f);

    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(-0.446f, 0.367f);
	glVertex2f(-0.513f, 0.334f);
	glVertex2f(-0.513f, -0.334f);
	glVertex2f(-0.446f, -0.367f);

    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(-0.513f, 0.334f);
	glVertex2f(-0.58f, 0.267f);
	glVertex2f(-0.58f, -0.267f);
	glVertex2f(-0.513f, -0.334f);

    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(-0.58f, 0.267f);
	glVertex2f(-0.647f, 0.2f);
	glVertex2f(-0.647f, -0.2f);
	glVertex2f(-0.58f, -0.267f);

    glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(-0.647f, 0.2f);
	glVertex2f(-0.715f, 0.135);
	glVertex2f(-0.715f, -0.135f);
	glVertex2f(-0.647f, -0.2f);

    glEnd();


	glFlush();  // Render now
}

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



