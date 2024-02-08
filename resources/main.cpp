#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <fstream>

GLubyte* imageData;
int imageWidth, imageHeight;

float rectPositionX = 0.0;
float rectSpeed = 0.01;
GLuint textureID;

void loadImage(const char* filename) {
    FILE* file = fopen(filename, "rb");
    if (!file) {
        std::cerr << "Error opening file: " << filename << std::endl;
        exit(1);
    }

    // Read the bitmap header to get image dimensions
    fseek(file, 18, SEEK_SET);
    fread(&imageWidth, sizeof(int), 1, file);
    fread(&imageHeight, sizeof(int), 1, file);

    // Calculate the size of the image data
    int imageSize = imageWidth * imageHeight * 3;

    // Allocate memory for the image data
    imageData = new GLubyte[imageSize];

    // Read the image data
    fseek(file, 54, SEEK_SET); // Skip the header
    fread(imageData, sizeof(GLubyte), imageSize, file);
for (int i = 0; i < imageSize; i += 3) {
        GLubyte temp = imageData[i];
        imageData[i] = imageData[i + 2];
        imageData[i + 2] = temp;
    }
    fclose(file);

    // Set up texture parameters
    glEnable(GL_TEXTURE_2D);
    glGenTextures(1, &textureID);
    glBindTexture(GL_TEXTURE_2D, textureID);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, imageWidth, imageHeight, 0, GL_RGB, GL_UNSIGNED_BYTE, imageData);
    glBindTexture(GL_TEXTURE_2D, 0);
    glDisable(GL_TEXTURE_2D);
}
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);

    // Draw the rectangle
    glColor3d(1.0, 1.0, 1.0);
    glPushMatrix();
    glTranslatef(rectPositionX, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(-0.2f, -0.2f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(-0.2f, 0.2f);
    glEnd();
    glPopMatrix();

    // Draw the image texture on the rectangle
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, 1);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, imageWidth, imageHeight, 0, GL_RGB, GL_UNSIGNED_BYTE, imageData);

    glBegin(GL_QUADS);
    glTexCoord2f(0.0, 0.0); glVertex2f(rectPositionX - 0.2, -0.2);
    glTexCoord2f(1.0, 0.0); glVertex2f(rectPositionX + 0.2, -0.2);
    glTexCoord2f(1.0, 1.0); glVertex2f(rectPositionX + 0.2, 0.2);
    glTexCoord2f(0.0, 1.0); glVertex2f(rectPositionX - 0.2, 0.2);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, 0);
    glDisable(GL_TEXTURE_2D);

    glutSwapBuffers();
}
void update(int value) {
    // Update the rectangle position (move horizontally)
    rectPositionX += rectSpeed;
    if (rectPositionX > 1.0) {
        rectPositionX = -1.0;
    }

    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1400, 900);
    glutCreateWindow("Moving Rectangle with Image Texture");
    glutDisplayFunc(display);
    gluOrtho2D(-1, 1, -1, 1);

    // Load the bitmap image
    loadImage("E:\\Desktop\\OneDrive\\Documents\\Docs Files\\pls\\image9.bmp");

    glutTimerFunc(20, update, 0);
    glutMainLoop();

    delete[] imageData;

    return 0;
}
