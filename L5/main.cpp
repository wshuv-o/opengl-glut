
#include <GL/gl.h>
#include <GL/glut.h>

bool dayBackground = false; // Declare a global variable to track day/night background
void rocketStage()
{
    //stage
    glBegin(GL_POLYGON);
    glColor3f(0.843f, 0.771f, 0.863f);
    glVertex2f(-15.0f, -12.0f);
    glVertex2f(15.0f, -12.0f);
    glVertex2f(13.0f, -10.50f);
    glVertex2f(-13.0f, -10.50f);
    glEnd();
}
void rocketstand(){
    glLineWidth(6.5);
    glBegin(GL_LINES);
    //leftstand
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-7.0f, 0.0f);
    glVertex2f(-5.5f, 0.0f);
    glVertex2f(-7.0f, -5.0f);
    glVertex2f(-5.5f, -5.0f);
    glVertex2f(-12.5f, -10.50f);
    glVertex2f(-12.5f, 8.0f);

    glVertex2f(-12.5f, 8.0f);
    glVertex2f(-11.0f, 8.0f);
    glVertex2f(-12.5f, 7.0f);
    glVertex2f(-11.0f, 7.0f);
    glVertex2f(-12.5f, 6.0f);
    glVertex2f(-11.0f, 6.0f);
    glVertex2f(-12.5f, 5.0f);
    glVertex2f(-11.0f, 5.0f);
    glVertex2f(-12.5f, 4.0f);
    glVertex2f(-11.0f, 4.0f);
    glVertex2f(-12.5f, 3.0f);
    glVertex2f(-11.0f, 3.0f);
    glVertex2f(-12.5f, 2.0f);
    glVertex2f(-11.0f, 2.0f);
    glVertex2f(-12.5f, 1.0f);
    glVertex2f(-11.0f, 1.0f);
    glVertex2f(-12.5f, 0.0f);
    glVertex2f(-11.0f, 0.0f);
    glVertex2f(-12.5f, -10.0f);
    glVertex2f(-11.0f, -10.0f);
    glVertex2f(-12.5f, -9.0f);
    glVertex2f(-11.0f, -9.0f);
    glVertex2f(-12.5f, -8.0f);
    glVertex2f(-11.0f, -8.0f);
    glVertex2f(-12.5f, -7.0f);
    glVertex2f(-11.0f, -7.0f);
    glVertex2f(-12.5f, -6.0f);
    glVertex2f(-11.0f, -6.0f);
    glVertex2f(-12.5f, -5.0f);
    glVertex2f(-11.0f, -5.0f);
    glVertex2f(-12.5f, -4.0f);
    glVertex2f(-11.0f, -4.0f);
    glVertex2f(-12.5f, -3.0f);
    glVertex2f(-11.0f, -3.0f);
    glVertex2f(-12.5f, -2.0f);
    glVertex2f(-11.0f, -2.0f);
    glVertex2f(-12.5f, -1.0f);
    glVertex2f(-11.0f, -1.0f);

    glVertex2f(-7.0f, -10.50f);
    glVertex2f(-7.0f, 8.0f);
    glVertex2f(-11.0f, -10.50f);
    glVertex2f(-11.0f, 8.0f);
    glVertex2f(-7.0f, 8.0f);
    glVertex2f(-11.0f, 8.0f);
    glVertex2f(-7.0f, 8.0f);
    glVertex2f(-11.0f, 4.0f);
    glVertex2f(-7.0f, 4.0f);
    glVertex2f(-11.0f, 0.0f);
    glVertex2f(-7.0f, 0.0f);
    glVertex2f(-11.0f, -4.0f);
    glVertex2f(-7.0f, -4.0f);
    glVertex2f(-11.0f, -8.0f);
    glVertex2f(-7.0f, 4.0f);
    glVertex2f(-11.0f, 8.0f);
    glVertex2f(-7.0f, 0.0f);
    glVertex2f(-11.0f, 4.0f);
    glVertex2f(-7.0f, -4.0f);
    glVertex2f(-11.0f, -0.0f);
    glVertex2f(-7.0f, -8.0f);
    glVertex2f(-11.0f, -4.0f);
    glVertex2f(-7.0f, -8.0f);
    glVertex2f(-11.0f, -8.0f);
