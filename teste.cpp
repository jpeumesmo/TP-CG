//#include "header.h"
#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>
#include<stdio.h>
using namespace std;

int tempo = 0;
int frame = 0;

void inc(){
    tempo++;
}
void quadro(){

    glPushMatrix();
    glTranslatef(0.0f,100.0f,-100.0f);
    glScalef(100.0f,40.0f,2.0f);
    glColor3f(0.5f,0.7f,0.5f);
    glutSolidCube(1.0f);
//    glTranslatef(0.0f,50.0f,-100.0f);

    glPopMatrix();

}


void professor(){
    glColor3f(1.0f,1.0f,0.0f);

    if (frame%2==0 && frame < 60){
        //CORPO
        glPushMatrix();
        glTranslatef(-55.0f,95.0f,-95.0f);
        glScalef(17.5f,25.0f,3.5f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //CABEÇA
        glPushMatrix();
        glTranslatef(-59.0f,110.0f,-108.0f);
        glScalef(5.0f,5.0f,5.0f);
        glColor3f(1.0f,0.5f,0.0f);
        glutSolidSphere(1.0f,10,10);
        glPopMatrix();

        glColor3f(1.0f,1.0f,0.0f);
        //BRAÇOS
        glPushMatrix();
        glTranslatef(-42.0f,110.0f,-88.0f);
        glScalef(5.0f,15.0f,5.0f);
        //glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-62.0f,98.0f,-88.0f);
        glScalef(5.0f,15.0f,5.0f);
        //glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //PERNAS
        glPushMatrix();
        glTranslatef(-48.0f,75.0f,-88.0f);
        glScalef(5.0f,15.0f,5.0f);
        //glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-60.0f,75.0f,-88.0f);
        glScalef(5.0f,15.0f,5.0f);
        //glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }else if (frame%2==1 && frame<60){
        //CORPO
        glPushMatrix();
        glTranslatef(-55.0f,95.0f,-95.0f);
        glScalef(17.5f,25.0f,3.5f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //CABEÇA
        glPushMatrix();
        glTranslatef(-59.0f,110.0f,-108.0f);
        glScalef(5.0f,5.0f,5.0f);
        glColor3f(1.0f,0.5f,0.0f);
        glutSolidSphere(1.0f,10,10);
        glPopMatrix();

        glColor3f(1.0f,1.0f,0.0f);
        //BRAÇOS
        glPushMatrix();
        glTranslatef(-42.0f,110.0f,-88.0f);
        glScalef(5.0f,15.0f,5.0f);
        //glColor3f(0.0f,1.0f,0.0f);
        glRotatef(80.0f,0,1,1);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-62.0f,98.0f,-88.0f);
        glScalef(5.0f,15.0f,5.0f);
        //glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //PERNAS
        glPushMatrix();
        glTranslatef(-48.0f,75.0f,-88.0f);
        glScalef(5.0f,15.0f,5.0f);
        //glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-60.0f,75.0f,-88.0f);
        glScalef(5.0f,15.0f,5.0f);
        //glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }else{
        //CORPO
        glPushMatrix();
        glTranslatef(-55.0f,95.0f,-95.0f);
        glScalef(17.5f,25.0f,3.5f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //CABEÇA
        glPushMatrix();
        glTranslatef(-59.0f,110.0f,-108.0f);
        glScalef(5.0f,5.0f,5.0f);
        glColor3f(1.0f,0.5f,0.0f);
        glutSolidSphere(1.0f,10,10);
        glPopMatrix();

        glColor3f(1.0f,1.0f,0.0f);
        //BRAÇOS
        glPushMatrix();
        glTranslatef(-42.0f,98.0f,-88.0f);
        glScalef(5.0f,15.0f,5.0f);
        //glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-62.0f,98.0f,-88.0f);
        glScalef(5.0f,15.0f,5.0f);
        //glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //PERNAS
        glPushMatrix();
        glTranslatef(-48.0f,75.0f,-88.0f);
        glScalef(5.0f,15.0f,5.0f);
        //glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-60.0f,75.0f,-88.0f);
        glScalef(5.0f,15.0f,5.0f);
        //glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }

}

void aluno(){

    //CORPO
    glPushMatrix();
    glTranslatef(-19.0f,35.0f,-8.0f);
    glScalef(35.0f,50.0f,7.0f);
    glColor3f(0.0f,0.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    //CABEÇA
    glPushMatrix();
    glTranslatef(-19.0f,70.0f,-8.0f);
    glScalef(10.0f,10.0f,10.0f);
    glColor3f(0.0f,1.0f,1.0f);
    glutSolidSphere(1.0f,10,10);
    glPopMatrix();

    //BRAÇOS
    glPushMatrix();
    glTranslatef(-42.0f,40.0f,-8.0f);
    glScalef(10.0f,30.0f,10.0f);
    glColor3f(0.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4.0f,40.0f,-8.0f);
    glScalef(10.0f,30.0f,10.0f);
    glColor3f(0.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();


}

void alunoEsp(){

    if (frame<65){
        //CORPO
        glPushMatrix();
        glTranslatef(-19.0f,35.0f,-8.0f);
        glScalef(35.0f,50.0f,7.0f);
        glColor3f(0.0f,0.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //CABEÇA
        glPushMatrix();
        glTranslatef(-19.0f,70.0f,-8.0f);
        glScalef(10.0f,10.0f,10.0f);
        glColor3f(1.0f,0.0f,0.0f);
        glutSolidSphere(1.0f,10,10);
        glPopMatrix();

        //BRAÇOS
        glPushMatrix();
        glTranslatef(-42.0f,40.0f,-8.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(4.0f,40.0f,-8.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }else if(frame >= 65 && frame <70){
        //CORPO
        glPushMatrix();
        glTranslatef(-19.0f,40.0f,-18.0f);
        glScalef(17.5f,25.0f,3.5f);
        glColor3f(0.0f,0.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //CABEÇA
        glPushMatrix();
        glTranslatef(-19.0f,70.0f,-18.0f);
        glScalef(5.0f,5.0f,5.0f);
        glColor3f(1.0f,0.0f,0.0f);
        glutSolidSphere(1.0f,10,10);
        glPopMatrix();

        //BRAÇOS
        glPushMatrix();
        glTranslatef(-42.0f,40.0f,-18.0f);
        glScalef(5.0f,15.0f,5.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(4.0f,40.0f,-18.0f);
        glScalef(5.0f,15.0f,5.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //PERNAS
        glPushMatrix();
        glTranslatef(0.0f,5.0f,-18.0f);
        glScalef(5.0f,15.0f,5.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(10.0f,5.0f,-18.0f);
        glScalef(5.0f,15.0f,5.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }else if (frame >=70 && frame < 75){
        //CORPO
        glPushMatrix();
        glTranslatef(-19.0f,45.0f,-28.0f);
        glScalef(35.0f,50.0f,7.0f);
        glColor3f(0.0f,0.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //CABEÇA
        glPushMatrix();
        glTranslatef(-19.0f,80.0f,-28.0f);
        glScalef(10.0f,10.0f,10.0f);
        glColor3f(1.0f,0.0f,0.0f);
        glutSolidSphere(1.0f,10,10);
        glPopMatrix();

        //BRAÇOS
        glPushMatrix();
        glTranslatef(-42.0f,50.0f,-28.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(4.0f,50.0f,-28.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //PERNAS
        glPushMatrix();
        glTranslatef(0.0f,15.0f,-28.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(10.0f,15.0f,-28.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }else if (frame >=75 && frame < 80){
        //CORPO
        glPushMatrix();
        glTranslatef(-19.0f,50.0f,-38.0f);
        glScalef(35.0f,50.0f,7.0f);
        glColor3f(0.0f,0.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //CABEÇA
        glPushMatrix();
        glTranslatef(-19.0f,90.0f,-38.0f);
        glScalef(10.0f,10.0f,10.0f);
        glColor3f(1.0f,0.0f,0.0f);
        glutSolidSphere(1.0f,10,10);
        glPopMatrix();

        //BRAÇOS
        glPushMatrix();
        glTranslatef(-42.0f,50.0f,-38.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(4.0f,50.0f,-38.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //PERNAS
        glPushMatrix();
        glTranslatef(0.0f,25.0f,-38.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(10.0f,25.0f,-38.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }else if (frame >=80 && frame < 85){
        //CORPO
        glPushMatrix();
        glTranslatef(-19.0f,55.0f,-48.0f);
        glScalef(35.0f,50.0f,7.0f);
        glColor3f(0.0f,0.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //CABEÇA
        glPushMatrix();
        glTranslatef(-19.0f,100.0f,-48.0f);
        glScalef(10.0f,10.0f,10.0f);
        glColor3f(1.0f,0.0f,0.0f);
        glutSolidSphere(1.0f,10,10);
        glPopMatrix();

        //BRAÇOS
        glPushMatrix();
        glTranslatef(-42.0f,70.0f,-48.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(4.0f,70.0f,-48.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //PERNAS
        glPushMatrix();
        glTranslatef(0.0f,35.0f,-48.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(10.0f,35.0f,-48.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }else if (frame >=85 && frame < 90){
        //CORPO
        glPushMatrix();
        glTranslatef(-19.0f,60.0f,-58.0f);
        glScalef(35.0f,50.0f,7.0f);
        glColor3f(0.0f,0.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //CABEÇA
        glPushMatrix();
        glTranslatef(-19.0f,110.0f,-58.0f);
        glScalef(10.0f,10.0f,10.0f);
        glColor3f(1.0f,0.0f,0.0f);
        glutSolidSphere(1.0f,10,10);
        glPopMatrix();

        //BRAÇOS
        glPushMatrix();
        glTranslatef(-42.0f,90.0f,-58.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(4.0f,90.0f,-58.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //PERNAS
        glPushMatrix();
        glTranslatef(0.0f,55.0f,-58.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(10.0f,55.0f,-58.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }else if (frame >=90 && frame < 95){
        //CORPO
        glPushMatrix();
        glTranslatef(-19.0f,65.0f,-68.0f);
        glScalef(35.0f,50.0f,7.0f);
        glColor3f(0.0f,0.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //CABEÇA
        glPushMatrix();
        glTranslatef(-19.0f,120.0f,-68.0f);
        glScalef(10.0f,10.0f,10.0f);
        glColor3f(1.0f,0.0f,0.0f);
        glutSolidSphere(1.0f,10,10);
        glPopMatrix();

        //BRAÇOS
        glPushMatrix();
        glTranslatef(-42.0f,100.0f,-68.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(4.0f,100.0f,-68.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //PERNAS
        glPushMatrix();
        glTranslatef(0.0f,65.0f,-68.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(10.0f,65.0f,-68.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }else if (frame >=95 && frame < 100){
        //CORPO
        glPushMatrix();
        glTranslatef(-19.0f,70.0f,-78.0f);
        glScalef(35.0f,50.0f,7.0f);
        glColor3f(0.0f,0.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //CABEÇA
        glPushMatrix();
        glTranslatef(-19.0f,130.0f,-78.0f);
        glScalef(10.0f,10.0f,10.0f);
        glColor3f(1.0f,0.0f,0.0f);
        glutSolidSphere(1.0f,10,10);
        glPopMatrix();

        //BRAÇOS
        glPushMatrix();
        glTranslatef(-42.0f,110.0f,-78.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(4.0f,110.0f,-78.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //PERNAS
        glPushMatrix();
        glTranslatef(0.0f,75.0f,-78.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(10.0f,75.0f,-78.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }else if (frame >=100 && frame < 105){
        //CORPO
        glPushMatrix();
        glTranslatef(-19.0f,75.0f,-88.0f);
        glScalef(35.0f,50.0f,7.0f);
        glColor3f(0.0f,0.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //CABEÇA
        glPushMatrix();
        glTranslatef(-19.0f,140.0f,-88.0f);
        glScalef(10.0f,10.0f,10.0f);
        glColor3f(1.0f,0.0f,0.0f);
        glutSolidSphere(1.0f,10,10);
        glPopMatrix();

        //BRAÇOS
        glPushMatrix();
        glTranslatef(-42.0f,120.0f,-88.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(4.0f,120.0f,-88.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //PERNAS
        glPushMatrix();
        glTranslatef(0.0f,95.0f,-88.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(10.0f,95.0f,-88.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }else if (frame >=105 && frame < 110){
        //CORPO
        glPushMatrix();
        glTranslatef(-19.0f,95.0f,-98.0f);
        glScalef(35.0f,50.0f,7.0f);
        glColor3f(0.0f,0.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //CABEÇA
        glPushMatrix();
        glTranslatef(-19.0f,70.0f,-98.0f);
        glScalef(10.0f,10.0f,10.0f);
        glColor3f(1.0f,0.0f,0.0f);
        glutSolidSphere(1.0f,10,10);
        glPopMatrix();

        //BRAÇOS
        glPushMatrix();
        glTranslatef(-42.0f,40.0f,-98.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(4.0f,40.0f,-98.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //PERNAS
        glPushMatrix();
        glTranslatef(0.0f,5.0f,-98.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(10.0f,5.0f,-98.0f);
        glScalef(10.0f,30.0f,10.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }else if (frame%2==0 &&frame >=110){
        //CORPO
        glPushMatrix();
        glTranslatef(-19.0f,95.0f,-95.0f);
        glScalef(17.5f,25.0f,3.5f);
        glColor3f(0.0f,0.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //CABEÇA
        glPushMatrix();
        glTranslatef(-19.0f,110.0f,-108.0f);
        glScalef(5.0f,5.0f,5.0f);
        glColor3f(1.0f,0.0f,0.0f);
        glutSolidSphere(1.0f,10,10);
        glPopMatrix();

        glColor3f(1.0f,1.0f,0.0f);
        //BRAÇOS
        glPushMatrix();
        glTranslatef(-30.0f,110.0f,-88.0f);
        glScalef(5.0f,8.0f,5.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-7.5f,98.0f,-88.0f);
        glScalef(5.0f,8.0f,5.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //PERNAS
        glPushMatrix();
        glTranslatef(-25.0f,75.0f,-88.0f);
        glScalef(5.0f,15.0f,5.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-12.5f,75.0f,-88.0f);
        glScalef(5.0f,15.0f,5.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }else if (frame%2==1 &&frame >=110){
        //CORPO
        glPushMatrix();
        glTranslatef(-19.0f,95.0f,-95.0f);
        glScalef(17.5f,25.0f,3.5f);
        glColor3f(0.0f,0.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //CABEÇA
        glPushMatrix();
        glTranslatef(-19.0f,110.0f,-108.0f);
        glScalef(5.0f,5.0f,5.0f);
        glColor3f(1.0f,0.0f,0.0f);
        glutSolidSphere(1.0f,10,10);
        glPopMatrix();

        glColor3f(1.0f,1.0f,0.0f);
        //BRAÇOS
        glPushMatrix();
        glTranslatef(-30.0f,98.0f,-88.0f);
        glScalef(5.0f,8.0f,5.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-7.5f,98.0f,-88.0f);
        glScalef(5.0f,8.0f,5.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        //PERNAS
        glPushMatrix();
        glTranslatef(-25.0f,75.0f,-88.0f);
        glScalef(5.0f,15.0f,5.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-12.5f,75.0f,-88.0f);
        glScalef(5.0f,15.0f,5.0f);
        glColor3f(0.0f,1.0f,0.0f);
        glutSolidCube(1.0f);
        glPopMatrix();
    }
}

void cadeira(){

    glTranslatef(0.0f,0.0f,-10.0f);

    //ASSENTO
    glPushMatrix();
    glScalef(40.0f,2.0f,40.0f);
    glColor3f(1.0,0.0,1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    //PES
    glRotatef(0.0f,0,0,0);
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

    aluno();
    //ENCOSTO
    glTranslatef(-19.0f,20.0f,0.0f);

    glPushMatrix();
    glScalef(40.0f,20.0f,2.0f);
    glColor3f(1.0,0.0,1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();


}


void cadeiraEsp(){

    glTranslatef(0.0f,0.0f,-10.0f);

    //ASSENTO
    glPushMatrix();
    glScalef(40.0f,2.0f,40.0f);
    glColor3f(1.0,0.0,1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    //PES
    glRotatef(0.0f,0,0,0);
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

    alunoEsp();
    //ENCOSTO
    glTranslatef(-19.0f,20.0f,0.0f);

    glPushMatrix();
    glScalef(40.0f,20.0f,2.0f);
    glColor3f(1.0,0.0,1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();


}

void mesa(){

    //PRIMEIRA FILEIRA

    //PRIMEIRA
    //MESA
    glPushMatrix();
    glTranslatef(0.0f,20.0f,-34.0f);
    glScalef(60.0f,5.0f,40.0f);
    glColor3f(0.0f,0.0f,1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    //PES
    glPushMatrix();
    glTranslatef(28.0f,-10.0f,-56.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(1.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(28.0f,-10.0f,-13.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(0.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-28.0f,-10.0f,-56.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(1.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-28.0f,-10.0f,-13.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(0.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    cadeiraEsp();

    //SEGUNDA
    //MESA

    //MESA
    glTranslatef(0.0f,-35.0f,70.0f);

    glPushMatrix();
    glTranslatef(0.0f,20.0f,-34.0f);
    glScalef(60.0f,5.0f,40.0f);
    glColor3f(0.0f,0.0f,1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    //PES
    glPushMatrix();
    glTranslatef(28.0f,-10.0f,-56.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(1.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(28.0f,-10.0f,-13.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(0.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-28.0f,-10.0f,-56.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(1.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-28.0f,-10.0f,-13.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(0.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    cadeira();




    //SEGUNDA FILEIRA

    //PRIMEIRA
    //MESA
    glTranslatef(-70.0f,-10.0f,-95.0f);

    glPushMatrix();
    glTranslatef(0.0f,20.0f,-34.0f);
    glScalef(60.0f,5.0f,40.0f);
    glColor3f(0.0f,0.0f,1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    //PES
    glPushMatrix();
    glTranslatef(28.0f,-10.0f,-56.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(1.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(28.0f,-10.0f,-13.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(0.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-28.0f,-10.0f,-56.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(1.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-28.0f,-10.0f,-13.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(0.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    cadeira();

    //SEGUNDA
    //MESA

    //MESA
    glTranslatef(0.0f,-35.0f,70.0f);

    glPushMatrix();
    glTranslatef(0.0f,20.0f,-34.0f);
    glScalef(60.0f,5.0f,40.0f);
    glColor3f(0.0f,0.0f,1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    //PES
    glPushMatrix();
    glTranslatef(28.0f,-10.0f,-56.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(1.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(28.0f,-10.0f,-13.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(0.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-28.0f,-10.0f,-56.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(1.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-28.0f,-10.0f,-13.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(0.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    cadeira();



    //TERCEIRA FILEIRA
    //PRIMEIRA
    //MESA
    glTranslatef(140.0f,0.0f,-90.0f);

    glPushMatrix();
    glTranslatef(0.0f,20.0f,-34.0f);
    glScalef(60.0f,5.0f,40.0f);
    glColor3f(0.0f,0.0f,1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    //PES
    glPushMatrix();
    glTranslatef(28.0f,-10.0f,-56.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(1.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(28.0f,-10.0f,-13.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(0.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-28.0f,-10.0f,-56.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(1.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-28.0f,-10.0f,-13.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(0.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    cadeira();

    //SEGUNDA
    //MESA

    //MESA
    glTranslatef(0.0f,-35.0f,70.0f);

    glPushMatrix();
    glTranslatef(0.0f,20.0f,-34.0f);
    glScalef(60.0f,5.0f,40.0f);
    glColor3f(0.0f,0.0f,1.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    //PES
    glPushMatrix();
    glTranslatef(28.0f,-10.0f,-56.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(1.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(28.0f,-10.0f,-13.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(0.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-28.0f,-10.0f,-56.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(1.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-28.0f,-10.0f,-13.0f);
    glScalef(2.0f,60.0f,2.0f);
    glColor3f(0.0f,1.0f,0.0f);
    glutSolidCube(1.0f);
    glPopMatrix();

    cadeira();


}


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

quadro();
professor();

mesa();
//inc();
printf("%d\t%d\n",tempo,frame );
}

void display(){
    for (tempo=0; tempo<10801;tempo++){
        if (tempo%60==0){
            frame = frame + 1;
        }
    glClear (GL_COLOR_BUFFER_BIT);

    /*	ir para matriz Modelview para podermos fazer as transformações	*/
    glMatrixMode(GL_MODELVIEW);
    /*	carregar a identidade para que qualquer transformação em quadros anteriores sejam descartadas	*/
    glLoadIdentity();


    //FUNÇOES DO PROGRAMA
    //glRotatef(90.0f,0,1,0);

    sala();
    glFlush();
}
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
