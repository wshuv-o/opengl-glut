

#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <time.h>
using namespace std;
int af=2;
void display2();
void initGL() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

void FilledRectangle(float x, float y,  float width, float height, float r=1.0f,float g=1.0f,float b=1.0f){
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(r, g, b); // Yellow
	glVertex2f(x, y);
	glVertex2f(x+width, y);
	glVertex2f(x+width, y-height);
	glVertex2f(x, y-height);
	glEnd();
}

void VoidRectangle(float x, float y,  float width, float height, float lineWidth, float r=0.0f,float g=0.0f,float b=0.0f){
    glLineWidth(lineWidth);
    glBegin(GL_LINES);            // These vertices form a closed polygon
	glColor3f(r, g, b); // Yellow
	glVertex2f(x, y);
	glVertex2f(x+width, y);

    glVertex2f(x+width, y);
	glVertex2f(x+width, y-height);

	glVertex2f(x+width, y-height);
	glVertex2f(x, y-height);

	glVertex2f(x, y-height);
    glVertex2f(x, y);

	glEnd();
}
void FilledTriangle(float x, float y,  float width, float height, float lineWidth=2.0f, float r=1.0f,float g=1.0f,float b=1.0f ){

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(r, g, b); // Yellow
	glVertex2f(x+width/2, y);
	glVertex2f(x+width, y-height);
	glVertex2f(x, y-height);
	glEnd();

    glLineWidth(lineWidth);
    glBegin(GL_LINES);            // These vertices form a closed polygon
	glColor3f(r,g,b); // Yellow
	glVertex2f(x+width/2, y);
	glVertex2f(x+width, y-height);

    glVertex2f(x+width, y-height);
	glVertex2f(x, y-height);

	glVertex2f(x, y-height);
	glVertex2f(x+width/2, y);


	glEnd();

}

void window(float x, float y,  float width, float height, float cell,float lineWidth, float r=1.0f,float g=1.0f,float b=1.0f ){
    VoidRectangle(x,y,width,height, lineWidth);
    FilledRectangle(x,y,width,height, r,g,b);

    float n=sqrt(cell);
    float xd=width/n;
    float yd=height/n;

    for(int i=1;i<n;i++){
        glLineWidth(lineWidth);
        glBegin(GL_LINES);
        glColor3f(0.0f,0.0f,0.0f);
        glVertex2f(x+xd*i, y);
        glVertex2f(x+xd*i, y-height);

        glVertex2f(x, y-yd*i);
        glVertex2f(x+width, y-yd*i);
        glEnd();
    }



}


void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
}

void ellipse(float centerX, float centerY, float width, float height, float r, float g, float b)
{
    glBegin(GL_POLYGON);

    glColor3f(r, g, b);

    for (int i = 0; i < 360; i++) // Increase the number of iterations for smoother ellipse
    {
        float angle = i * 3.1416 / 180;
        float x = centerX + (width / 2) * cos(angle);
        float y = centerY + (height / 2) * sin(angle);
        glVertex2f(x, y);
    }

    glEnd();
}

void applyDarkFilter() {
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glColor4f(0.0, 0.0, 0.0, 0.5); // Dark with 50% opacity
    glBegin(GL_QUADS);
    glVertex2f(-800, -600);
    glVertex2f(800, 0);
    glVertex2f(800, 600);
    glVertex2f(0, 600);
    glEnd();

    glDisable(GL_BLEND);
}

