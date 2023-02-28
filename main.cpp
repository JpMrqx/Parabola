#include <GL/glut.h>
#include <cmath>
#include<iostream>
/*
---------DUPLA DO TRABALHO DE COMPUTAÇÂO GRAFICA-------------     
	Turma:937
	Professora: Catiuscia Albuquerque Benevente Borges
	Nome:Gabriel Alves Varella da Costa	
	Matricula:2020100673
	Nome:João Pedro Marques
	Matricula:2021100844
-------------------------------------------------------------   
*/
	int eixo=1, funcao=1, fun=0;
	float a=1, b=0, c=0;
	float R=0,G=0,B=0;

void Funcao(){
	float x, y;
	glColor3f(R,G,B);
	glLineWidth(1);
	glBegin(GL_LINE_STRIP);
	for(x=-10; x<10; x=x+0.1){
		y=a*x*x+b*x+c;
		glVertex2f(x,y);
	}
	glEnd();
}

void FuncaoNegativa(){
	float x, y;
	glColor3f(R,G,B);
	glLineWidth(1);
	glBegin(GL_LINE_STRIP);
	for(x=-10; x<10; x=x+0.1){
		y=-a*x*x+b*x+c;
		glVertex2f(x,y);
	}
	glEnd();
}

void Eixo(){
glLineWidth(1);
glBegin(GL_LINES);
glColor3f(0, 0, 0);
//eixo x
glVertex2f( -10, 0);
glVertex2f( 10, 0);
//eixo y
glVertex2f( 0, -10);
glVertex2f( 0, 10);
glEnd();
}

void Layout(){
float x, y;
//parabula para baixo
glColor3f(0,0,0);
glLineWidth(1);
glBegin(GL_LINE_STRIP);
	for(x=-1; x<1; x=x+0.01){
		y=-1.2*x*x-0.3;
		glVertex2f(x+13.8,y+4.6);
	}
glEnd();

//parabula para cima
glColor3f(0,0,0);
glLineWidth(1);
glBegin(GL_LINE_STRIP);
	for(x=-1; x<1; x=x+0.01){
		y=1.2*x*x+0.3;
		glVertex2f(x+11.2,y+2.7);
	}
glEnd();
	
//estaço das linhas dos botoes.
glLineWidth(1);
glColor3f(0,0,0);
glBegin(GL_LINES);
glVertex2f(10,7.5);
glVertex2f(15,7.5);
glVertex2f(12.5,5.2);
glVertex2f(12.5,9.8);
glEnd();

//cor botão ciano
glBegin(GL_QUADS);
glColor3f(0,1,1);
glVertex2f(12.5,0);
glVertex2f(12.5,-2.5);
glVertex2f(15,-2.5);
glVertex2f(15,0);

//cor do botão laranja
glColor3f(1,0.5,0.1);
glVertex2f(10,0);
glVertex2f(10,-2.5);
glVertex2f(12.5,-2.5);
glVertex2f(12.5,0);

//cor do botão magenta
glColor3f(1,0,1);
glVertex2f(10,-2.5);
glVertex2f(10,-5);
glVertex2f(12.5,-5);
glVertex2f(12.5,-2.5);

//cor do botão azul
glColor3f(0,0,1);
glVertex2f(10,-5);
glVertex2f(10,-7.5);
glVertex2f(12.5,-7.5);
glVertex2f(12.5,-5);

//cor dos botão amarelo
glColor3f(1,1,0);
glVertex2f(12.5,-2.5);
glVertex2f(12.5,-5);
glVertex2f(15,-5);
glVertex2f(15,-2.5);

//cor do botão verde
glColor3f(0,1,0);
glVertex2f(10,-7.5);
glVertex2f(10,-10);
glVertex2f(12.5,-10);
glVertex2f(12.5,-7.5);

//cor do botão vermelho
glColor3f(1,0,0);
glVertex2f(12.5,-5.0);
glVertex2f(12.5,-7.5);
glVertex2f(15,-7.5);
glVertex2f(15,-5.0);

//cor do botão preto
glColor3f(0.2,0.2,0.2);
glVertex2f(12.5,-7.5);
glVertex2f(12.5,-10);
glVertex2f(15,-10);
glVertex2f(15,-7.5);
glEnd();

//Borda do grafico
glLineWidth(5);
glBegin(GL_LINE_LOOP);
glColor3f(0, 0, 0);
glVertex2f( 10,10);
glVertex2f( -10,10);
glVertex2f( -10,-10);
glVertex2f( 10,-10);
glEnd();

//divisão entre o grafico e o botão
glLineWidth(5);
glBegin(GL_LINE_STRIP);
glColor3f(0, 0, 0);
glVertex2f( 10,10);
glVertex2f( 15,10);
glVertex2f( 15,-10);
glVertex2f( 15,-10);
glEnd();

//setas
glBegin(GL_TRIANGLES);
glColor3f(0,0,0);
glVertex2f(10.50,1.25);
glVertex2f(11.25,2.20);
glVertex2f(12.00,1.25);
  
glVertex2f(13.00,1.25);
glVertex2f(13.75,0.30);
glVertex2f(14.50,1.25);
glEnd();

 //parte de baixo das setas
glBegin(GL_QUADS); 
glColor3f(0,0,0);
glVertex2f(11.0,0.3);
glVertex2f(11.0,1.25);
glVertex2f(11.5,1.25);
glVertex2f(11.5,0.3);
  
glVertex2f(13.5,2.2);
glVertex2f(13.5,1.25);
glVertex2f(14.0,1.25);
glVertex2f(14.0,2.2);
glEnd();
    
//linhas dos botões
glBegin(GL_LINES);
glColor3f(0, 0, 0);
glVertex2f( 10, 5);
glVertex2f( 15, 5);

glVertex2f( 10, 2.5);
glVertex2f( 15, 2.5);

glVertex2f( 10, 0);
glVertex2f( 15, 0);

glVertex2f( 10,-2.5);
glVertex2f( 15,-2.5);

glVertex2f( 10, -5);
glVertex2f( 15, -5);

glVertex2f( 10,-7.5);
glVertex2f( 15,-7.5);

glVertex2f(12.5, 5);
glVertex2f(12.5, -10);

glVertex2f(15, -10);
glVertex2f(10, -10);

glEnd();
}

