#include <GL/glut.h>
void myinit(void){
glClearColor(0.1,0.3,0.2,0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D (0.0,670.0,0.0,580.0);}
void circleMidPoint()
{int xCenter = 300 ;
int yCenter = 300;
int radius = 269;
int x = 0;
int y = radius;
int p = 1 - radius;
while(x<y)  {
x++;
if(p < 0)
p += 2*x + 1;
else { y--;
p += 2 * (x - y) + 1;}
glBegin(GL_POINTS);
glColor3f(0.0,0.5,0.5);
glVertex2i(xCenter + x, yCenter + y);
glColor3f(1.0,0.0,0.0);
glVertex2i(xCenter - x, yCenter + y);
glColor3f(1.0,1.0,0.0);
glVertex2i(xCenter + x, yCenter - y);
glColor3f(1.0,0.5,1.0);
glVertex2i(xCenter - x, yCenter - y);
glColor3f(1.0,0.0,1.0);
glVertex2i(xCenter + y, yCenter + x);
glColor3f(0.0,1.0,0.0);
glVertex2i(xCenter - y, yCenter + x);
glColor3f(0.0,0.0,1.0);
glVertex2i(xCenter + y, yCenter - x);
glColor3f(1.0,0.0,0.5);
glVertex2i(xCenter - y, yCenter - x);
glEnd();}
glBegin(GL_POINTS);
glColor3f(0.0,0.0,0.0);
glVertex2i(xCenter,yCenter);
glEnd();
glBegin(GL_LINES);
glColor3f(0.7,0.3,0.6);
//1
glVertex2i(90,300);
glVertex2i(90,400);
//8
glVertex2i(120,300);
glVertex2i(120,400);
glVertex2i(150,300);
glVertex2i(150,400);
glVertex2i(120,400);
glVertex2i(150,400);
glVertex2i(120,300);
glVertex2i(150,300);
glVertex2i(120,350);
glVertex2i(150,350);
//C
glVertex2i(160,300);
glVertex2i(160,400);
glVertex2i(160,300);
glVertex2i(190,300);
glVertex2i(160,400);
glVertex2i(190,400);
//S
glVertex2i(220,400);
glVertex2i(250,400);
glVertex2i(220,400);
glVertex2i(220,350);
glVertex2i(220,350);
glVertex2i(250,350);
glVertex2i(250,350);
glVertex2i(250,300);
glVertex2i(220,300);
glVertex2i(250,300);
//3
glVertex2i(300,300);
glVertex2i(300,350);

glVertex2i(270,400);
glVertex2i(270,350);

glVertex2i(300,400);
glVertex2i(270,400);
glVertex2i(300,300);
glVertex2i(270,300);
glVertex2i(300,350);
glVertex2i(270,350);
//8
glVertex2i(330,300);
glVertex2i(330,400);
glVertex2i(360,300);
glVertex2i(360,400);
glVertex2i(330,350);
glVertex2i(360,350);
glVertex2i(330,400);
glVertex2i(360,400);
glVertex2i(330,300);
glVertex2i(360,300);
glEnd();

}
void display() {
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0,0.0,0.0);
glPointSize(10.0);
circleMidPoint();
glFlush();}
int main(int argc,char** argv)  {
glutInit(&argc,argv);
glutInitWindowSize(600,500);
glutInitWindowPosition(20,20);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutCreateWindow(" 18CS58  ");
myinit();
glutDisplayFunc(display);
glutMainLoop();}
