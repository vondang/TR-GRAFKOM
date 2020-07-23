
#include<windows.h>
#include <gl/glut.h>
#include<math.h>

void init(void);
void tampil(void);
void display(void);
void posenggggg(void);
void Lapangan(void);
void lawang(void);
void Penonton(void);
void atap(void);
//void lingkaran(void);
void mouse(int button, int state, int x, int y);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouseMotion(int x, int y);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;
int sudut=0, o=0, p=0, q=0;
int i=0; int j=0;

int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(400, 150);
    gluOrtho2D(-320.,320.,-240.,240.);
    glutCreateWindow("By Anonymous");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(1.5f);
}


void tampil(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //lingkaran();
    Lapangan();
    Penonton();
    lawang();
    atap();
    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();
}
void hilang(void)
{
    glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
    Penonton();
    Lapangan();
    lawang();
    //atap();
    glPushMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

//void lingkaran(int xp, int yp, int r, int n){
//    float a,x,y;
//    glBegin(GL_POLYGON);
//        a=6.28/n;
//        for (int i=0; i<n; i++){
//            x = xp+r * cos(i*a);
//            y = yp+r * sin(i*a);
//            glVertex2d(x,y);
//        }
//    glEnd();
//}

void Lapangan(void){

    //Base
	glBegin(GL_QUADS);
	glColor3f(1,0.5,0);
	glVertex3f(-100,-64,-0.9);
	glVertex3f(-100,64,-0.9);
	glVertex3f(100,64,-0.9);
    glVertex3f(100,-64,-0.9);
    glEnd();


}
void Penonton(void){

int a,j;
int i;

//glScalef(0.8,0.8,0.8);
    for(i=0; i<=150; i++)
    {
        for(a=i; a<=i; a++)
        {
{//-------------------------------------------------------Lupakan yang ini
            //segitiga
//        glBegin(GL_POLYGON);//bottom
//        glColor3f(0,0,i+(i*0.01));
//        glVertex3f(-20+(i*0.08),-20+(i*0.08),i);
//        glVertex3f(20-(i*0.08),-20+(i*0.08),i);
////        glVertex3f(0+(i*0.03),20-(i*0.04),i);
////        glVertex3f(0+(i*0.03),20-(i*0.03),i);
//        glVertex3f(0,20-(i*0.08),i);
////        glVertex3f(0-(i*0.03),20-(i*0.03),i);
////        glVertex3f(0-(i*0.03),20-(i*0.04),i);
//        glEnd();



//dinding
//                glBegin(GL_POLYGON);//bottom
//        glColor3f(0,0.2,0);
//        glVertex3f(-19.8+(i*0.08),-19.8+(i*0.08),i);
//        glVertex3f(-19.8+(i*0.08),-19.8+(i*0.08),5+i);
//        glVertex3f(19.8-(i*0.08),-19.8+(i*0.08),5+i);
//        glVertex3f(19.8-(i*0.08),-19.8+(i*0.08),i);
//        glEnd();
//            glBegin(GL_QUADS);//bottom
//        glColor3f(0,0.2,0);
//        glVertex3f(-19.8+(i*0.08),-19.8+(i*0.08),i);
//        glVertex3f(-19.8+(i*0.08),-19.8+(i*0.08),5+i);
//        glVertex3f(0,19.8-(i*0.08),5+i);
//        glVertex3f(0,19.8-(i*0.08),i);
//        glEnd();
//            glBegin(GL_QUADS);//bottom
//        glColor3f(0,0.2,0);
//        glVertex3f(0,19.8-(i*0.08),i);
//        glVertex3f(0,19.8-(i*0.08),5+i);
//        glVertex3f(19.8-(i*0.08),-19.8+(i*0.08),5+i);
//        glVertex3f(19.8-(i*0.08),-19.8+(i*0.08),i);
//        glEnd();
}
        //Garis
//        glLineWidth(6);
//        glBegin(GL_LINES);//bottom
//        glColor3f(0,1,0.3);
//        glVertex3f(-20+(i*0.09),-15+(i*0.08),i);
//        glVertex3f(-20+(i*0.09),-15+(i*0.08),1+i);
//        glEnd();
//                glBegin(GL_LINES);//bottom
//        glColor3f(0,1,0.3);
//        glVertex3f(20-(i*0.09),-15+(i*0.07),i);
//        glVertex3f(20-(i*0.09),-15+(i*0.07),1+i);
//        glEnd();
//                glBegin(GL_LINES);//bottom
//        glColor3f(0,1,0.3);
//        glVertex3f(0,20-(i*0.07),i);
//        glVertex3f(0,20-(i*0.07),1+i);
//        glEnd();

        }
    }
    glLineWidth(7);
    glBegin(GL_LINES);//m
        glColor3f(1,0,0.3);
        glVertex3f(0,-15,15);
        glVertex3f(0,-5,150);
        glEnd();
        glBegin(GL_LINES);//m
        glColor3f(1,0,0.3);
        glVertex3f(10,5,15);
        glVertex3f(5,2.5,150);
        glEnd();
        glBegin(GL_LINES);//m
        glColor3f(1,0,0.3);
        glVertex3f(-10,5,15);
        glVertex3f(-5,2.5,150);
        glEnd();
        glLineWidth(6);
        glBegin(GL_LINES);//
        glColor3f(0,1,0.3);
        glVertex3f(-20,-15,0);
        glVertex3f(-5,-2.5,150);
        glEnd();
                glBegin(GL_LINES);//
        glColor3f(0,1,0.3);
        glVertex3f(20,-15,0);
        glVertex3f(5,-2.5,150);
        glEnd();
                glBegin(GL_LINES);//
        glColor3f(0,1,0.3);
        glVertex3f(0,20,0);
        glVertex3f(0,5,150);
        glEnd();
        glBegin(GL_LINE_LOOP);//poly
        glColor3b(1,1,0);
        glVertex3f(-5,-2.5,150);
        glVertex3f(-5,2.5,150);
        glVertex3f(0,5,150);
        glVertex3f(5,2.5,150);
        glVertex3f(5,-2.5,150);
        glVertex3f(0,-5,150);
        glEnd();

        for(i=0; i<=135; i++){
            glLineWidth(3);
            glBegin(GL_LINES);//
            glColor3f(1,0.6,0.3);
            glVertex3f(-20+(i*0.111),-15+(i*0.092),1+(i*1.1));
            glVertex3f(0,-15+(i*0.073),15+i);
            glEnd();
            glBegin(GL_LINES);//
            glColor3f(1,0.6,0.3);
            glVertex3f(20-(i*0.111),-15+(i*0.092),1+(i*1.1));
            glVertex3f(0,-15+(i*0.073),15+i);
            glEnd();
            //
            glBegin(GL_LINES);//
            glColor3f(0.4,0.6,0.3);
            glVertex3f(20-(i*0.111),-15+(i*0.092),1+(i*1.1));
            glVertex3f(10-(i*0.037),5-(i*0.018),15+i);
            glEnd();
                        glBegin(GL_LINES);//
            glColor3f(0.4,0.6,0.3);
            glVertex3f(-20+(i*0.111),-15+(i*0.092),1+(i*1.1));
            glVertex3f(-10+(i*0.037),5-(i*0.018),15+i);
            glEnd();
            //
                        glBegin(GL_LINES);//
            glColor3f(0.4,1,0.3);
            glVertex3f(0,20-(i*0.11),1+(i*1.1));
            glVertex3f(10-(i*0.037),5-(i*0.018),15+i);
            glEnd();
            glBegin(GL_LINES);//
            glColor3f(0.4,1,0.3);
            glVertex3f(0,20-(i*0.11),1+(i*1.1));
            glVertex3f(-10+(i*0.037),5-(i*0.018),15+i);
            glEnd();
        }


    {//---------------------------------------------------------Lupakan yang ini
    //lingkaran
//    for(i=0; i<=100; i++){
//        for(a=i; a<=i; a++){
//            glBegin(GL_POLYGON);//bottom
//            glColor3f(1,0.2,0);
//            glVertex3f(-3-(i*0.01),-7-(i*0.01),150+(i*0.01));
//            glVertex3f(-5.5-(i*0.01),-2,205+(i*0.01));
//            glVertex3f(-3-(i*0.01), 3+(i*0.01),150+(i*0.01));
//            glVertex3f(0, 5.5+(i*0.01),150+(i*0.01));
//            glVertex3f(3+(i*0.01), 3+(i*0.01),150+(i*0.01));
//            glVertex3f(5.5+(i*0.01), -2,205+(i*0.01));
//            glVertex3f(3+(i*0.01), -7-(i*0.01),150+(i*0.01));
//            glVertex3f(0,-9.5-(i*0.01),150+(i*0.01));
//            glEnd();
//
//
//        }
//    }
//    for(i=0; i<=50; i++){
//        for(a=i; a<=i; a++){
//        glBegin(GL_POLYGON);//bottom
//            glColor3f(0,0.8,1);
//            glVertex3f(-5,-9,220+i);
//            glVertex3f(-7.5,-2,220+i);
//            glVertex3f(-5, 5,220+i);
//            glVertex3f(0, 7.5,220+i);
//            glVertex3f(5, 5,220+i);
//            glVertex3f(7.5, -2,220+i);
//            glVertex3f(5, -9,220+i);
//            glVertex3f(0,-11.5,220+i);
//            glEnd();
//        }
//    }

    }

}
void atap(void){
    const double PI = 3.141592653589793;
    int j, i, radius, jumlah_titik, x_tengah, y_tengah, z_tengah;

    //Linkaran lvl 1
    for(j=0; j<=20; j++){
        glColor3f(1.0, 0, 1.0);
    glBegin(GL_LINE_LOOP);
    radius=300;
    jumlah_titik=120;
    x_tengah=0;
    y_tengah=0;
    z_tengah=1500;

    for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+(radius*(j*0.2))*cos(sudut);
        float y=y_tengah+(radius*(j*0.2))*sin(sudut);
        float z=z_tengah;
        glVertex3f(x/100,y/100,z/(10-(j*0.02)));
        }
    glEnd();
    }
    //
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    radius=1200;
    jumlah_titik=120;
    x_tengah=0;
    y_tengah=0;
    z_tengah=1500;

    for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+radius*cos(sudut);
        float y=y_tengah+radius*sin(sudut);
        float z=z_tengah;
        glVertex3f(x/100,y/100,z/9.28);
        }
    glEnd();

    //cincin bawahnya 1
    glLineWidth(150);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINE_LOOP);
    radius=600;
    jumlah_titik=120;
    x_tengah=0;
    y_tengah=0;
    z_tengah=1500;

    for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+radius*cos(sudut);
        float y=y_tengah+radius*sin(sudut);
        float z=z_tengah;
        glVertex3f(x/100,y/100,z/9.9);
        }
    glEnd();
    //cinncin bawahnya 2
    glLineWidth(60);
     glColor3f(1.0, 1.0, 0.8);
    glBegin(GL_LINE_LOOP);
    radius=600;
    jumlah_titik=120;
    x_tengah=0;
    y_tengah=0;
    z_tengah=1500;

    for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+radius*cos(sudut);
        float y=y_tengah+radius*sin(sudut);
        float z=z_tengah;
        glVertex3f(x/100,y/100,z/9.9899);
        }
    glEnd();

    //Linkaran cincin lvl 1
    for(j=0; j<=15; j++){
        glColor3f(1.0, 0, 0.8);
    glBegin(GL_LINE_LOOP);
    radius=1200;
    jumlah_titik=120;
    x_tengah=0;
    y_tengah=0;
    z_tengah=1500;

    for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+radius/*(j*0.2))*/*cos(sudut);
        float y=y_tengah+radius/*(j*0.2))*/*sin(sudut);
        float z=z_tengah;
        glVertex3f(x/100,y/100,z/(9.6-(j*0.02)));
        }
    glEnd();
    }

    //Linkaran cincin lvl paling atas
    for(j=0; j<=20; j++){
        glColor3f(1.0, 0, 0.8);
    glBegin(GL_LINE_LOOP);
    radius=400;
    jumlah_titik=120;
    x_tengah=0;
    y_tengah=0;
    z_tengah=1800;

    for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+radius/*(j*0.2))*/*cos(sudut);
        float y=y_tengah+radius/*(j*0.2))*/*sin(sudut);
        float z=z_tengah;
        glVertex3f(x/100,y/100,z/(10-(j*0.02)));
        }
    glEnd();
    }

    for(j=0; j<=15; j++){
        glColor3f(1.0, 0, 0.8);
    glBegin(GL_LINE_LOOP);
    radius=150;
    jumlah_titik=120;
    x_tengah=0;
    y_tengah=0;
    z_tengah=2100;

    for (i=0;i<=360;i++){
        float sudut=i*(2*PI/jumlah_titik);
        float x=x_tengah+radius/*(j*0.2))*/*cos(sudut);
        float y=y_tengah+radius/*(j*0.2))*/*sin(sudut);
        float z=z_tengah;
        glVertex3f(x/100,y/100,z/(10-(j*0.02)));
        }
    glEnd();
    }

    glFlush();

}
void lawang(void){

GLUquadricObj *quadratic;
quadratic = gluNewQuadric();
glColor3f(0,0,0.96);
//glRotatef(0.0f, 0.0f,0.0f, 0.0f);
gluCylinder(quadratic,5.f,5.f,155.0f,32,32);
glColor3f(0.8,0.7,0.96);
gluCylinder(quadratic,3.f,3.f,185.0f,32,32);
glColor3f(0.18,0.27,0.16);
gluCylinder(quadratic,1.f,1.f,230.0f,32,32);
//glColor3f(0.96,0,0);
//glRotatef(090.0f, 0.0f,0.0f, 1.0f);
//gluCylinder(quadratic,20.f,10.f,100.0f,10,100);

}


