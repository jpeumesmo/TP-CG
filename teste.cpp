#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>
using namespace std;


void sala(){
  /*GLuint texture;
  //glGen(1, &texture);
  glBlindTexture(GL_TEXTURE_2D, texture);
  glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE,GL_MODULATE);
  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR_MIPMAP_NEAREST);
  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_REPEAT);
  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_WRAPT,GL_REPEAT);
  glTexImage2D(GL_TEXTURE_2D,0,GL_RGB,3840,2400,0,GL_RGB,GL_UNSIGNED_BYTE,//imageDAta
  );

*/
  float size = 300;
  glPushMatrix();
  glScalef(size,size,size);
  glColor3f(1.0f,1.0f,1.0f);

  glutSolidCube(1.0f);
  glPopMatrix();
}


void professor(){

}

void aluno(){

}

void mesa(){

    //MESA
    glPushMatrix();
    glTranslatef(0.0f,0.0f,-34.0f);
    glScalef(60.0f,5.0f,40.0f);
    glColor3f(0.0f,0.0f,1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    //PES
    glPushMatrix();
    glTranslatef(28.0f,-30.0f,-56.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(1.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(28.0f,-30.0f,-13.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(0.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-28.0f,-30.0f,-56.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(1.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-28.0f,-30.0f,-13.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(0.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();
}

void cadeira(){

  //glRotatef(90.0f,0,1,0);
  glTranslatef(0.0f,0.0f,0.0f);

  //ASSENTO
  glPushMatrix();
  glScalef(40.0f,2.0f,40.0f);
  glColor3f(1.0,0.0,1.0f);
  glutSolidCube(1.0f);
  glPopMatrix();

  //PES
//  glRotatef(0.0f,0,0,0);
  glTranslatef(19.0f,-15.0f,-19.0f);

  glPushMatrix();
  glScalef(2.0f,30.0f,2.0f);
  glColor3f(1.0f,0.0f,0.0f);
  glutSolidCube(1.0f);
  glPopMatrix();

  glTranslatef(-38.0f,0.0f,0.0f);

  glPushMatrix();
  glScalef(2.0f,30.0f,2.0f);
  glColor3f(1.0f,0.0f,0.0f);
  glutSolidCube(1.0f);
  glPopMatrix();

  glTranslatef(0.0f,15.0f,38.0f);

  glPushMatrix();
  glScalef(2.0f,60.0f,2.0f);
  glColor3f(1.0f,0.0f,0.0f);
  glutSolidCube(1.0f);
  glPopMatrix();

  glTranslatef(38.0f,0.0f,0.0f);

  glPushMatrix();
  glScalef(2.0f,60.0f,2.0f);
  glColor3f(1.0f,0.0f,0.0f);
  glutSolidCube(1.0f);
  glPopMatrix();

//ENCOSTO
  glTranslatef(-19.0f,20.0f,0.0f);

  glPushMatrix();
  glScalef(40.0f,20.0f,2.0f);
  glColor3f(1.0,0.0,1.0f);
  glutSolidCube(1.0f);
  glPopMatrix();


}

void display(){
  glClear (GL_COLOR_BUFFER_BIT);

  /*	ir para matriz Modelview para podermos fazer as transformações	*/
  glMatrixMode(GL_MODELVIEW);
  /*	carregar a identidade para que qualquer transformação em quadros anteriores sejam descartadas	*/
  glLoadIdentity();


  //FUNÇOES DO PROGRAMA
  sala();
  cadeira();
  mesa();
  aluno();

  glFlush();
}

void init (void){
/*  select clearing (background) color       */
    glClearColor (0.0, 0.0, 0.0, 0.0);

/*  initialize viewing values  */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
/*	janela definida de -5 a 5 em X e Y e de -1 a 1 em Z, centralizada nos pontos médios	*/
//glOrtho(-100.0, 100.0, -100.0, 100.0, -100.0f, 100.0f);
    gluPerspective(90,1,30,500);
    gluLookAt(0,80,200,0,0,0,0,1,0);
}


int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 800);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("TP3");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;   /* ISO C requires main to return int. */
}