void windmil(float i, float j)
{

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
    glVertex2f(-0.780f+i, 0.468f-j);
    glVertex2f(-0.740f+i, 0.44f-j);
    glVertex2f(-0.736f+i, 0.456f-j);
    glVertex2f(-0.778f+i, 0.472f-j);
    glVertex2f(-0.780f+i, 0.527f-j);
    glVertex2f(-0.789f+i, 0.519f-j);
    glVertex2f(-0.783f+i, 0.476f-j);
    glVertex2f(-0.82f+i, 0.417f-j);
    glVertex2f(-0.81f+i, 0.409f-j);
    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3ub(255,255,255);
    glVertex2f(-0.78f+i, 0.5f-j);
    glVertex2f(-0.77f+i, 0.3f-j);
    glVertex2f(-0.79f+i, 0.3f-j);


    glEnd();
}
void drawCircle(float x, float y, float r, float red, float green, float blue) {
    glColor3f(red, green, blue);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // Center of the circle
    for (int i = 0; i <= 360; i++) {
        float angle = i * 3.1415926 / 180; // Convert degrees to radians
        float cx = x + r * cos(angle);
        float cy = y + r * sin(angle);
        glVertex2f(cx, cy);
    }
    glEnd();
}
void drawCloud(float x, float y){
    drawCircle(x+0.05,y+0.05, 0.07, 1.0,1.0,1.0);
    drawCircle(x+0.07,y+0.07, 0.06, 1.0,1.0,1.0);

    drawCircle(x+0.09,y+0.05, 0.07, 1.0,1.0,1.0);

    drawCircle(x,y, 0.05, 1.0,1.0,1.0);
    drawCircle(x+0.07,y, 0.05, 1.0,1.0,1.0);
    drawCircle(x+0.14,y, 0.05, 1.0,1.0,1.0);

}

void Line(){
    	glLineWidth(5);
    glBegin(GL_POLYGON);
    glColor3ub(255,255,120);
    glVertex2f(-0.1f,-0.60f);
    glVertex2f(-0.1f,-0.45f);
    glVertex2f(-0.12f,-0.45f);
        glVertex2f(-0.12f,-0.60f);

    glEnd();
}
float randomFloat(float min, float max) {
    return min + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (max - min)));
}

void drawRandomDotsInRectangle(float left, float right, float bottom, float top, int numDots) {
    glColor3f(1.0, 1.0, 1.0); // White color for dots
    glPointSize(1);
    glBegin(GL_POINTS);

    for (int i = 0; i < numDots; i++) {
        float randomX = randomFloat(left, right);
        float randomY = randomFloat(bottom, top);
        glVertex2f(randomX, randomY);
    }

    glEnd();
}
void dayNight(int x){
    if(x==1){
    	FilledRectangle(-1.0f, 1.0f, 2.0f, 0.7f, 0.8f,1.0f,1.0f);

    }
    else{
        FilledRectangle(-1.0f, 1.0f, 2.0f, 0.7f, 0.0f,0.0f,0.3f);
        drawCircle(-0.2,0.7,0.05,1.0,1.0,1.0);
        drawCircle(-0.18,0.72,0.05,0.0f,0.0f,0.3f);
    applyDarkFilter();

        drawRandomDotsInRectangle(-1.0,1.0,1.0,0.4, 800);


    }

}