void display(void)
{
    if (is_depth)
        tampil();
    else
        hilang();
}

void idle()
{
	if (!mouseDown)
	{
		xrot += 0.3f;
		yrot += 0.4f;
	}
	glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{


{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		mouseDown = true;
		xdiff = x - yrot;
		ydiff = -y + xrot;
	}
	else
	mouseDown = false;
}
tampil();
}


void keyboard(unsigned char key, int x, int y)
{

    switch(key)
    {
        case 'w':
        case 'W':
            glTranslated(0,0,3);
            break;
        case 'd':
        case 'D':
            glTranslated(3,0,0);
            break;
        case 's':
        case 'S':
            glTranslated(0,0,-3);
            break;
        case 'a':
        case 'A':
            glTranslated(-3,0,0);
            break;
        case '7':
            glTranslated(0,3,0);
            break;
        case '9':
            glTranslated(0,-3,0);
            break;
        case '2':
            glRotated(2,1,0,0);
            break;
        case '8':
            glRotated(-2,1,0,0);
            break;
        case '6':
            glRotated(2,0,1,0);
            break;
        case '4':
            glRotated(-2,1,0,0);
            break;
        case '1':
            glRotated(2,0,0,1);
            break;
        case '3':
            glRotated(-2,0,0,1);
            break;
        case '5':
            if (is_depth)
            {
                is_depth = 0;
                tampil();
            }
            else
            {
                is_depth = 1;
                hilang();
            }
    }
    display();


}
void posenggggg()
{
    glLoadIdentity();
    gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    glRotatef(xrot, 1.0f,0.0f, 0.0f);
    glRotatef(yrot, 0.0f, 1.0f, 0.0f);
}

void mouseMotion(int x, int y)
{
    posenggggg();
    if (mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;
        glutPostRedisplay();

    }
}

void ukuran(int lebar, int tinggi)
{
    if(tinggi == 0) tinggi = 1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
    glTranslatef(-3.5, -15.0, -100.0);
    glMatrixMode(GL_MODELVIEW);
}

