#include<iostream>
using namespace std;
#include <GL/glut.h>
#include <math.h>
float t=0, t1=-5.9, t2=0.7;
int fly1 = 1, fly2 = -1, fly3 = -1, fly4 = 1;
float buildingYOffset1 = 0.0f, buildingYOffset2 = 0.0f, buildingYOffset3 = 0.0f, buildingYOffset4 = 0.0f;
const float DEG2RAD = 3.14159/180.0;
GLfloat speed=0.02f,speed2=0.015f;
float sc=1, h=0;
int sz=7;
int starc1=255,starc2=255,starc3=255;
void midPointEllipse(float xradius, float yradius, float q)
{
	glBegin(GL_POLYGON);

	for(int i=0; i < 360; i++)
	{
		 //convert degrees into radians
		float degInRad = i*DEG2RAD/q;
		glVertex2f(cos(degInRad)*xradius,sin(degInRad)*yradius);
	}
	glEnd();
}


void domeDesign()
{
	glColor3ub(240, 48, 173); //Dome's pink line
    	glBegin(GL_QUADS);
    	glVertex2f(-0.65f,-0.33f);
    	glVertex2f(-1.0f,-0.33f);
    	glVertex2f(-1.0f,-0.38f);
    	glVertex2f(-0.6f,-0.38f);

    	glVertex2f(-0.65f,-0.33f);
    	glVertex2f(-1.0f,-0.33f);
    	glVertex2f(-1.0f,-0.38f);
    	glVertex2f(-0.6f,-0.38f);

    	glColor3ub(255, 255, 255); //Dome's White Windows
    	glVertex2f(-1.0f,-0.55f);
    	glVertex2f(-0.95f,-0.55f);
    	glVertex2f(-0.95f,-0.5f);
    	glVertex2f(-1.0f,-0.5f);

    	glVertex2f(-0.8f,-0.55f);
    	glVertex2f(-0.65f,-0.55f);
    	glVertex2f(-0.65f,-0.5f);
    	glVertex2f(-0.8f,-0.5f);
	glEnd();
}
void signaltower()
{
	glColor3ub(90, 90, 90); //Upper and Lower Rectangular design of the tower
	glBegin(GL_QUADS);
	glVertex2f(-0.75f, -0.59f);
	glVertex2f(-0.5f, -0.59f);
	glVertex2f(-0.51f, -0.4f);
	glVertex2f(-0.74f, -0.4f);
	glVertex2f(-0.72f, 0.3f);
	glVertex2f(-0.52f, 0.3f);
	glVertex2f(-0.52f, 0.4f);
	glVertex2f(-0.72f, 0.4f);
	
	glColor3ub(75,122,150); //The body of the tower
	glVertex2f(-0.74f, -0.4f);
	glVertex2f(-0.51f, -0.4f);
	glVertex2f(-0.52f, 0.3f);
	glVertex2f(-0.72f, 0.3f);
	glEnd();

	glColor3ub(75,122,150);//Oval of the signal tower
	glPushMatrix();
	glTranslatef(-0.62,0.45,0);
	glScalef(0.08,0.08,1);
	midPointEllipse(4, 1, 1);
	glPopMatrix();

	glColor3ub(255, 255, 255); //The triangle above the oval
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.6f,0.55f);
	glVertex2f(-0.64f,0.55f);
	glVertex2f(-0.62f,0.7f);
	glEnd();
	
	glColor3ub(255, 255, 255); 
	glBegin(GL_QUADS); //The mid rectangle box of the oval
	glVertex2f(-0.95f,0.43f);
	glVertex2f(-0.3f,0.43f);
	glVertex2f(-0.3f,0.48f);
	glVertex2f(-0.95f,0.48f);

	glColor3ub(90, 90, 90); //Rectangle below the triangle at the top
	glVertex2f(-0.66f,0.55f);
	glVertex2f(-0.58f,0.55f);
	glVertex2f(-0.58f,0.5f);
	glVertex2f(-0.66f,0.5f);

	glColor3ub(255, 255, 0); //The yellow windows of the signal tower
	glVertex2f(-0.93f,0.44f);
	glVertex2f(-0.83f,0.44f);
	glVertex2f(-0.83f,0.47f);
	glVertex2f(-0.93f,0.47f);

	glVertex2f(-0.58f,0.44f);
	glVertex2f(-0.68f,0.44f);
	glVertex2f(-0.68f,0.47f);
	glVertex2f(-0.58f,0.47f);

	glVertex2f(-0.43f,0.44f);
	glVertex2f(-0.33f,0.44f);
	glVertex2f(-0.33f,0.47f);
	glVertex2f(-0.43f,0.47f);

	glVertex2f(-0.6f,0.31f);
	glVertex2f(-0.63f,0.31f);
	glVertex2f(-0.63f,0.34f);
	glVertex2f(-0.6f,0.34f);

	glVertex2f(-0.65f,0.31f);
	glVertex2f(-0.68f,0.31f);
	glVertex2f(-0.68f,0.34f);
	glVertex2f(-0.65f,0.34f);

	glVertex2f(-0.7f,0.31f);
	glVertex2f(-0.72f,0.31f);
	glVertex2f(-0.72f,0.34f);
	glVertex2f(-0.7f,0.34f);

	glVertex2f(-0.55f,0.31f);
	glVertex2f(-0.58f,0.31f);
	glVertex2f(-0.58f,0.34f);
	glVertex2f(-0.55f,0.34f);

	glVertex2f(-0.52f,0.31f);
	glVertex2f(-0.53f,0.31f);
	glVertex2f(-0.53f,0.34f);
	glVertex2f(-0.52f,0.34f);

	glVertex2f(-0.6f,0.21f);
	glVertex2f(-0.63f,0.21f);
	glVertex2f(-0.63f,0.24f);
	glVertex2f(-0.6f,0.24f);

	glVertex2f(-0.6f,0.11f);
	glVertex2f(-0.63f,0.11f);
	glVertex2f(-0.63f,0.14f);
	glVertex2f(-0.6f,0.14f);

	glVertex2f(-0.6f,0.01f);
	glVertex2f(-0.63f,0.01f);
	glVertex2f(-0.63f,0.04f);
	glVertex2f(-0.6f,0.04f);

	glVertex2f(-0.6f,-0.05f);
	glVertex2f(-0.63f,-0.05f);
	glVertex2f(-0.63f,-0.08f);
	glVertex2f(-0.6f,-0.08f);

	glVertex2f(-0.6f,-0.15f);
	glVertex2f(-0.63f,-0.15f);
	glVertex2f(-0.63f,-0.18f);
	glVertex2f(-0.6f,-0.18f);

	glVertex2f(-0.6f,-0.25f);
	glVertex2f(-0.63f,-0.25f);
	glVertex2f(-0.63f,-0.28f);
	glVertex2f(-0.6f,-0.28f);

	glVertex2f(-0.6f,-0.35f);
	glVertex2f(-0.63f,-0.35f);
	glVertex2f(-0.63f,-0.38f);
	glVertex2f(-0.6f,-0.38f);

	glVertex2f(-0.51f,-0.45f);
	glVertex2f(-0.6f,-0.45f);
	glVertex2f(-0.6f,-0.59f);
	glVertex2f(-0.51f,-0.59f);

	glEnd();
}
void officeBuilding()
{
	glColor3ub(20, 98, 117); // Outer border of the office building
	glPushMatrix();
	glTranslatef(-0.28,-0.59,0);
	glScalef(0.08,0.08,1);
	midPointEllipse(3, 12, 2);
	glPopMatrix();
	glColor3ub(0, 180, 180);
	glPushMatrix();
	glTranslatef(-0.28,-0.59,0);
	glScalef(0.05,0.07,1);
	midPointEllipse(3, 12, 2);
	glPopMatrix();
	glColor3ub(255, 255, 0); // Inner design of the windows of office buiding
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.34f,-0.18f);
	glVertex2f(-0.22f,-0.18f);
	glVertex2f(-0.285f,0.18f);

	glEnd();
	glBegin(GL_QUADS);

    glVertex2f(-0.20f,-0.23f);
    glVertex2f(-0.36f,-0.23f);
    glVertex2f(-0.36f,-0.28f);
    glVertex2f(-0.20f,-0.28f);

    glVertex2f(-0.18f,-0.33f);
    glVertex2f(-0.38f,-0.33f);
    glVertex2f(-0.38f,-0.38f);
    glVertex2f(-0.18f,-0.38f);

    glVertex2f(-0.16f,-0.43f);
    glVertex2f(-0.40f,-0.43f);
    glVertex2f(-0.40f,-0.48f);
    glVertex2f(-0.16f,-0.48f);

    glVertex2f(-0.15f,-0.53f);
    glVertex2f(-0.41f,-0.53f);
    glVertex2f(-0.41f,-0.58f);
    glVertex2f(-0.15f,-0.58f);

	glEnd();
}
void globeTower()
{
	glPushMatrix();
    	glTranslatef(0.105,0.51,0);
    	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,180,180); //globe
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }

	glEnd();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(180,180,0); //yellow boxes in globe
            float pi=3.1416/2;
            float A=(i*2*pi)/200;
            float r=0.17;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }

	glEnd();

	glPopMatrix();
	glBegin(GL_QUADS); //Base of the tower
	glColor3ub(0, 120, 150);
	glVertex2f(-0.05f,-0.59f);
	glVertex2f(0.26f,-0.59f);
	glVertex2f(0.26f,-0.38f);
	glVertex2f(-0.05f,-0.38f);

	glColor3ub(0, 220, 230); //Tower's Body
	glVertex2f(-0.05f,-0.38f);
	glVertex2f(0.26f,-0.38f);
	glVertex2f(0.26f,0.38f);
	glVertex2f(-0.05f,0.38f);

	glColor3ub(0, 120, 150); //Above the body and below the dome
	glVertex2f(-0.15f,0.4f);
	glVertex2f(0.36f,0.4f);
	glVertex2f(0.36f,0.33f);
	glVertex2f(-0.15f,0.33f);

	glEnd();

	glBegin(GL_LINES); //divider lines in globe

	glColor3ub(0, 180, 180);
	glVertex2f(-0.05f,0.59f);
	glVertex2f(0.26f,0.59f);
	glVertex2f(0.0f,0.5f);
	glVertex2f(0.07f,0.68f);
	glVertex2f(0.2f,0.5f);
	glVertex2f(0.13f,0.68f);
	glEnd();


	glBegin(GL_QUADS);

	glColor3ub(200, 200, 0);
	glVertex2f(-0.15f,0.39f);
	glVertex2f(-0.1f,0.39f);
	glVertex2f(-0.1f,0.34f);
	glVertex2f(-0.15f,0.34f);

	glVertex2f(-0.05f,0.39f);
	glVertex2f(-0.0f,0.39f);
	glVertex2f(-0.0f,0.34f);
	glVertex2f(-0.05f,0.34f);

	glVertex2f(0.05f,0.39f);
	glVertex2f(0.1f,0.39f);
	glVertex2f(0.1f,0.34f);
	glVertex2f(0.05f,0.34f);

	glVertex2f(0.15f,0.39f);
	glVertex2f(0.2f,0.39f);
	glVertex2f(0.2f,0.34f);
	glVertex2f(0.15f,0.34f);

	glVertex2f(0.25f,0.39f);
	glVertex2f(0.3f,0.39f);
	glVertex2f(0.3f,0.34f);
	glVertex2f(0.25f,0.34f);

	glVertex2f(0.35f,0.39f);
	glVertex2f(0.36f,0.39f);
	glVertex2f(0.36f,0.34f);
	glVertex2f(0.35f,0.34f);

	glVertex2f(-0.0f,0.28f);
	glVertex2f(-0.05f,0.28f);
	glVertex2f(-0.05f,0.2f);
	glVertex2f(-0.0f,0.2f);

	glVertex2f(0.21f,0.28f);
	glVertex2f(0.26f,0.28f);
	glVertex2f(0.26f,0.2f);
	glVertex2f(0.21f,0.2f);

	glVertex2f(-0.0f,0.18f);
	glVertex2f(-0.05f,0.18f);
	glVertex2f(-0.05f,0.1f);
	glVertex2f(-0.0f,0.1f);

	glVertex2f(0.21f,0.18f);
	glVertex2f(0.26f,0.18f);
	glVertex2f(0.26f,0.1f);
	glVertex2f(0.21f,0.1f);

	glVertex2f(-0.0f,0.08f);
	glVertex2f(-0.05f,0.08f);
	glVertex2f(-0.05f,0.0f);
	glVertex2f(-0.0f,0.0f);

	glVertex2f(0.21f,0.08f);
	glVertex2f(0.26f,0.08f);
	glVertex2f(0.26f,0.0f);
	glVertex2f(0.21f,0.0f);

	glVertex2f(-0.0f,-0.02f);
	glVertex2f(-0.05f,-0.02f);
	glVertex2f(-0.05f,-0.1f);
	glVertex2f(-0.0f,-0.1f);

	glVertex2f(0.21f,-0.02f);
	glVertex2f(0.26f,-0.02f);
	glVertex2f(0.26f,-0.1f);
	glVertex2f(0.21f,-0.1f);

	glVertex2f(-0.0f,-0.12f);
	glVertex2f(-0.05f,-0.12f);
	glVertex2f(-0.05f,-0.2f);
	glVertex2f(-0.0f,-0.2f);

	glVertex2f(0.21f,-0.12f);
	glVertex2f(0.26f,-0.12f);
	glVertex2f(0.26f,-0.2f);
	glVertex2f(0.21f,-0.2f);

	glVertex2f(-0.0f,-0.22f);
	glVertex2f(-0.05f,-0.22f);
	glVertex2f(-0.05f,-0.3f);
	glVertex2f(-0.0f,-0.3f);

	glVertex2f(0.21f,-0.22f);
	glVertex2f(0.26f,-0.22f);
	glVertex2f(0.26f,-0.3f);
	glVertex2f(0.21f,-0.3f);

	glEnd();
	
}
void recttower()
{
	glBegin(GL_QUADS);

	glColor3ub(0, 120, 120); //blue body
	glVertex2f(0.3f,-0.59f);
	glVertex2f(0.4f,-0.59f);
	glVertex2f(0.4f,0.28f);
	glVertex2f(0.3f,0.28f);

	glColor3ub(0,220,220); //dark blue body
	glVertex2f(0.4f,-0.59f);
	glVertex2f(0.56f,-0.59f);
	glVertex2f(0.56f,0.28f);
	glVertex2f(0.4f,0.28f);

	glColor3ub(255,255,255);// upar ka white signal 
	glVertex2f(0.4f,0.28f);
	glVertex2f(0.46f,0.28f);
	glVertex2f(0.46f,0.38f);
	glVertex2f(0.4f,0.38f);

	glVertex2f(0.49f,0.28f);
	glVertex2f(0.5f,0.28f);
	glVertex2f(0.5f,0.4f);
	glVertex2f(0.49f,0.4f);

	glColor3ub(0,80,80);
	glVertex2f(0.43f,0.25f);
	glVertex2f(0.47f,0.25f);
	glVertex2f(0.47f,0.15f);
	glVertex2f(0.43f,0.15f);

	glColor3ub(200, 200, 0); //yellow khidki
	glVertex2f(0.48f,0.25f);
	glVertex2f(0.52f,0.25f);
	glVertex2f(0.52f,0.15f);
	glVertex2f(0.48f,0.15f);

	glColor3ub(0,80,80); //dark khidki
	glVertex2f(0.53f,0.25f);
	glVertex2f(0.56f,0.25f);
	glVertex2f(0.56f,0.15f);
	glVertex2f(0.53f,0.15f);

	glVertex2f(0.43f,0.14f);
	glVertex2f(0.47f,0.14f);
	glVertex2f(0.47f,0.04f);
	glVertex2f(0.43f,0.04f);

	glVertex2f(0.48f,0.14f);
	glVertex2f(0.52f,0.14f);
	glVertex2f(0.52f,0.04f);
	glVertex2f(0.48f,0.04f);

	glColor3ub(200, 200, 0);
	glVertex2f(0.53f,0.14f);
	glVertex2f(0.56f,0.14f);
	glVertex2f(0.56f,0.04f);
	glVertex2f(0.53f,0.04f);

	glColor3ub(0,80,80);
	glVertex2f(0.43f,0.03f);
	glVertex2f(0.47f,0.03f);
	glVertex2f(0.47f,-0.07f);
	glVertex2f(0.43f,-0.07f);

	glColor3ub(200, 200, 0);
	glVertex2f(0.48f,0.03f);
	glVertex2f(0.52f,0.03f);
	glVertex2f(0.52f,-0.07f);
	glVertex2f(0.48f,-0.07f);

	glColor3ub(0,80,80);
	glVertex2f(0.53f,0.03f);
	glVertex2f(0.56f,0.03f);
	glVertex2f(0.56f,-0.07f);
	glVertex2f(0.53f,-0.07f);

	glVertex2f(0.43f,-0.08f);
	glVertex2f(0.47f,-0.08f);
	glVertex2f(0.47f,-0.18f);
	glVertex2f(0.43f,-0.18f);

	glVertex2f(0.48f,-0.08f);
	glVertex2f(0.52f,-0.08f);
	glVertex2f(0.52f,-0.18f);
	glVertex2f(0.48f,-0.18f);

	glColor3ub(200, 200, 0);
	glVertex2f(0.53f,-0.08f);
	glVertex2f(0.56f,-0.08f);
	glVertex2f(0.56f,-0.18f);
	glVertex2f(0.53f,-0.18f);

	glVertex2f(0.43f,-0.19f);
	glVertex2f(0.47f,-0.19f);
	glVertex2f(0.47f,-0.29f);
	glVertex2f(0.43f,-0.29f);

	glColor3ub(0,80,80);
	glVertex2f(0.48f,-0.19f);
	glVertex2f(0.52f,-0.19f);
	glVertex2f(0.52f,-0.29f);
	glVertex2f(0.48f,-0.29f);

	glColor3ub(200, 200, 0);
	glVertex2f(0.53f,-0.19f);
	glVertex2f(0.56f,-0.19f);
	glVertex2f(0.56f,-0.29f);
	glVertex2f(0.53f,-0.29f);

	glVertex2f(0.43f,-0.3f);
	glVertex2f(0.47f,-0.3f);
	glVertex2f(0.47f,-0.4f);
	glVertex2f(0.43f,-0.4f);

	glColor3ub(0,80,80);
	glVertex2f(0.48f,-0.3f);
	glVertex2f(0.52f,-0.3f);
	glVertex2f(0.52f,-0.4f);
	glVertex2f(0.48f,-0.4f);

	glVertex2f(0.53f,-0.3f);
	glVertex2f(0.56f,-0.3f);
	glVertex2f(0.56f,-0.4f);
	glVertex2f(0.53f,-0.4f);

	glVertex2f(0.43f,-0.41f);
	glVertex2f(0.47f,-0.41f);	
	glVertex2f(0.47f,-0.51f);
	glVertex2f(0.43f,-0.51f);

	glColor3ub(200, 200, 0);
	glVertex2f(0.48f,-0.41f);
	glVertex2f(0.52f,-0.41f);
	glVertex2f(0.52f,-0.51f);
	glVertex2f(0.48f,-0.51f);

	glColor3ub(0,80,80);
	glVertex2f(0.53f,-0.41f);
	glVertex2f(0.56f,-0.41f);
	glVertex2f(0.56f,-0.51f);
	glVertex2f(0.53f,-0.51f);

	glEnd();
}
void backgroundBuildings()
{
	glColor3ub(0,0,0);
	glBegin(GL_POLYGON); //The buildings in the background
	glVertex2f(-1.0f,-0.59f);
	glVertex2f(-1.0f,0.2f);
	glVertex2f(-0.98f,0.2f);
	glVertex2f(-0.98f,0.15f);
	glVertex2f(-0.95f,0.18f);
	glVertex2f(-0.92f,0.15f);
	glVertex2f(-0.92f,0.3f);
	glVertex2f(-0.89f,0.3f);
	glVertex2f(-0.89f,0.27f);
	glVertex2f(-0.86f,0.27f);
	glVertex2f(-0.86f,0.25f);
	glVertex2f(-0.83f,0.25f);
	glVertex2f(-0.83f,0.2f);
	glVertex2f(-0.8f,0.23f);
	glVertex2f(-0.77f,0.2f);
	glVertex2f(-0.74f,0.2f);
	glVertex2f(-0.74f,0.35f);
	glVertex2f(-0.7f,0.35f);
	glVertex2f(-0.7f,0.2f);
	glVertex2f(-0.67f,0.2f);
	glVertex2f(1.0f,-0.59f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-0.67f,-0.59f);
	glVertex2f(-0.67f,0.4f);
	glVertex2f(-0.61f,0.4f);
	glVertex2f(-0.61f,0.3f);
	glVertex2f(-0.55f,0.3f);
	glVertex2f(-0.55f,0.25f);
	glVertex2f(-0.53f,0.25f);
	glVertex2f(-0.51f,0.2f);
	glVertex2f(-0.46f,0.2f);
	glVertex2f(1.0f,-0.59f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-0.46f,-0.59f);
	glVertex2f(-0.46f,0.5f);
	glVertex2f(-0.35f,0.5f);
	glVertex2f(-0.35f,0.25f);
	glVertex2f(-0.3f,0.25f);
	glVertex2f(1.0f,-0.59f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-0.3f,-0.59f);
	glVertex2f(-0.3f,0.5f);
	glVertex2f(-0.25f,0.5f);
	glVertex2f(-0.25f,0.53f);
	glVertex2f(-0.23f,0.53f);
	glVertex2f(-0.23f,0.25f);
	glVertex2f(-0.23f,0.4f);
	glVertex2f(-0.14f,0.4f);
	glVertex2f(-0.14f,0.25f);
	glVertex2f(-0.1f,0.25f);
	glVertex2f(-0.1f,0.2f);
	glVertex2f(-0.05f,0.2f);
	glVertex2f(1.0f,-0.59f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(-0.05f,-0.59f);
	glVertex2f(-0.05f,0.5f);
	glVertex2f(0.05f,0.5f);
	glVertex2f(0.05f,0.25f);
	glVertex2f(1.0f,-0.59f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(0.3f,-0.59f);
	glVertex2f(0.3f,0.5f);
	glVertex2f(0.25f,0.5f);
	glVertex2f(0.25f,0.53f);
	glVertex2f(0.23f,0.53f);
	glVertex2f(0.23f,0.25f);
	glVertex2f(0.23f,0.4f);
	glVertex2f(0.14f,0.4f);
	glVertex2f(0.14f,0.25f);
	glVertex2f(0.1f,0.25f);
	glVertex2f(0.1f,0.2f);
	glVertex2f(0.05f,0.2f);
	glVertex2f(-1.0f,-0.59f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(0.46f,-0.59f);
	glVertex2f(0.46f,0.5f);
	glVertex2f(0.35f,0.5f);
	glVertex2f(0.35f,0.25f);
	glVertex2f(0.3f,0.25f);
	glVertex2f(-1.0f,-0.59f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(0.67f,-0.59f);
	glVertex2f(0.67f,0.4f);
	glVertex2f(0.61f,0.4f);
	glVertex2f(0.61f,0.3f);
	glVertex2f(0.55f,0.3f);
	glVertex2f(0.55f,0.25f);
	glVertex2f(0.53f,0.25f);
	glVertex2f(0.51f,0.2f);
	glVertex2f(0.46f,0.2f);
	glVertex2f(-1.0f,-0.59f);
	glEnd();
	glBegin(GL_POLYGON);
    	glVertex2f(1.0f,-0.59f);
    	glVertex2f(1.0f,0.2f);
	glVertex2f(0.98f,0.2f);
	glVertex2f(0.98f,0.15f);
	glVertex2f(0.95f,0.18f);
	glVertex2f(0.92f,0.15f);
	glVertex2f(0.92f,0.3f);
	glVertex2f(0.89f,0.3f);
	glVertex2f(0.89f,0.27f);
	glVertex2f(0.86f,0.27f);
	glVertex2f(0.86f,0.25f);
	glVertex2f(0.83f,0.25f);
	glVertex2f(0.83f,0.2f);
	glVertex2f(0.8f,0.23f);
	glVertex2f(0.77f,0.2f);
	glVertex2f(0.74f,0.2f);
	glVertex2f(0.74f,0.35f);
	glVertex2f(0.7f,0.35f);
	glVertex2f(0.7f,0.2f);
	glVertex2f(0.67f,0.2f);
	glVertex2f(-1.0f,-0.59f);
	glEnd();
}
void ufodots()
{
	glBegin(GL_TRIANGLES); //ufo triangle
    glColor3ub(255, 255, 255);
    glVertex2f(0.53f, -0.6f);
    glVertex2f(0.57f, -0.6f);
    glVertex2f(0.555f, -0.51f);
    glVertex2f(0.93f, -0.6f);
    glVertex2f(0.97f, -0.6f);
    glVertex2f(0.955f, -0.51f);
    glVertex2f(0.73f, -0.59f);
    glVertex2f(0.77f, -0.59f);
    glVertex2f(0.755f, -0.51f);
    glEnd();
    glPointSize(sz);
    glBegin(GL_POINTS); //ufo dot
    glColor3ub(255, 255, 0);
    glVertex2f(0.53f, -0.51f);
    glVertex2f(0.63f, -0.515f);
    glVertex2f(0.73f, -0.52f);
    glVertex2f(0.83f, -0.52f);
    glVertex2f(0.93f, -0.515f);
    glVertex2f(1.03f, -0.51f);
    glEnd();
}


void stars() {
    glPointSize(3);
    glBegin(GL_POINTS);


    int random = rand() % 100;
    if (random == 0) {
        // Making the stars 
        if (starc1 == 255 && starc2 == 255 && starc3 == 255) {
            starc1 = 166;
            starc2 = 166;
            starc3 = 166;
        } else {
            starc1 = 255;
            starc2 = 255;
            starc3 = 255;
        }
    }

    glColor3ub(starc1, starc2, starc3);
	glVertex2f(-0.0f,0.79f);
	glVertex2f(-0.0f,0.9f);
	glVertex2f(-0.07f,0.9f);
	glVertex2f(-0.07f,0.7f);
	glVertex2f(-0.03f,0.75f);
	glVertex2f(-0.03f,0.85f);
	glVertex2f(-0.03f,0.95f);
	glVertex2f(-0.13f,0.79f);
	glVertex2f(-0.13f,0.9f);
	glVertex2f(-0.23f,0.75f);
	glVertex2f(-0.23f,0.85f);
	glVertex2f(-0.33f,0.65f);
	glVertex2f(-0.33f,0.785f);
	glVertex2f(-0.33f,0.958f);
	
	glVertex2f(-0.58f,0.45f);
	glVertex2f(-0.58f,0.65f);
	glVertex2f(-0.58f,0.95f);
	glVertex2f(-0.49f,0.51f);
	glVertex2f(-0.63f,0.525f);

	glVertex2f(-0.63f,0.425f);
	glVertex2f(-0.73f,0.725f);
	glVertex2f(-0.84f,0.825f);
	
	glVertex2f(-0.93f,0.485f);
	glVertex2f(-0.93f,0.585f);
	glVertex2f(-0.93f,0.785f);
	glVertex2f(-0.98f,0.885f);
	glVertex2f(-0.98f,0.785f);
	
	glVertex2f(-0.98f,0.900f);
	
	glVertex2f(0.0f,0.69f);
	glVertex2f(0.0f,0.9f);
	glVertex2f(0.07f,0.240f);
	glVertex2f(0.07f,0.300f);
	glVertex2f(0.03f,0.35f);
	glVertex2f(0.03f,0.65f);
	glVertex2f(0.03f,0.45f);
	glVertex2f(0.13f,0.89f);
	glVertex2f(0.13f,0.69f);
	glVertex2f(0.23f,0.37f);
	glVertex2f(0.23f,0.42f);
	glVertex2f(0.33f,0.764f);
	glVertex2f(0.33f,0.672f);
	glVertex2f(0.33f,0.56f);
	glVertex2f(0.43f,0.55f);
	glVertex2f(0.43f,0.75f);
	glVertex2f(0.43f,0.89f);
	glVertex2f(0.55f,0.47f);
	glVertex2f(0.55f,0.67f);
	glVertex2f(0.55f,0.87f);
	glVertex2f(0.5f,0.42f);
	glVertex2f(0.58f,0.45f);
	glVertex2f(0.58f,0.65f);
	glVertex2f(0.58f,0.95f);
	glVertex2f(0.49f,0.51f);
	glVertex2f(0.63f,0.525f);
	glVertex2f(0.63f,0.725f);
	glVertex2f(0.63f,0.925f);
	glVertex2f(0.73f,0.425f);
	glVertex2f(0.73f,0.525f);
	glVertex2f(0.73f,0.725f);
	glVertex2f(0.79f,0.35f);
	glVertex2f(0.81f,0.46f);
	glVertex2f(0.86f,0.56f);
	glVertex2f(0.90f,0.76f);
	
	
	glEnd();
	glutPostRedisplay();
}
void bigufo()
{
glPushMatrix();  //big ufo
    glTranslatef(0, h, 0);
    glScalef(sc, sc, 1);
    glColor3ub(255, 255, 255); 
    glPushMatrix();
    glTranslatef(0.75, -0.8, 0);
    glScalef(0.08, 0.08, 1);
    midPointEllipse(4, 0.5, 1);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.75, -0.81, 0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++) {
        glColor3ub(200, 48, 173);
        float pi = 3.1416 / 2;
        float A = (i * 2 * pi) / 200;
        float r = 0.17;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0, -0.295, 0);
	ufodots();
	glPopMatrix();
    glPopMatrix();
   }
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
    	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLoadIdentity(); // replace the current matrix with the identity 
	glMatrixMode(GL_MODELVIEW); //model coordinates to view coordinates

	glColor3ub(40,40,40); //sky bg
	glBegin(GL_QUADS);
    	glVertex2f(-1.0f,1.0f);
	glVertex2f(-1.0f,-1.0f);
	glVertex2f(1.0f,-1.0f);
	glVertex2f(1.0f,1.0f);
	glEnd();

	glPushMatrix(); //background buildings
	glTranslatef(0,-0.4+ buildingYOffset4, 0); 
	backgroundBuildings();
	glPopMatrix();

	glPushMatrix(); //signal tower
	glTranslatef(0,-0.4+ buildingYOffset1, 0); 
	signaltower();
	glPopMatrix();
	
	glColor3ub(0,0,0); //ground
    	glLineWidth(8);
	glBegin(GL_LINES);
    	glVertex2f(-1.0f,-1.0f);
	glVertex2f(1.0f,-1.0f);
	glEnd();
	stars();

	glPushMatrix(); //dome
    	glTranslatef(-0.95,-1.0+buildingYOffset2,0);
    	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(75,122,150); //left part
            float pi=3.1416/2;
            float A=(i*2*pi)/200;
            float r=0.4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }

	glEnd();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(48,230,240); //right part
            float pi=3.1416/4;
            float A=(i*2*pi)/200;
            float r=0.4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }

	glEnd();
	glPopMatrix();

	
	glPushMatrix();// Floating of the dome line
	glTranslatef(0,-0.41+ buildingYOffset2, 0); //Location of dome line
	domeDesign();
	glPopMatrix();
	
	
	
	glPushMatrix();//office building 
	glTranslatef(0,-0.41+ buildingYOffset3, 0); 
	officeBuilding();
	glPopMatrix();

	
	
	glPushMatrix();//globe tower
	glTranslatef(0,-0.41+ buildingYOffset1, 0); 
	globeTower();
	glPopMatrix();


	glPushMatrix();//residential building
	glTranslatef(0,-0.41+ buildingYOffset2, 0); 
	recttower();
	glPopMatrix();




 
    glPushMatrix(); //smallest ufo
    glTranslatef(-t2, 1.1, 0); //location at time t2
    glScalef(0.4, 0.4, 1);
    glColor3ub(255,255,255); 
    glPushMatrix();
    glTranslatef(0.75, -0.5, 0);
    glScalef(0.08, 0.08, 1);
    midPointEllipse(4, 0.5, 1);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.75, -0.5, 0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++) 
    {
        glColor3ub(255, 255, 0);
        float pi = 3.1416 / 2;
        float A = (i * 2 * pi) / 200;
        float r = 0.17;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.53f, -0.6f);
    glVertex2f(0.57f, -0.6f);
    glVertex2f(0.555f, -0.51f);
    glVertex2f(0.93f, -0.6f);
    glVertex2f(0.97f, -0.6f);
    glVertex2f(0.955f, -0.51f);
    glVertex2f(0.73f, -0.59f);
    glVertex2f(0.77f, -0.59f);
    glVertex2f(0.755f, -0.51f);
    glEnd();
    glPointSize(1);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 0);
    glVertex2f(0.53f, -0.51f);
    glVertex2f(0.63f, -0.515f);
    glVertex2f(0.73f, -0.52f);
    glVertex2f(0.83f, -0.52f);
    glVertex2f(0.93f, -0.515f);
    glVertex2f(1.03f, -0.51f);
    glEnd();
    glPopMatrix();

	glPushMatrix();//globe tower
	glTranslatef(0,0.01+ buildingYOffset1, 0); 
	bigufo();
	glPopMatrix();
	

    glPushMatrix();  //medium ufo
    glTranslatef(t, 1.2, 0);
    glScalef(0.8, 0.8, 1);
    glColor3ub(255, 255, 255); 
    glPushMatrix();
    glTranslatef(0.75, -0.5, 0);
    glScalef(0.08, 0.08, 1);
    midPointEllipse(4, 0.5, 1);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.75, -0.5, 0);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++) 
    {
        glColor3ub(0, 180, 180);
        float pi = 3.1416 / 2;
        float A = (i * 2 * pi) / 200;
        float r = 0.17;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();
    
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.53f, -0.6f);
    glVertex2f(0.57f, -0.6f);
    glVertex2f(0.555f, -0.51f);

    glVertex2f(0.93f, -0.6f);
    glVertex2f(0.97f, -0.6f);
    glVertex2f(0.955f, -0.51f);

    glVertex2f(0.73f, -0.59f);
    glVertex2f(0.77f, -0.59f);
    glVertex2f(0.755f, -0.51f);

    glEnd();

    glPointSize(6);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 0);
    glVertex2f(0.53f, -0.51f);
    glVertex2f(0.63f, -0.515f);
    glVertex2f(0.73f, -0.52f);
    glVertex2f(0.83f, -0.52f);
    glVertex2f(0.93f, -0.515f);
    glVertex2f(1.03f, -0.51f);
    glEnd();
    glPopMatrix();
    

    glFlush(); // ensures that all commands are sent to the GPU and executed in the order they were issued.
}