void display2() {
	glClear(GL_COLOR_BUFFER_BIT);

	FilledRectangle(-1.0f, -0.2f, 2.0f, 1.0f, 0.5f,1.0f,0.2f);
	FilledRectangle(-1.0f, -0.0f, 2.0f, 0.2f, 0.0f,0.0f,0.0f);
	FilledRectangle(-1.0f, 0.3f, 2.0f, 0.3f, 0.5f,0.8f,0.0f);
	dayNight(af);

	FilledTriangle(-1.0f, 0.45f, 0.2f, 0.15f, 0.0f, 0.6f,0.6f,0.6f);
	FilledTriangle(-0.85f, 0.50f, 0.25f, 0.2f, 0.0f, 0.7f,0.7f,0.7f);
	FilledTriangle(-0.48f, 0.40f, 0.22f, 0.1f, 0.0f, 0.7f,0.7f,0.7f);
	FilledTriangle(-0.37f, 0.45f, 0.22f, 0.15f, 0.0f, 0.8f,0.8f,0.8f);
	FilledTriangle(-0.30f, 0.6f, 0.4f, 0.3f, 0.0f, 0.9f,0.9f,0.9f);

//Line();
	FilledRectangle(0.2f, 0.6f, 0.1f, 0.3f, 0.84f,0.97f,0.97f);
	FilledRectangle(0.3f, 0.4f, 0.08f, 0.1f, 0.84f,0.97f,0.97f);
	FilledRectangle(0.38f, 0.6f, 0.15f, 0.3f, 0.84f,0.97f,0.97f);
	FilledRectangle(0.53f, 0.7f, 0.05f, 0.4f, 0.84f,0.97f,0.97f);
	FilledRectangle(0.58f, 0.5f, 0.07f, 0.2f, 0.84f,0.97f,0.97f);
	FilledRectangle(0.65f, 0.6f, 0.1f, 0.3f, 0.84f,0.97f,0.97f);
	FilledRectangle(0.75f, 0.5f, 0.08f, 0.2f, 0.84f,0.97f,0.97f);
	FilledRectangle(0.83f, 0.7f, 0.08f, 0.4f, 0.84f,0.97f,0.97f);
	FilledRectangle(0.91f, 0.5f, 0.09f, 0.2f, 0.84f,0.97f,0.97f);

    ellipse( -0.45f,0.17f,0.7f, 0.15f, 0.1f,1.0f,1.0f);

    windmil(-0.1,0.2);
    windmil(-0.2,0.15);
    windmil(-0.05,0.1);

    ellipse( -0.1f,-0.6f,0.45f, 0.18f, 0.1f,0.5f,0.2f);
    FilledRectangle(-0.12f,-0.5f, 0.03, 0.1, 0.7, 0.5, 0.0);

//Line();
    for(float i=0,j=0;i<4;i+=0.07,j+=0.4){
        FilledRectangle(-1.0f+i, -0.1f, 0.03, 0.01);
    }
	FilledTriangle(-0.3f, 0.0f, 0.4f, 0.5f, 0.0f, 0.0f,0.8f,0.2f);
    ellipse(0.06f,0.22f,0.13f, 0.05f, 0.1f,0.5f,0.2f);
    FilledRectangle(0.05f,0.25f, 0.01, 0.03, 0.7, 0.5, 0.0);

    float xi=0.54,yi=-0.1;
    FilledTriangle(0.0f+xi, 0.4f+yi, 0.12f, 0.15f, 0.0f, 0.0f,0.8f,0.2f);

    ellipse(0.06f+xi,0.22f+yi,0.13f, 0.05f, 0.1f,0.5f,0.2f);
    FilledRectangle(0.05f+xi,0.25f+yi, 0.01, 0.03, 0.7, 0.5, 0.0);

    xi=0.74;yi=-0.15;
    FilledTriangle(0.0f+xi, 0.4f+yi, 0.12f, 0.15f, 0.0f, 0.0f,0.8f,0.2f);

    ellipse(0.06f+xi,0.22f+yi,0.13f, 0.05f, 0.1f,0.5f,0.2f);
    FilledRectangle(0.05f+xi,0.25f+yi, 0.01, 0.03, 0.7, 0.5, 0.0);


	FilledTriangle(0.0f, 0.4f, 0.12f, 0.15f, 0.0f, 0.0f,0.8f,0.2f);

	FilledRectangle(0.15f, 0.43f, 0.16f, 0.16f, 0.64f,0.220f,0.176f);
	VoidRectangle(0.15f, 0.43f, 0.16f, 0.16f, 0.76f,0.74f,0.76f);
    FilledTriangle(0.13f, 0.52f, 0.2f, 0.1f, 0.0f, 0.65f,0.65f,0.65f);
    FilledTriangle(0.15f, 0.51f, 0.16f, 0.08f, 0.0f, 0.86f,0.84f,0.76f);

    window(0.16,0.38,0.035,0.035, 4, 1.5);
    window(0.26,0.38,0.035,0.035, 4, 1.5);
    window(0.21,0.47,0.03,0.03, 4, 1.5);
    window(0.21,0.38,0.03,0.1, 0, 1.5);

float w=0.5;
    FilledRectangle(0.15f+w, 0.43f, 0.16f, 0.16f, 0.86f+w*0.3,0.84f,0.76f-w*0.5);
	VoidRectangle(0.15f+w, 0.43f, 0.16f, 0.16f, 0.76f,0.74f,0.76f);
    FilledTriangle(0.13f+w, 0.52f, 0.2f, 0.1f, 0.0f, 0.65f,0.65f,0.65f);
    FilledTriangle(0.15f+w, 0.51f, 0.16f, 0.08f, 0.0f, 0.86f,0.84f,0.76f);

    window(0.16+w,0.38,0.035,0.035, 4, 1.5);
    window(0.26+w,0.38,0.035,0.035, 4, 1.5);
    window(0.21+w,0.47,0.03,0.03, 4, 1.5);
    window(0.21+w,0.38,0.03,0.1, 0, 1.5);

 w=0.2;
    FilledRectangle(0.15f+w, 0.43f, 0.2f, 0.2f, 0.86f+w*0.3,0.84f,0.76f-w*0.5);
	VoidRectangle(0.15f+w, 0.43f, 0.2f, 0.2f, 0.76f,0.74f,0.76f);
    FilledTriangle(0.14f+w, 0.57f, 0.22f, 0.15f, 0.0f, 0.65f,0.65f,0.65f);
    FilledTriangle(0.15f+w, 0.56f, 0.2f, 0.13f, 0.0f, 0.86f,0.84f,0.76f);

    window(0.18+w,0.38,0.035,0.035, 4, 1.5);
    window(0.28+w,0.38,0.035,0.035, 4, 1.5);
    window(0.18+w,0.32,0.035,0.035, 4, 1.5);
    window(0.28+w,0.32,0.035,0.035, 4, 1.5);
    window(0.23+w,0.47,0.03,0.03, 4, 1.5);
    window(0.23+w,0.32,0.03,0.08, 0, 1.5);

     w=0.7;
    FilledRectangle(0.15f+w, 0.43f, 0.2f, 0.2f, 0.0,0.64,0.57);
	VoidRectangle(0.15f+w, 0.43f, 0.2f, 0.2f, 0.76f,0.74f,0.76f);
    FilledTriangle(0.14f+w, 0.57f, 0.22f, 0.15f, 0.0f, 0.165f,0.165f,0.165f);
    FilledTriangle(0.15f+w, 0.56f, 0.2f, 0.13f, 0.0f, 0.60,0.64,0.57);

    window(0.18+w,0.38,0.035,0.035, 4, 1.5);
    window(0.28+w,0.38,0.035,0.035, 4, 1.5);
    window(0.18+w,0.32,0.035,0.035, 4, 1.5);
    window(0.28+w,0.32,0.035,0.035, 4, 1.5);
    window(0.23+w,0.47,0.03,0.03, 4, 1.5);
    window(0.23+w,0.32,0.03,0.08, 0, 1.5);



if(0){
    drawCloud(-1.0,0.6);
    drawCloud(-0.8,0.8);
    drawCloud(-0.5,0.6);
    drawCloud(-0.1,0.7);
    drawCloud(0.4,0.8);
    drawCloud(0.7,0.7);
    drawCloud(0.9,0.8);
}

	glFlush();
}
void keyboardFunc(unsigned char key, int x, int y) {
    switch (key) {
        case 'D':
        case 'd':{af = 1;
        }

            break;
        case 'N':
        case 'n':{af = 2;

        }
            break;
       default:
            break;
    }glutPostRedisplay() ;
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(display2);
	glutKeyboardFunc(keyboardFunc);    // Register callback handler for window re-paint event
	initGL();

	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}