//rightstand
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(7.0f, 0.0f);
    glVertex2f(5.5f, 0.0f);
    glVertex2f(7.0f, -5.0f);
    glVertex2f(5.5f, -5.0f);
    glVertex2f(7.0f, -10.50f);
    glVertex2f(7.0f, 8.0f);
    glVertex2f(11.0f, -10.50f);
    glVertex2f(11.0f, 8.0f);
    glVertex2f(7.0f, 8.0f);
    glVertex2f(11.0f, 8.0f);
    glVertex2f(7.0f, 8.0f);
    glVertex2f(11.0f, 4.0f);
    glVertex2f(7.0f, 4.0f);
    glVertex2f(11.0f, 0.0f);
    glVertex2f(7.0f, 0.0f);
    glVertex2f(11.0f, -4.0f);
    glVertex2f(7.0f, -4.0f);
    glVertex2f(11.0f, -8.0f);
    glVertex2f(7.0f, 4.0f);
    glVertex2f(11.0f, 8.0f);
    glVertex2f(7.0f, 0.0f);
    glVertex2f(11.0f, 4.0f);
    glVertex2f(7.0f, -4.0f);
    glVertex2f(11.0f, -0.0f);
    glVertex2f(7.0f, -8.0f);
    glVertex2f(11.0f, -4.0f);
    glVertex2f(7.0f, -8.0f);
    glVertex2f(11.0f, -8.0f);

     glVertex2f(12.5f, -10.50f);
    glVertex2f(12.5f, 8.0f);

    glVertex2f(12.5f, 8.0f);
    glVertex2f(11.0f, 8.0f);
    glVertex2f(12.5f, 7.0f);
    glVertex2f(11.0f, 7.0f);
    glVertex2f(12.5f, 6.0f);
    glVertex2f(11.0f, 6.0f);
    glVertex2f(12.5f, 5.0f);
    glVertex2f(11.0f, 5.0f);
    glVertex2f(12.5f, 4.0f);
    glVertex2f(11.0f, 4.0f);
    glVertex2f(12.5f, 3.0f);
    glVertex2f(11.0f, 3.0f);
    glVertex2f(12.5f, 2.0f);
    glVertex2f(11.0f, 2.0f);
    glVertex2f(12.5f, 1.0f);
    glVertex2f(11.0f, 1.0f);
    glVertex2f(12.5f, 0.0f);
    glVertex2f(11.0f, 0.0f);
    glVertex2f(12.5f, -10.0f);
    glVertex2f(11.0f, -10.0f);
    glVertex2f(12.5f, -9.0f);
    glVertex2f(11.0f, -9.0f);
    glVertex2f(12.5f, -8.0f);
    glVertex2f(11.0f, -8.0f);
    glVertex2f(12.5f, -7.0f);
    glVertex2f(11.0f, -7.0f);
    glVertex2f(12.5f, -6.0f);
    glVertex2f(11.0f, -6.0f);
    glVertex2f(12.5f, -5.0f);
    glVertex2f(11.0f, -5.0f);
    glVertex2f(12.5f, -4.0f);
    glVertex2f(11.0f, -4.0f);
    glVertex2f(12.5f, -3.0f);
    glVertex2f(11.0f, -3.0f);
    glVertex2f(12.5f, -2.0f);
    glVertex2f(11.0f, -2.0f);
    glVertex2f(12.5f, -1.0f);
    glVertex2f(11.0f, -1.0f);
    glEnd();
}
void sun()
{
     glColor3f(1.0f, 0.8f, 0.50f); // White color for cloud
    glPushMatrix();
    glTranslatef(0.0f, 17.0f, 0.0f); // Position of the cloud
    glutSolidSphere(2.0f, 80, 80);

    glPopMatrix();
}
void floor() {
    glColor3f(0.361f, 0.369f, 0.263f);
    glBegin(GL_POLYGON);
    glVertex2f(-25.0f, -12.0f);
    glVertex2f(25.0f, -12.0f);
    glVertex2f(25.0f, -20.0f);
    glVertex2f(-25.0f, -20.0f);
    glEnd();
}
void drawWindows1(float x, float y, float width, float height, float alpha) {
    glColor4f(0.7, 0.9, 1.0, alpha); // Light blue color for windows

    int numWindows = 5; // Adjust the number of windows as needed
    float windowWidth = width / 4;
    float windowHeight = height / 4.5;
    float spacingX = (width - numWindows * windowWidth) / (numWindows + 1);
    float spacingY = height / 9.5;

    for (int i = 0; i < numWindows; ++i) {
        float windowX = x + (i + 1) * spacingX + i * windowWidth;
        for (int j = 0; j < 4; ++j) {
            float windowY = y + (j + 1) * spacingY + j * windowHeight;
            glBegin(GL_POLYGON);
            glVertex2f(windowX, windowY);
            glVertex2f(windowX + windowWidth, windowY);
            glVertex2f(windowX + windowWidth, windowY + windowHeight);
            glVertex2f(windowX, windowY + windowHeight);
            glEnd();
        }
    }
}
void drawWindows2(float x, float y, float width, float height, float alpha) {
    glColor4f(0.7, 0.9, 1.0, alpha); // Light blue color for windows

    int numWindows = 4; // Adjust the number of windows as needed
    float windowWidth = width * 0.2;
    float windowHeight = height * 0.2;
    float spacing = (width - numWindows * windowWidth) / (numWindows + 1);

    for (int i = 0; i < numWindows; ++i) {
        float windowX = x + (i + 1) * spacing + i * windowWidth;
        float windowY = y + height * 0.6;
        glBegin(GL_POLYGON);
        glVertex2f(windowX, windowY);
        glVertex2f(windowX + windowWidth, windowY);
        glVertex2f(windowX + windowWidth, windowY + windowHeight);
        glVertex2f(windowX, windowY + windowHeight);
        glEnd();
    }
}
void buildingtype1(float x, float y, float height, float width, float r, float g, float b, float alpha) {
    // Set color with opacity
    glColor4f(r, g, b, alpha-0.5);

    // Draw main building
    glBegin(GL_POLYGON);
    glVertex2f(x, y);
    glVertex2f(x + width, y);
    glVertex2f(x + width, y + height);
    glVertex2f(x, y + height);
    glEnd();

    // Draw door
    glColor4f(0.4, 0.2, 0.0, alpha); // Brown color for the door
    float doorWidth = width * 0.2;
    float doorHeight = height * 0.35;
    float doorX = x + (width - doorWidth) / 2;
    float doorY = y;
    glBegin(GL_POLYGON);
    glVertex2f(doorX, doorY);
    glVertex2f(doorX + doorWidth, doorY);
    glVertex2f(doorX + doorWidth, doorY + doorHeight);
    glVertex2f(doorX, doorY + doorHeight);
    glEnd();

    // Draw windows
    drawWindows2(x, y, width, height, alpha);
}
void buildingtype2(float x, float y, float height, float width, float r, float g, float b, float alpha) {
    // Set color with opacity
    glColor4f(r, g, b, alpha);

    // Draw main building
    glBegin(GL_POLYGON);
    glVertex2f(x, y);
    glVertex2f(x + width, y);
    glVertex2f(x + width, y + height);
    glVertex2f(x + width / 2, y + height + width / 2);
    glVertex2f(x, y + height);
    glEnd();

    // Draw door
    glColor4f(0.4, 0.2, 0.0, alpha); // Brown color for the door
    float doorWidth = width * 0.4;
    float doorHeight = height * 0.2;
    float doorX = x + (width - doorWidth) / 2;
    float doorY = y;
    glBegin(GL_POLYGON);
    glVertex2f(doorX, doorY);
    glVertex2f(doorX + doorWidth, doorY);
    glVertex2f(doorX + doorWidth, doorY + doorHeight);
    glVertex2f(doorX, doorY + doorHeight);
    glEnd();

    // Draw windows
    drawWindows1(x + width * 0.2, y + height * 0.1, width * 0.6, height * 0.7, alpha);
}
void workshopBuilding(float x, float y, float height, float width, float r, float g, float b, float alpha) {
    // Set color with opacity
    glColor4f(r, g, b, alpha);

    // Draw main workshop building
    glBegin(GL_POLYGON);
    glVertex2f(x, y);
    glVertex2f(x + width, y);
    glVertex2f(x + width, y + height);
    glVertex2f(x , y + height +4  );
    glVertex2f(x, y + height);
    glEnd();

    // Draw door
    glColor4f(0.4, 0.2, 0.30, alpha); // Brown color for the door
    float doorWidth = width * 0.35;
    float doorHeight = height * 0.28;
    float doorX = x + (width - doorWidth) / 2;
    float doorY = y;
    glBegin(GL_POLYGON);
    glVertex2f(doorX, doorY);
    glVertex2f(doorX + doorWidth, doorY);
    glVertex2f(doorX + doorWidth, doorY + doorHeight);
    glVertex2f(doorX, doorY + doorHeight);
    glEnd();

    // Draw windows
    glColor4f(0.753, 0.941, 1, alpha); // Light gray color for windows
    int numWindows = 4; // Adjust the number of windows as needed
    float windowWidth = width / 5;
    float windowHeight = height / 4;
    float spacingX = (width - numWindows * windowWidth) / (numWindows + 1);
    float spacingY = height / 6;

    for (int i = 0; i < numWindows; ++i) {
        float windowX = x + (i + 1) * spacingX + i * windowWidth;
        float windowY = y + height * 0.4;
        glBegin(GL_POLYGON);
        glVertex2f(windowX, windowY);
        glVertex2f(windowX + windowWidth, windowY);
        glVertex2f(windowX + windowWidth, windowY + windowHeight);
        glVertex2f(windowX, windowY + windowHeight);
        glEnd();
    }
    glBegin(GL_POLYGON);
    glVertex2f(8.8f,-5.0f);
    glVertex2f(28.0f,-5.0f);
    glVertex2f(28.0f,-5.0f+3.0f);
    glVertex2f(8.8f,-5.0f+3.0f);

    glEnd();
}
void Cloud() {
    glColor3f(1.0f, 1.0f, 1.0f); // White color for cloud
    glPushMatrix();
    glTranslatef(0.5f, 0.7f, 0.0f); // Position of the cloud
    glutSolidSphere(0.1f, 100, 100);
    glTranslatef(0.2f, 0.1f, 0.0f);
    glutSolidSphere(0.15f, 100, 100);
    glTranslatef(0.2f, -0.1f, 0.0f);
    glutSolidSphere(0.12f, 100, 100);
    glPopMatrix();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    if (dayBackground) {
        glClearColor(0.0, 0.0, 0.35, 1.0); // Night background
    } else {
        glClearColor(0.9, 0.9, 1.0, 1.0); // Day background
    }
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-25.0, 25.0, -20.0, 20.0); // Set the projection matrix

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    floor();
    buildingtype2(-25.0, -12.0, 14.0, 11.0, 0.55, 0.5, 0.5, 0.10);
    buildingtype2(12.0, -12.0, 13.0, 11.0, 0.55, 0.5, 0.5, 0.10);
    buildingtype1(-8.0, -12.0, 19.0, 16.0, 0.8, 0.8, 0.8, 0.90);
    buildingtype1(-18.0, -12.0, 13.0, 12.0, 0.3, 0.3, 0.3, 0.90);
    buildingtype1(-20.0, -12.0, 7.0, 6.0, 0.7, 0.7, 0.7, 0.90);
    buildingtype1(0.0, -12.0, 17.0, 11.0, 0.7, 0.7, 0.7, 0.90);
    buildingtype1(-10.0, -12.0, 12.0, 16.0, 0.72, 0.72, 0.72, 0.90);
    buildingtype1(20.0, -12.0, 18.0, 6.0, 0.7, 0.7, 0.7, 0.90);
    buildingtype1(0.0, -12.0, 18.0, 6.0, 0.5, 0.5, 0.5, 0.90);
    workshopBuilding(8.0, -12.0, 10.0, 20.0, 0.8, 0.6, 0.4, 0.90);
    buildingtype1(-06.0, -12.0, 8.0, 13.0, 0.8, 0.6, 0.4, 0.90);

    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 'd':
            dayBackground = false;
            break;
        case 'n':
            dayBackground = true;
            break;
    }
    glutPostRedisplay();
}

void display(int value) {
    glutPostRedisplay();
    glutTimerFunc(200, display, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

    glutInitWindowSize(1920, 1080);
    glutInitWindowPosition(0, 0);

    glutCreateWindow("Background changing animation with keyboard");
    glutDisplayFunc(display);
    glutTimerFunc(20, display, 0);
    glutKeyboardFunc(keyboard); // Register the keyboard callback
    glutMainLoop();

    return 0;
}
	/*Scaling*/

