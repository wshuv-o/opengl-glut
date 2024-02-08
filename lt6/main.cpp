#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <cstdlib>
#include <cmath>

float circleX = 0.0, squareY = 0.0, squareX = 0.0, triangleX = 0.0, pentagonY = 0.0, pentagonX = 0.0;
float movementSpeed = 0.05;

void Circle() {
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(circleX, 0.0);
    for (int i = 0; i <= 360; i += 10) {
        float angle = static_cast<float>(i) * 3.14159 / 180.0;
        float x = circleX + 0.15 * cos(angle);
        float y = 0.15 * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();
}

void Square() {
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(squareX-0.2, squareY - 0.2);
    glVertex2f(squareX+0.2, squareY - 0.2);
    glVertex2f(squareX+0.2, squareY + 0.2);
    glVertex2f(squareX-0.2, squareY + 0.2);
    glEnd();
}

void Triangle() {
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(triangleX, 0.2);
    glVertex2f(triangleX - 0.2, -0.2);
    glVertex2f(triangleX + 0.2, -0.2);
    glEnd();
}

void Pentagon() {
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    for (int i = 0; i < 5; ++i) {
        float angle = static_cast<float>(i) * 2.0 * 3.14159 / 5.0;
        float x = pentagonX+0.15 * cos(angle);
        float y = pentagonY + 0.15 * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    Square();    Circle();

    Triangle();
    Pentagon();
    glutSwapBuffers();
}

void update(int value) {
    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}


void handleMouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        circleX -= movementSpeed;
        squareX -= movementSpeed;
    } else if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
        triangleX += movementSpeed;
        pentagonX += movementSpeed;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutCreateWindow("Moving Objects Animation");

    glutDisplayFunc(display);
    glutTimerFunc(0, update, 0);
    glutMouseFunc(handleMouse);

    glClearColor(0.0, 0.0, 0.0, 1.0);

    glutMainLoop();

    return 0;
}