int fly=-1;
void update(int value)
{
    if(t<-2.5) //kitni der baad wapas aayega
    {
        t+=5.5;
    }
    t=t-2*speed; //kitna tezi se aayega

    if(t2<-1.5)
    {
        t2+=5.5;
    }
    t2=t2-2*speed2; //speed of small ufo
    if(fly==0)
    {
        if(h<=1.0) 
        {
            h+=0.01;
        }
        if(sc>0&&h>=1.0) //sc -> sacling in x direction
        {
            sc = sc-0.01;
            sz = sz - 1; //sz -> scaling in y direction
        }
    }
    else if(fly==1)
    {
	if(sc<=8 && h>=0.2)
	{
		sc=1.0f; sz=1.0f;   
		/*glColor3ub(255, 255, 255); 
		glPushMatrix();
		glTranslatef(0.75, 10.0, 0);
		glScalef(0.08, 0.08, 1);
		midPointEllipse(4, 0.5, 1);
		glPopMatrix();
		glPushMatrix();
		glTranslatef(0.75, 10.0, 0);*/
         
		glBegin(GL_POLYGON);
		for (int i = 0; i < 200; i++) 
		{
			glColor3ub(255,255,0);
			float pi = 3.1416 / 2;
			float A = (i * 2 * pi) / 200;
			float r = 0.17;
			float x = r * cos(A);
			float y = r * sin(A);
			glVertex2f(x, y);
		}
	sc+=0.0111;
	sz-=1;
	}
            
        if(h>=0.01)// going down till this height
        {
            h-=0.01;
        }
    }
    
    glutPostRedisplay();
    glutTimerFunc(20,update,0);
}

