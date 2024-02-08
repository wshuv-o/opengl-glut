#include <windows.h>
#include <GL/glut.h>
void initGL() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(0.1f, 0.5f);
	glVertex2f(0.5f, 0.5f);
    glVertex2f(0.5f, 0.2f);
    glVertex2f(0.1f, 0.2f);

	glEnd();







	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(0.5f, 0.7f);
	glVertex2f(0.8f, 0.35f);
	glVertex2f(0.5f, 0.0f);
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 1.0f);

	glVertex2f(-0.3f, -0.1f);
	glVertex2f(-0.8f, -0.45f);
	glVertex2f(-0.3f,  -0.8f);

	glEnd();






    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(-0.8f, 0.8f);
	glVertex2f(-0.3f, 0.8f);
	glVertex2f(-0.3f, 0.3f);
	glVertex2f(-0.8f, 0.3f);

	glEnd();




    glBegin(GL_TRIANGLES);
    glColor3ub(232, 133, 20);


	glVertex2f(0.45f, -0.2f);
	glVertex2f(0.1f, -0.8f);
	glVertex2f(0.8f,  -0.8f);
	glEnd();






    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);    // x, y

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.0f, 1.0f);    // x, y

    glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(-1.0f, 0.0f);    // x, y

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.0f, -1.0f);

	glEnd();




	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Vertex, Primitive & Color");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	initGL();
	glutMainLoop();
	return 0;
}
