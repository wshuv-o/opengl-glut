
#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>

float _move = 0.0f;
float _rotationAngle = 0.0f;

void drawWheel(float cx, float cy, float radius, int spokes) {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(cx, cy, 0.0f);
    glRotatef(-_rotationAngle, 0.0f, 0.0f, 1.0f);

    glColor3d(0.2, 0.2, 0.2);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0f, 0.0f);  // Center of the wheel
    for (int i = 0; i <= spokes; i = i + 1) {
        float theta = 2.0f * M_PI * float(i) / float(spokes);
        float x = radius * cos(theta);
        float y = radius * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();

    glColor3d(0.8, 0.8, 0.8);  // Set spoke color to light gray
    glBegin(GL_LINES);
    for (int i = 0; i <= spokes; i = i + 10) {
        float theta = 2.0f * M_PI * float(i) / float(spokes);
        float x = radius * cos(theta);
        float y = radius * sin(theta);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(x, y);
    }
    glEnd();
    glColor3d(0.8, 0.8, 0.8);  // Set spoke color to light gray
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0f, 0.0f);  // Center of the wheel
    for (int i = 0; i <= spokes; i = i + 1) {
        float theta = 2.0f * M_PI * float(i) / float(spokes);
        float x = (radius/2) * cos(theta);
        float y =  (radius/2) * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();

    glPopMatrix();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);

    // Draw the car body
    glColor3d(0.2, 0.6, 0.9);
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 0.2f);
    glVertex2f(0.8f, 0.2f);
    glVertex2f(0.8f, 0.4f);
    glVertex2f(0.0f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.2f, 0.4f);
    glVertex2f(0.3f, 0.6f);
    glVertex2f(0.5f, 0.6f);
    glVertex2f(0.6f, 0.4f);
    glEnd();
    glColor3d(1.0, 1.0, 0.9);

        glBegin(GL_QUADS);
    glVertex2f(0.22f, 0.4f);
    glVertex2f(0.3f, 0.58f);
    glVertex2f(0.5f, 0.58f);
    glVertex2f(0.58f, 0.4f);
    glEnd();

    // Draw the car wheel
    glColor3d(0.2, 1.6, 0.0);
    drawWheel(0.2, 0.18, 0.1, 200);
    drawWheel(0.6, 0.18, 0.1, 200);

    glPopMatrix();



    glutSwapBuffers();
}

void update(int value) {
    _move += 0.0;
    _rotationAngle += 0.0;  // Increase the rotation angle

    if (_move > 0.8) {
        _move = -1.0;
    }

    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(400, 300);
    glutCreateWindow("Modified Box Movement");
    glutDisplayFunc(display);
    gluOrtho2D(-1, 1, -1, 1);
    glutTimerFunc(20, update, 0);
    glutMainLoop();

    return 0;
}