void handleMouse(int button, int state, int x, int y) {

    if (button == GLUT_LEFT_BUTTON)
        {
          fly = 1;    	
        }

    if (button == GLUT_RIGHT_BUTTON)
        {fly = 0;   }
    glutPostRedisplay();}

void handleKeypress(unsigned char key, int x, int y) {
        switch (key) {
    case 'w':
        speed += 0.01f;
        break;
    case 'a':
        speed -= 0.01f;
        break;
    case 's':
        speed2 -= 0.01f;
        break;
    case 'd':
        speed2 += 0.01f;
        break;
 
    glutPostRedisplay();
	}}

void floating(int value)
{
    buildingYOffset1 += 0.0010 * fly1; 
    if (buildingYOffset1 > 0.045|| buildingYOffset1 < -0.045) //floating range
    {
        fly1 *= -1; 
    }
    buildingYOffset2 += 0.0010 * fly2; 
    if (buildingYOffset2 > 0.045 || buildingYOffset2 < -0.045)
    {
        fly2 *= -1; 
    }
    buildingYOffset3 += 0.0010 * fly3; 
    if (buildingYOffset3 > 0.055 || buildingYOffset3 < -0.055)
    {
        fly3 *= -1; 
    }
    buildingYOffset4 += 0.0010 * fly4; 
    if (buildingYOffset4 > 0.055 || buildingYOffset4 < -0.055)
    {
        fly4 *= -1; 
    }
    glutPostRedisplay();         
    glutTimerFunc(30, floating, 0);
}
void myInit (void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); //left, right, bottom, and top clipping planes for the orthographic projection volume
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv); //points to main function, takes input from cmd line
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); //single buffer to screen directly, colour basis
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("GALACTIC HEIGHTS");
    glutDisplayFunc(display); 
    update(10);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    myInit ();
    glutTimerFunc(16, floating, 0);
    glutMainLoop();
}