void Display(){
glClearColor(0.8,0.8,0.8, 0);
glClear(GL_COLOR_BUFFER_BIT );

Layout();
if(eixo==1)
Eixo();

if(funcao==1)
Funcao();

if(fun==1)
FuncaoNegativa();

glFlush();

}
 
void TeclasEspeciais(int key, int x, int y) {

switch(key) {

 

case GLUT_KEY_UP:

//subir a função
c=c+1;

break;

 

case GLUT_KEY_DOWN:

//descer a função
c=c-1;

break;

}

Display();

}

void Teclado(unsigned char key, int x, int y){

 

switch(key) {

case '1' :

//Laranja
R=1; G=0.5; B=0.1;
break; 

case '2':

  //Ciano
  R=0; G=1; B=1;
break; 

 case '3':

//magenta
 R=1;G=0;B=1;
break;

 case '4':
 	
//amarelo
 R=1; G=1; B=0;
break;   

 case '5':

//azul
 R=0; G=0; B=1;
break;   

case '6':
	
//vermelho
  R=1; G=0; B=0;
break;   

case '7':
	
//verde
R=0; G=1; B=0;
break;   

case '8':
	
//preto
 R=0; G=0; B=0;
break;

case 'e':
case 'E':
	
eixo=eixo*(-1);
break;

case 'A':
case 'a':

 a=a*(-1);
break;

}

Display();

}

void Mouse(int button, int state, int x, int y){

	if ((button == GLUT_LEFT_BUTTON) && (state == GLUT_DOWN)){
	//controla o eixo
	if(x>400){
		if(y<100)
			eixo=eixo*(-1);
	}
	//torna a parabola com concavidade para baixo
	if(x>450){
		if(y>100 && y<150){
			funcao=1;
			fun=1;
			funcao=funcao*(-1);
		}
	}
	//torna a parabola com concavidade para baixo
	if(x<450&&x>400){
		if(y>100 && y<150){
			funcao=1;
			fun=1;
			fun=fun*(-1);
		}
	}
	//torna a parabola vermelha
	if(x>450){
		if(y>300 && y<350){
			R=1;G=0;B=0;
		}
	}
	//torna a parabola amarela
	if(x>400&&y<450){
		if(y>250&&y<300){
			R=1;G=1;B=0;
		}
	}
	//torna a parabola ciano
	if(x>450&&y<500){
		if(y>200&&y<250){
			R=0;G=1;B=1;
		}
	}
	//torna a parabula laranja
	if(x<450&&x>400){
		if(y<250&&y>200){
			R=1;G=0.5;B=0.1;
		}
	}
		
	 //Torna a parabula Azul
    if(x<450&&x>400){
		if(y>300&&y<350)
			R = 0, G = 0, B = 1;
	}
	
	//Torna a parabula Verde
    if(x<450&&x>400){
		if(y>350)
			R = 0, G = 1, B = 0;
	}
	//Torna a parabula Preto
    if(x>450){
		if(y>350)
			R = 0, G = 0, B = 0;
	}
	//Torna a parabula Magenta
    if(x<450&&x>400){
		if(y>250&&y<300)
			R = 1, G = 0, B = 1;
	}	
	//Sobe a posição da função
	if(x<450 && x>400){
		if(y>150 && y<200)
			c=c+1;		
	}
	//Desce a posição da função
	if(x>450){
		if(y>150 && y<200)
			c=c-1;
	}
	
}//função principal

Display();

}

int main(int argc, char **argv) {

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
glutInitWindowSize(500,400);
glutInitWindowPosition(450,100);
glutCreateWindow("AV2 – 2022/2 – CG");
glutMouseFunc(Mouse);
glutKeyboardFunc(Teclado);
glutSpecialFunc(TeclasEspeciais);
gluOrtho2D(-10,15,-10,10);
glutDisplayFunc(Display);
glutMainLoop();
return(0);
}
