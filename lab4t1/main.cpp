
#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <time.h>
using namespace std;

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
void FilledParallelogram(float x, float y, float width, float height, float angle, float baseShift, float topShift, float r = 1.0f, float g = 1.0f, float b = 1.0f) {
    glPushMatrix();
    glTranslatef(x, y, 0);
    glRotatef(angle, 0, 0, 1); // Rotate the parallelogram

    glBegin(GL_POLYGON);
    glColor3f(r, g, b);
    glVertex2f(0 - baseShift, 0);
    glVertex2f(width - baseShift, 0);
    glVertex2f(width - topShift, -height);
    glVertex2f(0 - topShift, -height);
    glEnd();

    glPopMatrix();
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
void drawCar() {

FilledRectangle(-0.4,-0.01,0.2,0.05);
            glBegin(GL_POLYGON);
            glColor3ub(250,250,250);
            glVertex2f(-0.38f, -0.01f);
            glVertex2f(-0.33f, 0.05f);
            glVertex2f(-0.28f, 0.05f);
            glVertex2f(-0.23f, -0.01f);
            glEnd();
            glBegin(GL_POLYGON);
            glColor3ub(173,220,255);
            glVertex2f(-0.375f, -0.005f);
            glVertex2f(-0.325f, 0.045f);
            glVertex2f(-0.285f, 0.045f);
            glVertex2f(-0.235f, -0.005f);

            glEnd();
            drawCircle(-0.35,-0.05,0.03,0.7,0.7,0.7);
            drawCircle(-0.25,-0.05,0.03,0.7,0.7,0.7);
}
void dayNight(int x){
    if(x==1)
    	FilledRectangle(-1.0f, 1.0f, 2.0f, 0.7f, 0.8f,1.0f,1.0f);
    else{
        FilledRectangle(-1.0f, 1.0f, 2.0f, 0.7f, 0.0f,0.0f,0.3f);
        drawCircle(-0.2,0.7,0.05,1.0,1.0,1.0);
        drawCircle(-0.18,0.72,0.05,0.0f,0.0f,0.3f);

        drawRandomDotsInRectangle(-1.0,1.0,1.0,0.4, 800);
    }

}
void display2() {
	glClear(GL_COLOR_BUFFER_BIT);

	FilledRectangle(-1.0f, -0.2f, 2.0f, 1.0f, 0.5f,1.0f,0.2f);
	FilledRectangle(-1.0f, -0.0f, 2.0f, 0.2f, 0.0f,0.0f,0.0f);
	FilledRectangle(-1.0f, 0.3f, 2.0f, 0.3f, 0.5f,0.8f,0.0f);
	dayNight(1);

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

    ellipse( -0.45f,0.17f,0.65f, 0.15f, 0.1f,1.0f,1.0f);

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



if(1){
    drawCloud(-1.0,0.6);
    drawCloud(-0.8,0.8);
    drawCloud(-0.5,0.6);
    drawCloud(-0.1,0.7);
    drawCloud(0.4,0.8);
    drawCloud(0.7,0.7);
    drawCloud(0.9,0.8);

}

glBegin(GL_POLYGON);
glColor3b(0.0,0.0,0.0);
    glVertex2f(-0.2f,0.3f);
    glVertex2f(0.8f,-1.0f);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(-0.18f,0.3f);
glEnd();
    for(float i=0,j=0;i<4;i+=0.1,j-=0.1){
        FilledRectangle(-0.19f+i, 0.3f+j, 0.01, 0.02);

    }
        FilledParallelogram(-0.06, 0.0, 0.09, 0.015, 0.0, 0.018, 0.0);
        FilledParallelogram(-0.04, -0.03, 0.09, 0.015, 0.0, 0.0182, 0.0);
        FilledParallelogram(-0.02, -0.06, 0.09, 0.015, 0.0, 0.0182, 0.0);
        FilledParallelogram(-0.00, -0.09, 0.09, 0.015, 0.0, 0.0182, 0.0);
        FilledParallelogram(0.02, -0.12, 0.09, 0.015, 0.0, 0.0182, 0.0);
        FilledParallelogram(0.04, -0.15, 0.09, 0.015, 0.0, 0.02, 0.0);
        FilledParallelogram(0.06, -0.18, 0.09, 0.015, 0.0, 0.02, 0.0);

        float ixt=0.3f;
        FilledParallelogram(-0.06+ixt-0.01, 0.0, 0.09, 0.015, 0.0, 0.018, 0.0);
        FilledParallelogram(-0.04+ixt+0.01, -0.03, 0.09, 0.015, 0.0, 0.0182, 0.0);
        FilledParallelogram(-0.02+ixt+0.02, -0.06, 0.09, 0.015, 0.0, 0.0182, 0.0);
        FilledParallelogram(-0.00+ixt+0.04, -0.09, 0.09, 0.015, 0.0, 0.0182, 0.0);
        FilledParallelogram(0.02+ixt+0.06, -0.12, 0.09, 0.015, 0.0, 0.0182, 0.0);
        FilledParallelogram(0.04+ixt+0.08, -0.15, 0.09, 0.015, 0.0, 0.02, 0.0);
        FilledParallelogram(0.06+ixt+0.1, -0.18, 0.09, 0.015, 0.0, 0.02, 0.0);


        FilledParallelogram(0.28, -0.250, 0.02, 0.08, 0.0, 0.06, 0.0);
        FilledParallelogram(0.32, -0.250, 0.02, 0.08, 0.0, 0.06, 0.0);
        FilledParallelogram(0.36, -0.250, 0.02, 0.08, 0.0, 0.06, 0.0);
        FilledParallelogram(0.4, -0.250, 0.02, 0.08, 0.0, 0.06, 0.0);
        FilledParallelogram(0.44, -0.250, 0.02, 0.08, 0.0, 0.06, 0.0);
        FilledParallelogram(0.48, -0.250, 0.02, 0.08, 0.0, 0.06, 0.0);
        FilledParallelogram(0.52, -0.250, 0.02, 0.08, 0.0, 0.07, 0.0);

        FilledParallelogram(0.02, 0.05, 0.01, 0.03, 0.0, 0.025, 0.0);
        FilledParallelogram(0.04, 0.05, 0.01, 0.03, 0.0, 0.025, 0.0);
        FilledParallelogram(0.06, 0.05, 0.01, 0.03, 0.0, 0.025, 0.0);
        FilledParallelogram(0.08, 0.05, 0.01, 0.03, 0.0, 0.025, 0.0);
        FilledParallelogram(0.10, 0.05, 0.01, 0.03, 0.0, 0.025, 0.0);
        FilledParallelogram(0.12, 0.05, 0.01, 0.03, 0.0, 0.025, 0.0);
        FilledParallelogram(0.14, 0.05, 0.01, 0.03, 0.0, 0.025, 0.0);


        FilledRectangle(0.18,0.02,0.015,0.27, 0.5,0.5, 0.5);
        FilledRectangle(0.18,0.03,0.15,0.06, 0.5,0.5, 0.5);
        drawCircle(0.22,0.001,0.018, 0.0,0.0,0.0);
        drawCircle(0.22,0.001,0.015, 1.0,0.0,0.0);

        drawCircle(0.22+0.045,0.001,0.018, 0.0,0.0,0.0);
        drawCircle(0.22+0.045,0.001,0.015, 1.0,1.0,0.0);
        drawCircle(0.22+0.045+0.045,0.001,0.018, 0.0,0.0,0.0);
        drawCircle(0.22+0.045+0.045,0.001,0.015, 0.0,1.0,0.0);

        FilledRectangle(0.49,0.04,0.015,0.27, 0.5,0.5, 0.5);
        glBegin(GL_POLYGON);
            glVertex2f(0.38f,0.1f);
            glVertex2f(0.38f,0.04f);
            glVertex2f(0.505f,-0.02f);
            glVertex2f(0.505f,0.04f);
        glEnd();
        FilledRectangle(0.0,0.21,0.012,0.2, 0.5,0.5, 0.5);
        glBegin(GL_POLYGON);
            glVertex2f(0.0f,0.22f);
            glVertex2f(0.1f,0.13f);
            glVertex2f(0.1f,0.08f);
            glVertex2f(0.0f,0.17f);
        glEnd();
        ellipse(0.033, 0.17, 0.025, 0.032, 0.0,0.0,0.0);
        ellipse(0.033, 0.17, 0.023, 0.03, 1.0,0.0,0.0);
        ellipse(0.055, 0.15, 0.025, 0.032, 0.0,0.0,0.0);
        ellipse(0.055, 0.15, 0.023, 0.03, 1.0,1.0,0.0);
        ellipse(0.077, 0.13, 0.025, 0.032, 0.0,0.0,0.0);
        ellipse(0.077, 0.13, 0.023, 0.03, 0.0,1.0,0.0);

        FilledRectangle(0.17,0.21,0.012,0.2, 0.5,0.5, 0.5);
        FilledRectangle(0.08,0.21,0.1,0.04, 0.5,0.5, 0.5);


drawCar();

    //applyDarkFilter();
	glFlush();
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



