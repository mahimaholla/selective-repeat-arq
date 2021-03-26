#include<GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<GL/gl.h>
#include<string.h>


#define safesending			2
#define packetcrashing      3
#define timeout				4

#define		one				6
#define		mainmenu		16
#define     sendop			17
#define dx 15
#define dy 25

int window;
int flag=0;

char E[10];


GLfloat x[25];
GLfloat y[20];
GLint i,j,k;
int w,h,a,b,c,e,d,l;




void *currentfont;


void setFont(void *font)
{
	currentfont=font;
}



void drawstring(float x,float y,float z,char *string) //to display text messages
{
	    char *c;
	glRasterPos3f(x,y,z);

	for(c=string;*c!='\0';c++)
	{	glColor3f(0.0,0.0,0.0);
		glutBitmapCharacter(currentfont,*c);
	}
}



void delay()
{  j=1000;
	while(j!=0)
	{	j--;
		i=1000;
		while(i!=0)
		{	i--;
		}
	}
}






void draw(int x1,int x2,int y1,int y2) // TO DRAW  MENU box 
{

                glBegin(GL_QUADS);
                glColor3f(1,1,0);
                glVertex2i(x1,y1);
                glVertex2i(x1,y2);
                glVertex2i(x2,y2);
                glVertex2i(x2,y1);
	glEnd();
	glFlush();
}


/*
void drawop(int d,int e) // TO DRAW POLYGON FOR selection a,b,c,detcMENUS
{

    glBegin(GL_POLYGON);

	         glColor3f(0.2f,0.2f,0.7f);
	 	glVertex2i(d+57.5,320-e);

	        glColor3f(0.0f,0.0f,0.0f);
		glVertex2i(d+147.5,320-e);

		glColor3f(0.0f,0.0f,0.0f);
		glVertex2i(d+147.5,300-e);

		glColor3f(0.2f,0.2f,0.7f);
		glVertex2i(d+57.5,300-e);

	glEnd();
	glFlush();
}

*/




void text(void)											// to draw the text in menu screen
{	glClear(GL_COLOR_BUFFER_BIT);
	

	setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(0.4932,0.9996,0.0);
	drawstring(165.0,407.0,1.0,"  Selective Repeat A R Q  ");

draw(155,299,343,365);
	glColor3f(0,0,0);
	drawstring(165.0,350.0,1.0,"Press S: SAFE  SENDING");



draw(155,299,288,310);
	glColor3f(0,0,0);
	drawstring(165.0,295.0,1.0,"Press P: PACKET  CRASHING");
      

draw(155,299,233,255);
	glColor3f(0,0,0);
	drawstring(165.0,240.0,1.0,"Press T: TIME  OUT");



draw(155,299,178,200);
	glColor3f(0,0,0);
	drawstring(165.0,185.0,1.0,"Press E: EXIT");



glColor3f(1.0,1.0,1.0);
	drawstring(320.0,117.0,1.0,"SUBMITTED  BY");

	glColor3f(0.0,1.0,1.0);
	drawstring(320.0,97.0,1.0, "MAHIMA M                        4VP17CS028");

	glColor3f(0.0,1.0,1.0);
	drawstring(320.0,77.0,1.0,  "NIKHIL RAJ	                      4VP17CS033");
        
           glColor3f(0.0,1.0,1.0);
	drawstring(320.0,57.0,1.0,  "NITHEESH KUMAR           4VP17CS035");






	glFlush();







}




void timer0()
{
	glColor3f(1.4,1.9,0.78);
    glBegin(GL_LINE_LOOP);         // timer for frame 0
		glVertex2f(100,120);
	    glVertex2f(100,130);
		glVertex2f(225,130);
		glVertex2f(225,120);
    glEnd();
	glFlush();
}
void timer1()
{

	glColor3f(1,1,1);
    glBegin(GL_LINE_LOOP);         // timer for frame 1
		glVertex2f(100,100);
	    glVertex2f(100,110);
		glVertex2f(225,110);
		glVertex2f(225,100);
    glEnd();
	glFlush();


}

void timer2()
{
	glColor3f(1,1,1);
    glBegin(GL_LINE_LOOP);         // timer for frame 2
		glVertex2f(100,80);
	    glVertex2f(100,90);
		glVertex2f(225,90);
		glVertex2f(225,80);
    glEnd();
	glFlush();
}

void timer3()
{
	glColor3f(1,1,1);
    glBegin(GL_LINE_LOOP);         // timer for frame 3
		glVertex2f(360,120);
	    glVertex2f(360,130);
		glVertex2f(485,130);
		glVertex2f(485,120);
    glEnd();
	glFlush();
}

void timer4()
{
	glColor3f(1.4,1.9,0.78);
    glBegin(GL_LINE_LOOP);         // timer for frame 4
		glVertex2f(360,100);
	    glVertex2f(360,110);
		glVertex2f(485,110);
		glVertex2f(485,100);
    glEnd();
	glFlush();
}




void timer(float k,float l,float m,float n)
{
glColor3f(1,1,0);
    glBegin(GL_POLYGON);         // to call timer functions
		glVertex2f(l,m);
	    glVertex2f(l,n);
		glVertex2f(l+k,n);
		glVertex2f(l+k,m);
    glEnd();
	glFlush();

}







void move1()  //MOVEMENT OF FRAME 0  (in safe sending)
{

	float i,j,temp=0.3,k=0;

    glColor3f(1.0,0.8,0.4);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(30.0,125.0,1.0," Timer 0");

	timer0();


	setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0f,1.0f,0.0f);
    drawstring(58.5,300.0,1.0,"FRAME 0 sending ...........");

   for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(55,265-j);glVertex2i(55,280-j);glVertex2i(60,280-j);glVertex2i(60,265-j);
    glEnd();
    glFlush();


	 glColor3f(0,0,0);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(55,265-j);glVertex2i(55,280-j);glVertex2i(60,280-j);glVertex2i(60,265-j);
    glEnd();
    glFlush();
	 }


	 for(j=0;j<60;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(55,238-j);glVertex2i(55,253-j);glVertex2i(60,253-j);glVertex2i(60,238-j);
    glEnd();
    glFlush();

	k+=0.05;
	timer(k,102.5,122,128);


	 glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(55,238-j);glVertex2i(55,253-j);glVertex2i(60,253-j);glVertex2i(60,238-j);
    glEnd();
    glFlush();
	 }


 for(i=0;i<231;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(60+i,178);glVertex2i(60+i,183);glVertex2i(75+i,183);glVertex2i(75+i,178);
    glEnd();
    glFlush();


	k+=0.05;
	timer(k,102.5,122,128);


   glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(60+i,178);glVertex2i(60+i,183);glVertex2i(75+i,183);glVertex2i(75+i,178);
    glEnd();
    glFlush();
 }




for(j=0;j<60;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(305,178+j);glVertex2i(305,193+j);glVertex2i(310,193+j);glVertex2i(310,178+j);
    glEnd();
    glFlush();

	k+=0.05;
	timer(k,102.5,122,128);

	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(305,178+j);glVertex2i(305,193+j);glVertex2i(310,193+j);glVertex2i(310,178+j);
    glEnd();
      glFlush();

	}

	setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(0.0f,0.0f,0.0f);
    drawstring(58.5,300.0,1.0,"FRAME 0 sending ...........");

    glColor3f(1.0,1.0,0.0);
    drawstring(58.5,300.0,1.0,"FRAME 0 sent");

   // delay();

	setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(0.0,0.0,0.0);
    drawstring(58.5,300.0,1.0,"FRAME 0 sent");

}


void move2()   // SIMULTANEOUS  MOVEMENT OF ACK 1 AND FRAME 1(in safe sending)
{


	float i,j,temp=0.3,k=0,l=0;

	setFont(GLUT_BITMAP_HELVETICA_18);

	glColor3f(1.0,0.8,0.4);
	drawstring(30.0,105.0,1.0," Timer 1");


	setFont(GLUT_BITMAP_HELVETICA_12);

    glColor3f(1.0f,1.0f,0.0f);
    drawstring(58.5,300.0,1.0,"FRAME 1 sending ...........");

    glColor3f(1.0f,1.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"........... sending ACK1 ");

	timer1();





     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(320,265-j);glVertex2i(320,275-j);glVertex2i(325,275-j);glVertex2i(325,265-j);
    glEnd();
    glFlush();

	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,265-j);glVertex2i(70,280-j);glVertex2i(75,280-j);glVertex2i(75,265-j);
    glEnd();
    glFlush();

	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,265-j);glVertex2i(70,280-j);glVertex2i(75,280-j);glVertex2i(75,265-j);
    glEnd();
    glFlush();


	 glColor3f(0,0,0);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(320,265-j);glVertex2i(320,275-j);glVertex2i(325,275-j);glVertex2i(325,265-j);
    glEnd();
    glFlush();
	 }



	 for(j=0;j<60;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(320,228-j);glVertex2i(320,238-j);glVertex2i(325,238-j);glVertex2i(325,228-j);
    glEnd();
    glFlush();

	 glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,238-j);glVertex2i(70,253-j);glVertex2i(75,253-j);glVertex2i(75,238-j);
    glEnd();
    glFlush();


    k+=0.05;
	timer(k,156.5,122,128);
	timer(k,102.5,102,108);



	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(320,228-j);glVertex2i(320,238-j);glVertex2i(325,238-j);glVertex2i(325,228-j);
    glEnd();
    glFlush();

	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,238-j);glVertex2i(70,253-j);glVertex2i(75,253-j);glVertex2i(75,238-j);
    glEnd();
    glFlush();


	 }

for(i=0;i<235;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(310-i,168);glVertex2i(310-i,173);glVertex2i(320-i,173);glVertex2i(320-i,168);
    glEnd();
    glFlush();


	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70+i,178);glVertex2i(70+i,183);glVertex2i(85+i,183);glVertex2i(85+i,178);
    glEnd();
    glFlush();


	k+=0.05;
	timer(k,156.5,122,128);
	timer(k,102.5,102,108);



    glColor3f(0,0,0);
	glBegin(GL_QUADS);
	glVertex2i(310-i,168);glVertex2i(310-i,173);glVertex2i(320-i,173);glVertex2i(320-i,168);
    glEnd();
    glFlush();

	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70+i,178);glVertex2i(70+i,183);glVertex2i(85+i,183);glVertex2i(85+i,178);
    glEnd();
    glFlush();



 }



for(j=0;j<63;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(70,168+j);glVertex2i(70,178+j);glVertex2i(75,178+j);glVertex2i(75,168+j);
    glEnd();
    glFlush();

	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(320,178+j);glVertex2i(320,193+j);glVertex2i(325,193+j);glVertex2i(325,178+j);
    glEnd();
    glFlush();

	k+=0.05;
	timer(k,156.5,122,128);
	timer(k,102.5,102,108);


	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,168+j);glVertex2i(70,178+j);glVertex2i(75,178+j);glVertex2i(75,168+j);
    glEnd();
      glFlush();

	  	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(320,178+j);glVertex2i(320,193+j);glVertex2i(325,193+j);glVertex2i(325,178+j);
    glEnd();
      glFlush();


	}


	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(0.0f,0.0f,0.0f);
    drawstring(58.5,300.0,1.0,"FRAME 1 sending ...........");

    glColor3f(0.0f,0.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"........... sending ACK1 ");

	glColor3f(1.0,1.0,0.0);
    drawstring(58.5,300.0,1.0,"FRAME 1 sent ");

    glColor3f(1.0f,1.0f,0.0f);
 drawstring(370.0,300.0,1.0,"ACK1 Recieved ");

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10,115);
	glVertex2f(10,135);
	glVertex2f(230,135);
	glVertex2f(230,115);
	glEnd();
	glFlush();

	setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(1.0,0.8,0.4);
	drawstring(80.0,125.0,1.0," Frame 0 sent successfully");


 //  delay();

	setFont(GLUT_BITMAP_HELVETICA_12);

    glColor3f(0.0,0.0,0.0);
    drawstring(58.5,300.0,1.0,"FRAME 1 sent ");

    glColor3f(0.0f,0.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"ACK1 Recieved ");




}
void move3()  // MOVEMENT OF FRAME 2 ( FRAME 2 lost in packet crashing)
{

float i,j,temp=0.3;
float k=0;
timer2();

    glColor3f(1.0,0.8,0.4);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(30.0,85.0,1.0,"Timer 2");

	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(1.0f,1.0f,0.0f);
    drawstring(58.5,300.0,1.0,"FRAME 2 sending ...........");



for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {
		glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,265-j);glVertex2i(85,280-j);glVertex2i(90,280-j);glVertex2i(90,265-j);
    glEnd();
    glFlush();


	k+=0.05;
	timer(k,102.5,82,88);

	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,265-j);glVertex2i(85,280-j);glVertex2i(90,280-j);glVertex2i(90,265-j);
    glEnd();
    glFlush();

	}

 for(j=0;j<60;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,238-j);glVertex2i(85,253-j);glVertex2i(90,253-j);glVertex2i(90,238-j);
    glEnd();
    glFlush();

	k+=0.05;
	timer(k,102.5,82,88);

	 glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,238-j);glVertex2i(85,253-j);glVertex2i(90,253-j);glVertex2i(90,238-j);
    glEnd();
    glFlush();
	 }

for(i=0;i<167;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85+i,178);glVertex2i(85+i,183);glVertex2i(100+i,183);glVertex2i(100+i,178);
    glEnd();
    glFlush();

	k+=0.05;
	timer(k,102.5,82,88);


  glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85+i,178);glVertex2i(85+i,183);glVertex2i(100+i,183);glVertex2i(100+i,178);
    glEnd();
    glFlush();



}

	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(0.0f,0.0f,0.0f);
    drawstring(58.5,300.0,1.0,"FRAME 2 sending ...........");


	glColor3f(1.0f,1.0f,0.0f);
 	drawstring(185.0,165.0,1.0,"FRAME 2 lost");


	//glColor3f(1.0f,1.0f,0.0f);
    //drawstring(160.0,265.0,1.0,"FRAME 2 lost");

//	delay();

	glColor3f(0.0f,0.0f,0.0f);
 	drawstring(185.0,265.0,1.0,"FRAME 2 lost");



}





void move4() // RESENDING OF FRAME 2 (in packet crashing)
{


	float i,j,temp=0.3;
	 timer2();
	 timer4();
	 timer3();
	 float k=0;
	 float p=0;

	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(1.0f,1.0f,1.0f);
    drawstring(58.5,300.0,1.0,"FRAME 2 Resending ...........");

     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,265-j);glVertex2i(85,280-j);glVertex2i(90,280-j);glVertex2i(90,265-j);
    glEnd();
    glFlush();

		k+=0.03;
	timer(k,102.5,82,88);

	 glColor3f(0,0,0);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(85,265-j);glVertex2i(85,280-j);glVertex2i(90,280-j);glVertex2i(90,265-j);
    glEnd();
    glFlush();
	 }

	 for(j=0;j<60;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,238-j);glVertex2i(85,253-j);glVertex2i(90,253-j);glVertex2i(90,238-j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,102.5,82,88);
	timer(k,396.5,102,108);
	p+=0.01;
	timer(p,430.5,122,128);


	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,238-j);glVertex2i(85,253-j);glVertex2i(90,253-j);glVertex2i(90,238-j);
    glEnd();
    glFlush();
	 }

for(i=0;i<231;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85+i,178);glVertex2i(85+i,183);glVertex2i(100+i,183);glVertex2i(100+i,178);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,102.5,82,88);
	timer(k,396.5,102,108);

	p+=0.01;

	timer(p,430.5,122,128);


   glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85+i,178);glVertex2i(85+i,183);glVertex2i(100+i,183);glVertex2i(100+i,178);
    glEnd();
    glFlush();




}



for(j=0;j<60;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(335,178+j);glVertex2i(335,193+j);glVertex2i(340,193+j);glVertex2i(340,178+j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,102.5,82,88);
	timer(k,396.5,102,108);

	p+=0.01;

	timer(p,430.5,122,128);


     glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(335,178+j);glVertex2i(335,193+j);glVertex2i(340,193+j);glVertex2i(340,178+j);
    glEnd();
      glFlush();

	}

	setFont(GLUT_BITMAP_HELVETICA_12);

   glColor3f(0.0f,0.0f,0.0f);
    drawstring(58.5,300.0,1.0,"FRAME 2 Resending ...........");


    glColor3f(1.0f,1.0f,1.0f);
    drawstring(58.5,300.0,1.0,"FRAME 2 sent");


//	delay();

	glColor3f(0.0f,0.0f,0.0f);
    drawstring(58.5,300.0,1.0,"FRAME 2 sent");

}



void move5()  // sending of frame 3
{


	float i,j,temp=0.3;
	timer2();
	timer3();

    float k=0,l=0;

    glColor3f(1.0,0.8,0.4);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(320.0,125.0,1.0,"Timer 3");

	setFont(GLUT_BITMAP_HELVETICA_12);

    glColor3f(1.0f,1.0f,0.0f);
    drawstring(58.5,300.0,1.0,"FRAME 3 sending ...........");



     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {
	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(100,265-j);glVertex2i(100,280-j);glVertex2i(105,280-j);glVertex2i(105,265-j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,136.5,82,88);


	glColor3f(0,0,0);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(100,265-j);glVertex2i(100,280-j);glVertex2i(105,280-j);glVertex2i(105,265-j);
    glEnd();
    glFlush();

	 }




	 for(j=0;j<50;j=j+temp) //movement of data packet from top to down
	 {
	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(100,238-j);glVertex2i(100,253-j);glVertex2i(105,253-j);glVertex2i(105,238-j);
    glEnd();
    glFlush();

		k+=0.03;
	timer(k,136.5,82,88);
    timer(k,362.5,122,128);


	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(100,238-j);glVertex2i(100,253-j);glVertex2i(105,253-j);glVertex2i(105,238-j);
    glEnd();
    glFlush();


	 }

for(i=0;i<235;i=i+temp) //movement of data packet sidewise
	 {

	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(100+i,183);glVertex2i(100+i,188);glVertex2i(115+i,188);glVertex2i(115+i,183);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,136.5,82,88);
	timer(k,362.5,122,128);

		glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(100+i,183);glVertex2i(100+i,188);glVertex2i(115+i,188);glVertex2i(115+i,183);
    glEnd();
    glFlush();

 }



for(j=0;j<55;j=j+temp) //to move the  packet from bottom to top
{

	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(350,183+j);glVertex2i(350,198+j);glVertex2i(355,198+j);glVertex2i(355,183+j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,136.5,82,88);
	timer(k,362.5,122,128);


    glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(350,183+j);glVertex2i(350,198+j);glVertex2i(355,198+j);glVertex2i(355,183+j);
    glEnd();
    glFlush();

	}


	setFont(GLUT_BITMAP_HELVETICA_12);

    glColor3f(0.0f,0.0f,0.0f);
    drawstring(58.5,300.0,1.0,"FRAME 3 sending ...........");

	glColor3f(0.0f,0.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"........... sending NAK2 ");

	glColor3f(1.0,1.0,0.0);
    drawstring(58.5,300.0,1.0,"FRAME 3 sent ");


//	delay();


	glColor3f(0.0,0.0,0.0);
    drawstring(58.5,300.0,1.0,"FRAME 3 sent ");


}


void move6()  // RESENDING OF FRAME 1(in packet crashing)
{

float i,j,temp=0.3;

glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);
	glVertex2f(100,120);
	glVertex2f(225,120);
	glVertex2f(225,130);
	glVertex2f(100,130);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(100,120);
	glVertex2f(225,120);
	glVertex2f(225,130);
	glVertex2f(100,130);
	glEnd();
	glFlush();

for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,265-j);glVertex2i(70,280-j);glVertex2i(75,280-j);glVertex2i(75,265-j);
    glEnd();
    glFlush();

	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,265-j);glVertex2i(70,280-j);glVertex2i(75,280-j);glVertex2i(75,265-j);
    glEnd();
    glFlush();

	}

 for(j=0;j<60;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,238-j);glVertex2i(70,253-j);glVertex2i(75,253-j);glVertex2i(75,238-j);
    glEnd();
    glFlush();

	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(1.0f,1.0f,0.0f);
    drawstring(58.5,300.0,1.0,"FRAME 1 sending .....");


		 glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,238-j);glVertex2i(70,253-j);glVertex2i(75,253-j);glVertex2i(75,238-j);
    glEnd();
    glFlush();
	 }

for(i=0;i<231;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70+i,178);glVertex2i(70+i,183);glVertex2i(85+i,183);glVertex2i(85+i,178);
    glEnd();
    glFlush();



	glColor3f(1.0f,1.0f,0.0f);
 	drawstring(58.5,300.0,1.0,"FRAME 1 resending ...................");


  glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70+i,178);glVertex2i(70+i,183);glVertex2i(85+i,183);glVertex2i(85+i,178);
    glEnd();
    glFlush();
 }


for(j=0;j<60;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(320,178+j);glVertex2i(320,193+j);glVertex2i(325,193+j);glVertex2i(325,178+j);
    glEnd();
    glFlush();


	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(1.0f,1.0f,0.0f);
 	drawstring(58.5,300.0,1.0,"FRAME 0 sending ...............................");


	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(320,178+j);glVertex2i(320,193+j);glVertex2i(325,193+j);glVertex2i(325,178+j);
    glEnd();
      glFlush();

	}

	glColor3f(1.0,1.0,1.0);
	drawstring(70,268.0,0.0,"1");
	glColor3f(1.0,1.0,1.0);
	drawstring(85,268.0,0.0,"2");
	glColor3f(1.0,1.0,1.0);
	drawstring(100,268.0,0.0,"3");
	glColor3f(1.0,1.0,1.0);
	drawstring(320,268.0,0.0,"1");
	glColor3f(1.0,1.0,1.0);
	drawstring(365,268.0,0.0,"4");




}


void move7()  // MOVEMENT OF ACK 4 (in packet crashing)
{


	float i,j,temp=0.3;


     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(365,265-j);glVertex2i(365,275-j);glVertex2i(370,275-j);glVertex2i(370,265-j);
    glEnd();
    glFlush();


	 	 glColor3f(0,0,0);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(365,265-j);glVertex2i(365,275-j);glVertex2i(370,275-j);glVertex2i(370,265-j);
    glEnd();
    glFlush();

	 }


	 for(j=0;j<50;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(365,228-j);glVertex2i(365,238-j);glVertex2i(370,238-j);glVertex2i(370,228-j);
    glEnd();
    glFlush();


	 	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(365,228-j);glVertex2i(365,238-j);glVertex2i(370,238-j);glVertex2i(370,228-j);
    glEnd();
    glFlush();

	 }

for(i=0;i<235;i=i+temp) //movement of data packet sidewise
	 {
		glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(355-i,178);glVertex2i(355-i,183);glVertex2i(365-i,183);glVertex2i(365-i,178);
    glEnd();
    glFlush();



	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(1.0f,1.0f,0.0f);
 	drawstring(58.5,300.0,1.0,"FRAME 1 resending ...................");




   glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(355-i,178);glVertex2i(355-i,183);glVertex2i(365-i,183);glVertex2i(365-i,178);
    glEnd();
    glFlush();


 }



for(j=0;j<55;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(115,178+j);glVertex2i(115,188+j);glVertex2i(120,188+j);glVertex2i(120,178+j);
    glEnd();
    glFlush();


	glColor3f(1.0f,1.0f,0.0f);
 	drawstring(58.5,300.0,1.0,"FRAME 0 sending ...............................");




	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(115,178+j);glVertex2i(115,188+j);glVertex2i(120,188+j);glVertex2i(120,178+j);
    glEnd();
      glFlush();


	}
	glColor3f(1.0,1.0,1.0);
	drawstring(365,268.0,0.0,"4");


}



void move8()  // MOVEMENT OF ACK 4 (in packet crashing)
{


	float i,j,temp=0.3;
	float k=0;
	timer1();

	setFont(GLUT_BITMAP_HELVETICA_12);

    glColor3f(1.0f,1.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"........... sending ACK2 ");


     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(335,265-j);glVertex2i(335,275-j);glVertex2i(340,275-j);glVertex2i(340,265-j);
    glEnd();
    glFlush();


	 	 glColor3f(0,0,0);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(335,265-j);glVertex2i(335,275-j);glVertex2i(340,275-j);glVertex2i(340,265-j);
    glEnd();
    glFlush();

	 }


	 for(j=0;j<50;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(335,228-j);glVertex2i(335,238-j);glVertex2i(340,238-j);glVertex2i(340,228-j);
    glEnd();
    glFlush();

	k+=0.05;
	timer(k,136.5,102,108);

	 	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(335,228-j);glVertex2i(335,238-j);glVertex2i(340,238-j);glVertex2i(340,228-j);
    glEnd();
    glFlush();

	 }

for(i=0;i<235;i=i+temp) //movement of data packet sidewise
	 {
		glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(325-i,178);glVertex2i(325-i,183);glVertex2i(335-i,183);glVertex2i(335-i,178);
    glEnd();
    glFlush();

	k+=0.05;
	timer(k,136.5,102,108);


   glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(325-i,178);glVertex2i(325-i,183);glVertex2i(335-i,183);glVertex2i(335-i,178);
    glEnd();
    glFlush();


 }



for(j=0;j<55;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(85,178+j);glVertex2i(85,188+j);glVertex2i(90,188+j);glVertex2i(90,178+j);
    glEnd();
    glFlush();

	k+=0.05;
	timer(k,136.5,102,108);



	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,178+j);glVertex2i(85,188+j);glVertex2i(90,188+j);glVertex2i(90,178+j);
    glEnd();
      glFlush();
}


	glColor3f(0.0f,0.0f,0.0f);
 drawstring(370.0,300.0,1.0,"........... sending ACK2 ");

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(10,95);
	glVertex2f(10,115);
	glVertex2f(230,115);
	glVertex2f(230,95);
	glEnd();
	glFlush();

	setFont(GLUT_BITMAP_HELVETICA_18);

    glColor3f(1.0,0.8,0.4);
	drawstring(80.0,105.0,1.0," Frame 1 sent successfully");

//	delay();

}



void move9()   // MOVEMENT OF ACK 1 (in safe sending)
{


	float i,j,temp=0.5;

	setFont(GLUT_BITMAP_HELVETICA_12);

	 glColor3f(0.0f,0.0f,0.0f);
 	drawstring(58.5,300.0,1.0,"      FRAME 0 sent");


    glColor3f(0.0f,1.0f,0.0f);
 	drawstring(370.0,300.0,1.0," .... sending ACK1 ");




     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(320,265-j);glVertex2i(320,275-j);glVertex2i(325,275-j);glVertex2i(325,265-j);
    glEnd();
    glFlush();


	 glColor3f(0,0,0);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(320,265-j);glVertex2i(320,275-j);glVertex2i(325,275-j);glVertex2i(325,265-j);
    glEnd();
    glFlush();
	 }


	 for(j=0;j<60;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(320,228-j);glVertex2i(320,238-j);glVertex2i(325,238-j);glVertex2i(325,228-j);
    glEnd();
    glFlush();

	setFont(GLUT_BITMAP_HELVETICA_12);

	 glColor3f(0.0f,0.0f,0.0f);
 	drawstring(370.0,300.0,1.0," .... sending ACK1 ");

	 glColor3f(0.0f,1.0f,0.0f);
 	drawstring(370.0,300.0,1.0,".............. sending ACK1 ");

	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(320,228-j);glVertex2i(320,238-j);glVertex2i(325,238-j);glVertex2i(325,228-j);
    glEnd();
    glFlush();

	 }

for(i=0;i<235;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(310-i,168);glVertex2i(310-i,173);glVertex2i(320-i,173);glVertex2i(320-i,168);
    glEnd();
    glFlush();

		setFont(GLUT_BITMAP_HELVETICA_12);

		 glColor3f(0.0f,0.0f,0.0f);
 	drawstring(370.0,300.0,1.0,".............. sending ACK1 ");



	  glColor3f(0.0f,1.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"........................... sending ACK1 ");



   glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(310-i,168);glVertex2i(310-i,173);glVertex2i(320-i,173);glVertex2i(320-i,168);
    glEnd();
    glFlush();

 }


for(j=0;j<63;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(70,168+j);glVertex2i(70,178+j);glVertex2i(75,178+j);glVertex2i(75,168+j);
    glEnd();
    glFlush();



	setFont(GLUT_BITMAP_HELVETICA_12);

		 glColor3f(0.0f,0.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"........................... sending ACK1 ");



	  glColor3f(0.0f,1.0f,0.0f);
 	drawstring(58.5,300.0,1.0,"..................................... sending ACK1 ");



	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,168+j);glVertex2i(70,178+j);glVertex2i(75,178+j);glVertex2i(75,168+j);
    glEnd();
      glFlush();


	}




	setFont(GLUT_BITMAP_HELVETICA_12);

	  glColor3f(0.0f,0.0f,0.0f);
 	drawstring(58.5,300.0,1.0,"..................................... sending ACK1 ");


     glColor3f(0.0f,1.0f,0.0f);
 	drawstring(58.5,300.0,1.0,"   ACK1 received");



	setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0,1.0,1.0);
	drawstring(55,268.0,0.0,"0");

	glColor3f(1.0,1.0,1.0);
	drawstring(320,268.0,0.0,"1");

//	delay();

     glColor3f(0.0f,0.0f,0.0f);
 	drawstring(58.5,300.0,1.0,"   ACK1 received");


}


void move10()  // SIMULTANEOUS MOVEMENT  OF NAK 2 AS FRAME 2 IS LOST AND  FRAME 4  (in packet crashing)
{


	float i,j,temp=0.3;

	timer2();
	timer3();
	timer4();
	float k=0;


    glColor3f(1.0,0.8,0.4);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(320.0,105.0,1.0,"Timer 4");

	setFont(GLUT_BITMAP_HELVETICA_12);

    glColor3f(1.0f,1.0f,0.0f);
    drawstring(58.5,300.0,1.0,"FRAME 4 sending ...........");

	glColor3f(1.0f,1.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"........... sending NAK2 ");


     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(1,1,0);
		 glBegin(GL_QUADS);
	  glVertex2i(335,265-j);glVertex2i(335,275-j);glVertex2i(340,275-j);glVertex2i(340,265-j);
    glEnd();
    glFlush();

	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(115,265-j);glVertex2i(115,280-j);glVertex2i(120,280-j);glVertex2i(120,265-j);
    glEnd();
    glFlush();

	 	 glColor3f(0,0,0);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(335,265-j);glVertex2i(335,275-j);glVertex2i(340,275-j);glVertex2i(340,265-j);
    glEnd();
    glFlush();


	glColor3f(0,0,0);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(115,265-j);glVertex2i(115,280-j);glVertex2i(120,280-j);glVertex2i(120,265-j);
    glEnd();
    glFlush();

	 }




	 for(j=0;j<50;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(1,1,0);
		 glBegin(GL_QUADS);
	  glVertex2i(335,228-j);glVertex2i(335,238-j);glVertex2i(340,238-j);glVertex2i(340,228-j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,170.5,82,88);
	timer(k,396.5,122,128);
	timer(k,362.5,102,108);


	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(115,238-j);glVertex2i(115,253-j);glVertex2i(120,253-j);glVertex2i(120,238-j);
    glEnd();
    glFlush();


	 glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(335,228-j);glVertex2i(335,238-j);glVertex2i(340,238-j);glVertex2i(340,228-j);
    glEnd();
    glFlush();

	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(115,238-j);glVertex2i(115,253-j);glVertex2i(120,253-j);glVertex2i(120,238-j);
    glEnd();
    glFlush();


	 }

for(i=0;i<235;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(1,1,0);
		 glBegin(GL_QUADS);
	  glVertex2i(325-i,178);glVertex2i(325-i,183);glVertex2i(335-i,183);glVertex2i(335-i,178);
    glEnd();
    glFlush();

k+=0.03;
	timer(k,170.5,82,88);
	timer(k,396.5,122,128);
	timer(k,362.5,102,108);

	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(115+i,183);glVertex2i(115+i,188);glVertex2i(130+i,188);glVertex2i(130+i,183);
    glEnd();
    glFlush();


   glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(325-i,178);glVertex2i(325-i,183);glVertex2i(335-i,183);glVertex2i(335-i,178);
    glEnd();
    glFlush();


		glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(115+i,183);glVertex2i(115+i,188);glVertex2i(130+i,188);glVertex2i(130+i,183);
    glEnd();
    glFlush();

 }



for(j=0;j<55;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(1,1,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,178+j);glVertex2i(85,188+j);glVertex2i(90,188+j);glVertex2i(90,178+j);
    glEnd();
    glFlush();

	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(365,183+j);glVertex2i(365,198+j);glVertex2i(370,198+j);glVertex2i(370,183+j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,170.5,82,88);
    timer(k,396.5,122,128);
	timer(k,362.5,102,108);


	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,178+j);glVertex2i(85,188+j);glVertex2i(90,188+j);glVertex2i(90,178+j);
    glEnd();
      glFlush();

	  glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(365,183+j);glVertex2i(365,198+j);glVertex2i(370,198+j);glVertex2i(370,183+j);
    glEnd();
    glFlush();

	}

	setFont(GLUT_BITMAP_HELVETICA_12);

    glColor3f(0.0f,0.0f,0.0f);
    drawstring(58.5,300.0,1.0,"FRAME 4 sending ...........");

	glColor3f(0.0f,0.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"........... sending NAK2 ");


	glColor3f(1.0,1.0,0.0);
    drawstring(58.5,300.0,1.0,"FRAME 4 sent ");

    glColor3f(1.0f,1.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"NAK2 Recieved ");

//	delay();


	glColor3f(0.0,0.0,0.0);
    drawstring(58.5,300.0,1.0,"FRAME 4 sent ");

    glColor3f(0.0f,0.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"NAK2 Recieved ");




}

void move11()  // MOVEMENT OF ACK 4 (in packet crashing)
{


	float i,j,temp=0.3;
	timer2();
	timer3();
	timer4();
	float k=0;
	float p=0;

	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(1.0f,1.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"........... sending ACK4 ");



     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(380,265-j);glVertex2i(380,275-j);glVertex2i(385,275-j);glVertex2i(385,265-j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,136.5,82,88);

	 	 glColor3f(0,0,0);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(380,265-j);glVertex2i(380,275-j);glVertex2i(385,275-j);glVertex2i(385,265-j);
    glEnd();
    glFlush();

	 }


	 for(j=0;j<50;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(380,228-j);glVertex2i(380,238-j);glVertex2i(385,238-j);glVertex2i(385,228-j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,136.5,82,88);
	timer(k,431.5,102,108);
	p+=0.01;
	timer(p,442,122,128);


	 	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(380,228-j);glVertex2i(380,238-j);glVertex2i(385,238-j);glVertex2i(385,228-j);
    glEnd();
    glFlush();

	 }

for(i=0;i<235;i=i+temp) //movement of data packet sidewise
	 {
		glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(370-i,178);glVertex2i(370-i,183);glVertex2i(380-i,183);glVertex2i(380-i,178);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,136.5,82,88);
	timer(k,431.5,102,108);

	p+=0.01;
	timer(p,442,122,128);


   glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(370-i,178);glVertex2i(370-i,183);glVertex2i(380-i,183);glVertex2i(380-i,178);
    glEnd();
    glFlush();


 }



for(j=0;j<55;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(130,178+j);glVertex2i(130,188+j);glVertex2i(135,188+j);glVertex2i(135,178+j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,136.5,82,88);
	timer(k,431.5,102,108);

	p+=0.01;
	timer(p,442,122,128);



	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(130,178+j);glVertex2i(130,188+j);glVertex2i(135,188+j);glVertex2i(135,178+j);
    glEnd();
      glFlush();


	}
	glColor3f(1.0,1.0,1.0);
	drawstring(365,268.0,0.0,"4");



	glColor3f(0.0f,0.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"........... sending ACK4 ");



    glColor3f(1.0f,1.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"NAK4 Recieved ");

//	delay();


	    glColor3f(0.0f,0.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"NAK4 Recieved ");




}




void move12()
{


	float i,j,temp=0.3;
	float k=0;
	timer1();

	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(1.0f,1.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"........... sending ACK2 ");


     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(335,265-j);glVertex2i(335,275-j);glVertex2i(340,275-j);glVertex2i(340,265-j);
    glEnd();
    glFlush();


	 	 glColor3f(0,0,0);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(335,265-j);glVertex2i(335,275-j);glVertex2i(340,275-j);glVertex2i(340,265-j);
    glEnd();
    glFlush();

	 }


	 for(j=0;j<50;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(335,228-j);glVertex2i(335,238-j);glVertex2i(340,238-j);glVertex2i(340,228-j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,136.5,102,108);

	 	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(335,228-j);glVertex2i(335,238-j);glVertex2i(340,238-j);glVertex2i(340,228-j);
    glEnd();
    glFlush();

	 }

for(i=0;i<65;i=i+temp) //movement of data packet sidewise
	 {
		glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(325-i,178);glVertex2i(325-i,183);glVertex2i(335-i,183);glVertex2i(335-i,178);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,136.5,102,108);



   glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(325-i,178);glVertex2i(325-i,183);glVertex2i(335-i,183);glVertex2i(335-i,178);
    glEnd();
    glFlush();


 }

    glColor3f(0.0f,0.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"........... sending ACK2 ");

}





void move13()   // SIMULTANEOUS  MOVEMENT OF ACK 1 AND FRAME 1(in safe sending)
{


	float i,j,temp=0.5;
	float k=0;
	timer1();
	timer2();

	setFont(GLUT_BITMAP_HELVETICA_18);

		glColor3f(1.0,0.8,0.4);
	drawstring(30.0,105.0,1.0," Timer 1");

	setFont(GLUT_BITMAP_HELVETICA_12);

    glColor3f(1.0f,1.0f,0.0f);
    drawstring(58.5,300.0,1.0,"FRAME 1 Resending ...........");

    glColor3f(1.0f,1.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"........... sending ACK3 ");



     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(350,265-j);glVertex2i(350,275-j);glVertex2i(355,275-j);glVertex2i(355,265-j);
    glEnd();
    glFlush();

	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,265-j);glVertex2i(70,280-j);glVertex2i(75,280-j);glVertex2i(75,265-j);
    glEnd();
    glFlush();

	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,265-j);glVertex2i(70,280-j);glVertex2i(75,280-j);glVertex2i(75,265-j);
    glEnd();
    glFlush();


	 glColor3f(0,0,0);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(350,265-j);glVertex2i(350,275-j);glVertex2i(355,275-j);glVertex2i(355,265-j);
    glEnd();
    glFlush();
	 }


	 for(j=0;j<60;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(350,228-j);glVertex2i(350,238-j);glVertex2i(355,238-j);glVertex2i(355,228-j);
    glEnd();
    glFlush();

	 glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,238-j);glVertex2i(70,253-j);glVertex2i(75,253-j);glVertex2i(75,238-j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,102.5,102,108);
	timer(k,148.5,82,88);



		glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(350,228-j);glVertex2i(350,238-j);glVertex2i(355,238-j);glVertex2i(355,228-j);
    glEnd();
    glFlush();

	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70,238-j);glVertex2i(70,253-j);glVertex2i(75,253-j);glVertex2i(75,238-j);
    glEnd();
    glFlush();

	 }

for(i=0;i<235;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(340-i,168);glVertex2i(340-i,173);glVertex2i(350-i,173);glVertex2i(350-i,168);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,102.5,102,108);
	timer(k,148.5,82,88);



	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70+i,178);glVertex2i(70+i,183);glVertex2i(85+i,183);glVertex2i(85+i,178);
    glEnd();
    glFlush();


   glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(340-i,168);glVertex2i(340-i,173);glVertex2i(350-i,173);glVertex2i(350-i,168);
    glEnd();
    glFlush();

	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(70+i,178);glVertex2i(70+i,183);glVertex2i(85+i,183);glVertex2i(85+i,178);
    glEnd();
    glFlush();

 }



for(j=0;j<63;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(0,1,1);
		 glBegin(GL_QUADS);
	  glVertex2i(100,168+j);glVertex2i(100,178+j);glVertex2i(105,178+j);glVertex2i(105,168+j);
    glEnd();
    glFlush();

	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(320,178+j);glVertex2i(320,193+j);glVertex2i(325,193+j);glVertex2i(325,178+j);
    glEnd();
    glFlush();

	k+=0.03;
	timer(k,102.5,102,108);
	timer(k,148.5,82,88);



	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(100,168+j);glVertex2i(100,178+j);glVertex2i(105,178+j);glVertex2i(105,168+j);
    glEnd();
      glFlush();

	  	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(320,178+j);glVertex2i(320,193+j);glVertex2i(325,193+j);glVertex2i(325,178+j);
    glEnd();
      glFlush();


	}


	setFont(GLUT_BITMAP_HELVETICA_12);

	 glColor3f(0.0f,0.0f,0.0f);
    drawstring(58.5,300.0,1.0,"FRAME 1 Resending ...........");
    glColor3f(0.0f,0.0f,0.0f);
 	drawstring(370.0,300.0,1.0,"........... sending ACK3 ");


glColor3f(1.2,0.6,1.6);
drawstring(315.0,248.0,1.0,"DUPLICATE " );//Frame 1");

glColor3f(1.2,0.6,1.6);
drawstring(310.0,238.0,1.0,"FRAME 1 Discarded ");
glFlush();



}


void move14() // RESENDING OF FRAME 2 (in packet crashing)
{


	float i,j,temp=0.3;
	 timer2();
	 float k=0;
	 float q=0;

	glColor3f(1.0,0.8,0.4);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(30.0,85.0,1.0,"Timer 2");

	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(1.0f,1.0f,1.0f);
    drawstring(58.5,300.0,1.0,"FRAME 2 Sending ...........");


     for(j=0;j<4;j=j+temp) //movement of data packet within the frame
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,265-j);glVertex2i(85,280-j);glVertex2i(90,280-j);glVertex2i(90,265-j);
    glEnd();
    glFlush();

		k+=0.07;
	timer(k,145.5,102,108);
	q+=0.04;
	timer(q,102.5,82,88);



	 glColor3f(0,0,0);   // to remove traces create movement of frame in black
		 glBegin(GL_QUADS);
	  glVertex2i(85,265-j);glVertex2i(85,280-j);glVertex2i(90,280-j);glVertex2i(90,265-j);
    glEnd();
    glFlush();
	 }

	 for(j=0;j<60;j=j+temp) //movement of data packet from top to down
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,238-j);glVertex2i(85,253-j);glVertex2i(90,253-j);glVertex2i(90,238-j);
    glEnd();
    glFlush();

	k+=0.07;
	timer(k,145.5,102,108);
	q+=0.04;
	timer(q,102.5,82,88);


		glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85,238-j);glVertex2i(85,253-j);glVertex2i(90,253-j);glVertex2i(90,238-j);
    glEnd();
    glFlush();
	 }

for(i=0;i<231;i=i+temp) //movement of data packet sidewise
	 {   glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85+i,178);glVertex2i(85+i,183);glVertex2i(100+i,183);glVertex2i(100+i,178);
    glEnd();
    glFlush();

	k+=0.07;
	timer(k,145.5,102,108);
	q+=0.04;
	timer(q,102.5,82,88);

	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(1.0f,1.0f,1.0f);
	drawstring(58.5,300.0,1.0,"FRAME 2 Sending ...........");

 //	drawstring(160.0,370.0,1.0,"FRAME 2 sending...................");



   glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(85+i,178);glVertex2i(85+i,183);glVertex2i(100+i,183);glVertex2i(100+i,178);
    glEnd();
    glFlush();
 }



for(j=0;j<60;j=j+temp) //to move the  packet from bottom to top
{
	glColor3f(1,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(335,178+j);glVertex2i(335,193+j);glVertex2i(340,193+j);glVertex2i(340,178+j);
    glEnd();
    glFlush();

	k+=0.05;
	timer(k,145.5,102,108);
	q+=0.04;
	timer(q,102.5,82,88);

   setFont(GLUT_BITMAP_HELVETICA_12);

	/////glColor3f(1.0f,1.0f,0.0f);
 	/////drawstring(160.0,365.0,1.0,"FRAME 0 sending ...............................");


	glColor3f(0,0,0);
		 glBegin(GL_QUADS);
	  glVertex2i(335,178+j);glVertex2i(335,193+j);glVertex2i(340,193+j);glVertex2i(340,178+j);
    glEnd();
      glFlush();

	}

    glColor3f(0.0f,0.0f,0.0f);
    drawstring(58.5,300.0,1.0,"FRAME 2 Sending ...........");

//	delay();

	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(0,98);
	glVertex2f(0,115);
	glVertex2f(228,115);
	glVertex2f(228,98);
	glEnd();
	glFlush();

	//delay();


	setFont(GLUT_BITMAP_HELVETICA_18);

    glColor3f(1.0,0.8,0.4);
	drawstring(80.0,105.0,1.0," TIME OUT !!");
	glFlush();

	delay();
	delay();

	setFont(GLUT_BITMAP_HELVETICA_18);

    glColor3f(0,0,0);
	drawstring(80.0,105.0,1.0," TIME OUT !!");
	glFlush();



	glColor3f(1.0,0.8,0.4);
	drawstring(228.0,105.0,1.0," TIMER 1 restarted");
	glFlush();



}








void slide(GLint maxx,GLint maxy,GLfloat x0,GLfloat y0) // TO DRAW WINDOWS (Rectangular Mesh) arrary type 
{
	for(i=0;i<maxx;i++)
		x[i]=x0+i*dx;

	for(j=0;j<maxy;j++)
		y[j]=y0+j*dy;

	for(i=0;i<maxx-1;i++)
		for(j=0;j<maxy-1;j++)
		{

	       glBegin(GL_LINE_LOOP);
		   glVertex2f(x[i],y[j]);
		   glVertex2f(x[i],y[j+1]);
		   glVertex2f(x[i+1],y[j+1]);
		   glVertex2f(x[i+1],y[j]);
		   glEnd();
		   glFlush();


		}

}














void computer(int a)									// to draw the sender and receiver computers
{


	
glColor3f(0.3,0.0,0.0);
	glBegin(GL_QUADS);
	glVertex2f(a+90,450-10-20);
	glVertex2f(a+93,453-10-20);
	glVertex2f(a+93,402-10-20);
	glVertex2f(a+90,400-10-20);
	glEnd();
	glFlush();
	
glColor3f(0.7,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(a+90,450-10-20);
	glVertex2f(a+93,453-10-20);
	glVertex2f(a+93,402-10-20);
	glVertex2f(a+90,400-10-20);
	glEnd();
	glFlush();




glColor3f(0.3,0.0,0.0);
	glBegin(GL_QUADS);
	glVertex2f(a+25,450-10-20);
	glVertex2f(a+28,453-10-20);
	glVertex2f(a+93,453-10-20);
	glVertex2f(a+90,450-10-20);
	glEnd();
	glFlush();
	
glColor3f(0.7,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(a+25,450-10-20);
	glVertex2f(a+28,453-10-20);
	glVertex2f(a+93,453-10-20);
	glVertex2f(a+90,450-10-20);
	glEnd();
	glFlush();





	glColor3f(0.7,0.0,0.0);//monitor
	glBegin(GL_LINE_LOOP);
	glVertex2f(a+25,400-10-20);
	glVertex2f(a+25,450-10-20);
	glVertex2f(a+90,450-10-20);
	glVertex2f(a+90,400-10-20);
	glEnd();
	glFlush();


	glColor3f(0,0,0.09);// INNER monitor
	glBegin(GL_QUADS);
	glVertex2f(a+27,402-10-20);
	glVertex2f(a+27,448-10-20);
	glVertex2f(a+88,448-10-20);
	glVertex2f(a+88,402-10-20);
	glEnd();
	glFlush();

	glColor3f(0.0,1,0.0);// INNER monitor
	glBegin(GL_LINE_LOOP);
	glVertex2f(a+27,402-10-20);
	glVertex2f(a+27,448-10-20);
	glVertex2f(a+88,448-10-20);
	glVertex2f(a+88,402-10-20);
	glEnd();
	glFlush();

glBegin(GL_LINE_STRIP);		//middle screen design
	glColor3f(0.7,0.7,0.7);
	glVertex2i(a+88,448-10-20);
	glVertex2i(a+58,426-10-20);
	glVertex2i(a+64,426-10-20);
	glVertex2i(a+27,402-10-20);	
glEnd();




//STAND
glColor3f(0.5,0.5,0.5);
	glBegin(GL_QUADS);
	glVertex2f(a+64,390-10-20);
	glVertex2f(a+64,400-10-20);
	glVertex2f(a+52,400-10-20);
	glVertex2f(a+52,390-10-20);
	glEnd();
	glFlush();
glColor3f(0.7,0,0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(a+64,390-10-20);
	glVertex2f(a+64,400-10-20);
	glVertex2f(a+52,400-10-20);
	glVertex2f(a+52,390-10-20);
	glEnd();
	glFlush();

//keyboard




glColor3f(0.09,0.0,0.0); //OUTLINE
	glBegin(GL_QUADS);
	glVertex2f(a+25,390-10-20);
	glVertex2f(a+10,375-10-20);
	glVertex2f(a+105,375-10-20);
	glVertex2f(a+90,390-10-20);
	glEnd();
	glFlush();


glColor3f(0.7,0.0,0.0);
	glBegin(GL_LINE_LOOP);//OUTLINE OUTLINE
	glVertex2f(a+25,390-10-20);
	glVertex2f(a+10,375-10-20);
	glVertex2f(a+105,375-10-20);
	glVertex2f(a+90,390-10-20);
	glEnd();
	glFlush();





glColor3f(0.3,0.0,0.0);//SHADE
	glBegin(GL_QUADS);
	glVertex2f(a+11,375-10-20);
	glVertex2f(a+11,371-10-20);
	glVertex2f(a+104,371-10-20);
	glVertex2f(a+104,375-10-20);
	glEnd();
	glFlush();

        glColor3f(0.7,0.0,0.0);//SHADE LINE
	glBegin(GL_LINE_STRIP);
	glVertex2f(a+11,375-10-20);
	glVertex2f(a+11,371-10-20);
	glVertex2f(a+104,371-10-20);
	glVertex2f(a+104,375-10-20);
	glEnd();
	glFlush();


glColor3f(0.5,0.5,0.5);
	glBegin(GL_LINES);
//horizontal
	glVertex2f(a+22+5,387-10-20);
	glVertex2f(a+93-5,387-10-20);
	
	glVertex2f(a+18+4,383-10-20);
	glVertex2f(a+97-4,383-10-20);


	glVertex2f(a+14+3,379-10-20);
	glVertex2f(a+101-3,379-10-20);

//vertical
	glVertex2f(a+38,390-10-2-20);
	glVertex2f(a+29,375-10+2-20);

	glVertex2f(a+51,390-10-2-20);
	glVertex2f(a+48,375-10+2-20);

	glVertex2f(a+64,390-10-2-20);
	glVertex2f(a+67,375-10+2-20);

	glVertex2f(a+77,390-10-2-20);
	glVertex2f(a+86,375-10+2-20);

	glVertex2f(a+38,390-10-2-20);
	glVertex2f(a+29,375-10+2-20);

	

	glEnd();
	glFlush();

glColor3f(0.0,1,0.0);
	glBegin(GL_LINE_LOOP);//OUTLINE OUTLINE GREEN
	glVertex2f(a+25+2,390-10-2-20);
	glVertex2f(a+10+5,375-10+2-20);
	glVertex2f(a+105-5,375-10+2-20);
	glVertex2f(a+90-2,390-10-2-20);
	glEnd();
	glFlush();




//cpu

/*
glColor3f(0.09,0.0,0.0);
	glBegin(GL_QUADS);
	glVertex2f(100,390-10);
	glVertex2f(135,390-10);
	glVertex2f(135,450-10);
	glVertex2f(100,450-10);
	glEnd();
	glFlush();
*/
glColor3f(0.7,0.7,0.7);//CPU MIDDLE LINE
	glBegin(GL_LINES);
	glVertex2f(102,430-10-20);
	glVertex2f(133,430-10-20);
	glEnd();
	glFlush();

glColor3f(0.3,0.0,0.0);//CPU UP SHADE
	glBegin(GL_QUADS);
	glVertex2f(100,450-10-20);
	glVertex2f(105,455-10-20);
	glVertex2f(140,455-10-20);
	glVertex2f(135,450-10-20);
	glEnd();
	glFlush();

glColor3f(0.3,0.0,0.0);
	glBegin(GL_QUADS); //CPU RIGHT SHADE
	glVertex2f(135,450-10-20);
	glVertex2f(140,455-10-20);
	glVertex2f(140,395-10-20);
	glVertex2f(135,390-10-20);
	glEnd();
	glFlush();



glColor3f(0.7,0.0,0.0);
	glBegin(GL_LINE_LOOP); //CPU OUTLINE
	glVertex2f(100,390-10-20);
	glVertex2f(135,390-10-20);
	glVertex2f(135,450-10-20);
	glVertex2f(100,450-10-20);
	glEnd();
	glFlush();


glColor3f(0,0.5,0.0);
glBegin(GL_LINE_LOOP); //CPU OUTLINE GREEN
	glVertex2f(102,392-10-20);
	glVertex2f(133,392-10-20);
	glVertex2f(133,448-10-20);
	glVertex2f(102,448-10-20);
	glEnd();
	glFlush();


glColor3f(0.7,0.0,0.0);
	glBegin(GL_LINE_LOOP); //UPSHADE OUTLINE
	glVertex2f(100,450-10-20);
	glVertex2f(105,455-10-20);
	glVertex2f(140,455-10-20);
	glVertex2f(135,450-10-20);
	glEnd();
	glFlush();

glColor3f(0.7,0.0,0.0);
	glBegin(GL_LINE_LOOP); //SIDE SHADE OUTLINE
	glVertex2f(135,450-10-20);
	glVertex2f(140,455-10-20);
	glVertex2f(140,395-10-20);
	glVertex2f(135,390-10-20);
	glEnd();
	glFlush();




        
       



 glColor3f(0,0,0.1);
	glBegin(GL_QUADS); //CD DRIVE
	glVertex2f(105,440-10-20);
	glVertex2f(105,445-10-20);
	glVertex2f(130,445-10-20);
	glVertex2f(130,440-10-20);
	glEnd();
	glFlush();


 glColor3f(0,0.3,0);
	glBegin(GL_LINE_LOOP); //CD DIVE OUTLINE
	glVertex2f(105,440-10-20);
	glVertex2f(105,445-10-20);
	glVertex2f(130,445-10-20);
	glVertex2f(130,440-10-20);
	glEnd();
	glFlush();

glColor3f(0.5,0.5,0.5);
	glBegin(GL_QUADS); //POWER BUTTUON
	glVertex2f(115,407-10-20);
	glVertex2f(115,413-10-20);
	glVertex2f(121,413-10-20);
	glVertex2f(121,407-10-20);
	glEnd();
	glFlush();
glColor3f(0,0.3,0);
	glBegin(GL_LINE_LOOP); //POWER BUTTON OUTLINE
	glVertex2f(115,407-10-20);
	glVertex2f(115,413-10-20);
	glVertex2f(121,413-10-20);
	glVertex2f(121,407-10-20);
	glEnd();
	glFlush();







//cpu right


/*
glColor3f(0.09,0.0,0.0);
	glBegin(GL_QUADS);
	glVertex2f(100,390-10);
	glVertex2f(135,390-10);
	glVertex2f(135,450-10);
	glVertex2f(100,450-10);
	glEnd();
	glFlush();
*/
glColor3f(0.7,0.7,0.7);//right CPU MIDDLE LINE
	glBegin(GL_LINES);
	glVertex2f(255+102,430-10-20);
	glVertex2f(255+133,430-10-20);
	glEnd();
	glFlush();

glColor3f(0.3,0.0,0.0);//right CPU UP SHADE
	glBegin(GL_QUADS);
	glVertex2f(255+100,450-10-20);
	glVertex2f(255+105,455-10-20);
	glVertex2f(255+140,455-10-20);
	glVertex2f(255+135,450-10-20);
	glEnd();
	glFlush();

glColor3f(0.3,0.0,0.0);
	glBegin(GL_QUADS); //right CPU RIGHT SHADE
	glVertex2f(255+135,450-10-20);
	glVertex2f(255+140,455-10-20);
	glVertex2f(255+140,395-10-20);
	glVertex2f(255+135,390-10-20);
	glEnd();
	glFlush();



glColor3f(0.7,0.0,0.0);
	glBegin(GL_LINE_LOOP); //right CPU OUTLINE
	glVertex2f(255+100,390-10-20);
	glVertex2f(255+135,390-10-20);
	glVertex2f(255+135,450-10-20);
	
	glVertex2f(255+100,450-10-20);
	glEnd();
	glFlush();


glColor3f(0,0.5,0.0);
glBegin(GL_LINE_LOOP); //right CPU OUTLINE GREEN
	glVertex2f(255+102,392-10-20);
	glVertex2f(255+133,392-10-20);
	glVertex2f(255+133,448-10-20);
	glVertex2f(255+102,448-10-20);
	glEnd();
	glFlush();


glColor3f(0.7,0.0,0.0);
	glBegin(GL_LINE_LOOP); //right UPSHADE OUTLINE
	glVertex2f(255+100,450-10-20);
	glVertex2f(255+105,455-10-20);
	glVertex2f(255+140,455-10-20);
	glVertex2f(255+135,450-10-20);
	glEnd();
	glFlush();

glColor3f(0.7,0.0,0.0);
	glBegin(GL_LINE_LOOP); //right SIDE SHADE OUTLINE
	glVertex2f(255+135,450-10-20);
	glVertex2f(255+140,455-10-20);
	glVertex2f(255+140,395-10-20);
	glVertex2f(255+135,390-10-20);
	glEnd();
	glFlush();




        
       



 glColor3f(0,0,0.1);
	glBegin(GL_QUADS); //right CD DRIVE
	glVertex2f(255+105,440-10-20);
	glVertex2f(255+105,445-10-20);
	glVertex2f(255+130,445-10-20);
	glVertex2f(255+130,440-10-20);
	glEnd();
	glFlush();


 glColor3f(0,0.3,0);
	glBegin(GL_LINE_LOOP); //right CD DIVE OUTLINE
	glVertex2f(255+105,440-10-20);
	glVertex2f(255+105,445-10-20);
	glVertex2f(255+130,445-10-20);
	glVertex2f(255+130,440-10-20);
	glEnd();
	glFlush();

glColor3f(0.5,0.5,0.5);
	glBegin(GL_QUADS); //right POWER BUTTUON
	glVertex2f(255+115,407-10-20);
	glVertex2f(255+115,413-10-20);
	glVertex2f(255+121,413-10-20);
	glVertex2f(255+121,407-10-20);
	glEnd();
	glFlush();
glColor3f(0,0.4,0);
	glBegin(GL_LINE_LOOP); //right POWER BUTTON OUTLINE
	glVertex2f(255+115,407-10-20);
	glVertex2f(255+115,413-10-20);
	glVertex2f(255+121,413-10-20);
	glVertex2f(255+121,407-10-20);
	glEnd();
	glFlush();








 glColor3f(0,0,0.1);
	glBegin(GL_QUADS); //Connection
	glVertex2f(145,433-20-20);
	glVertex2f(145,430-20-20);
	glVertex2f(345,430-20-20);
	glVertex2f(345,433-20-20);
	glEnd();
	glFlush();


 glColor3f(0,0,0.4); 
	glBegin(GL_LINE_LOOP); //Connection outline
	glVertex2f(145,433-20-20);
	glVertex2f(145,430-20-20);
	glVertex2f(345,430-20-20);
	glVertex2f(345,433-20-20);
	glEnd();
	glFlush();


  glColor3f(1,0,0); 
	glBegin(GL_LINES); //line top
	glVertex2f(0,420+20);
	glVertex2f(500,420+20);
	glEnd();
	glFlush();


glColor3f(1,0,0); 
	glBegin(GL_LINES); //line bottom
	glVertex2f(0,300+20);
	glVertex2f(500,300+20);
	glEnd();
	glFlush();






	

	setFont(GLUT_BITMAP_HELVETICA_12);
    glColor3f(1.0,1.0,1.0);
	drawstring(435.0,450.5,1.0,"NAK");		//frame indicators
	glFlush();


       glColor3f(1.0,1.0,1.0);
	drawstring(435.0,465.5,1.0,"ACK ");
	glFlush();

	
       glColor3f(1.0,1.0,1.0);
	drawstring(435.0,480.5,1.0,"DATA FRAMES");
	glFlush();


glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON); //df  red
	glVertex2f(430,480);
	glVertex2f(415,480);
	glVertex2f(415,485);
	glVertex2f(430,485);
	glEnd();
	glFlush();

glColor3f(0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(430,465);//ack  L.blue
	glVertex2f(415,465);
	glVertex2f(415,470);
	glVertex2f(430,470);
	glEnd();
	glFlush();

glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(430,450);//nak yellow
	glVertex2f(415,450);
	glVertex2f(415,455);
	glVertex2f(430,455);
	glEnd();
	glFlush();













}



 
void computers()
{
	glClear(GL_COLOR_BUFFER_BIT);

	

	glColor3f(1.0f,1.0f,1.0f);
	setFont(GLUT_BITMAP_HELVETICA_12);
 	drawstring(425.0,449.0-20,1.0,"COM-2");

	computer(380);

	glColor3f(1.0f,1.0f,1.0f);
	setFont(GLUT_BITMAP_HELVETICA_12);
 	drawstring(40.0,449.0-20,1.0,"COM-1");

	computer(0);
}






void draw6(void)				// text for keyboard interaction

{
	glColor3f(1.0,01.0,01.0);
	glBegin(GL_POLYGON);
	glVertex2f(359,113-66);
	glVertex2f(359,130-66);
	glVertex2f(435,130-66);
	glVertex2f(435,113-66);
	glEnd();
	glFlush();
    
glBegin(GL_POLYGON);
	glVertex2f(359,107-66);
	glVertex2f(359,89-66);
	glVertex2f(435,89-66);
	glVertex2f(435,107-66);
	glEnd();
	glFlush();


	glColor3f(0,0,0);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(361.0,119-66.0,1.0,"Press C:Continue");
	glColor3f(0,0,0);
	drawstring(361.0,93-66,1.0,"Press E:Exit");
	glFlush();

}




void draw3(int m,int l)																						  // DRAWING OF SAFE SENDING
{
																											//Sender site initial window
	glClear(GL_COLOR_BUFFER_BIT);
		computers();
//computer1();
//computer2();
	setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(0.4932,0.9996,0.0);
	drawstring(m+30.0,430-20.0,1.0,E);


	

	glColor3f(1.6,1.9,1.2);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(180.0,465.5,1.0,"S A F E    S E N D I N G");

	setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0,1.0,1.0);
	drawstring(55,268.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(69,268.0,0.0," 1");
	glColor3f(1.0,1.0,1.0);
	drawstring(84,268.0,0.0,"2");
	glColor3f(1.0,1.0,1.0);
	drawstring(99,268.0,0.0,"3");
	glColor3f(1.0,1.0,1.0);
	drawstring(114,268.0,0.0,"4");
	glColor3f(1.0,1.0,1.0);
	drawstring(130,268.0,0.0,"5");
	glColor3f(1.0,1.0,1.0);
	drawstring(147,268.0,0.0,"6");
	glColor3f(1.0,1.0,1.0);
	drawstring(163,268.0,0.0,"7");
	glColor3f(1.0,1.0,1.0);
	drawstring(177,268.0,0.0,"0");

	glColor3f(1.0,1.0,1.0);
	drawstring(305,268.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(320,268.0,0.0,"1");
	glColor3f(1.0,1.0,1.0);
	drawstring(334,268.0,0.0," 2");
	glColor3f(1.0,1.0,1.0);
	drawstring(349,268.0,0.0,"3");
	glColor3f(1.0,1.0,1.0);
	drawstring(364,268.0,0.0,"4");
	glColor3f(1.0,1.0,1.0);
	drawstring(379,268.0,0.0,"5");
	glColor3f(1.0,1.0,1.0);
	drawstring(394,268.0,0.0,"6");
	glColor3f(1.0,1.0,1.0);
	drawstring(409,268.0,0.0,"7");
	glColor3f(1.0,1.0,1.0);
	drawstring(424,268.0,0.0,"0");

																											//SENDER SIDE

	glColor3f(0.0,0.0,1.0);																				 // Initial set of frames in BLUE color
	slide(10,2,50,260);
	glFlush();

	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																				  // Send window in WHITE color
		glVertex2f(50,255);
	    glVertex2f(110,255);
		glVertex2f(110,290);
		glVertex2f(50,290);
    glEnd();
	glFlush();


	glColor3f(0.0,0.0,1.0);
	slide(10,2,300,260);																				   // Initial set of frames in BLUE color
	glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);																				 // initial sending frames in red
    slide(5,2,50,260);
    glEnd();
	glFlush();



glColor3f(1.0,0.0,0.0);																					 // receiver window in red
slide(5,2,300,260);
glEnd();
	glFlush();

	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																				  // receiver window in WHITE color
		glVertex2f(300,255);
	    glVertex2f(360,255);
		glVertex2f(360,290);
		glVertex2f(300,290);
    glEnd();
	glFlush();

  // delay();
   glColor3f(0.0,1.0,0.0);																				 //Frame 0 sent and becoming green
   slide(2,2,50,260);
   glEnd();
   glFlush();


   glColor3f(1.0,0.0,0.0);																				  // sliding the window and becoming green
slide(4,2,65,260);
glEnd();
	glFlush();


move1();																								// movement of data packet


glColor3f(0.0,0.0,1.0);																					 // sliding the window and becoming green
slide(2,2,300,260);
glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);																				 // 4th frame red
slide(2,2,360,260);
glEnd();
	glFlush();

glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);																				 // To remove initial WHITE window trace
		glVertex2f(300,255);
	    glVertex2f(360,255);
		glVertex2f(360,290);
		glVertex2f(300,290);
    glEnd();
	glFlush();


glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																				  // moving the reciever window in WHITE color
		glVertex2f(315,255);
	    glVertex2f(375,255);
		glVertex2f(375,290);
		glVertex2f(315,290);
    glEnd();
	glFlush();

glColor3f(0.0,0.0,1.0);																					 // To remove traces
glBegin(GL_LINES);
glVertex2f(300,260);
glVertex2f(300,285);
glEnd();
glFlush();

glColor3f(1.0,0.0,0.0);																					// To remove traces
glBegin(GL_LINES);
glVertex2f(360,260);
glVertex2f(360,285);
glEnd();
glFlush();


glColor3f(0.0,1.0,0.0);																					// sliding the window and becoming green
slide(2,2,65,260);
glEnd();
	glFlush();

glColor3f(0.0,0.0,1.0);																					// sliding the window and becoming green
slide(1,2,300,260);
glEnd();
	glFlush();

move2();
	setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(0.4932,0.9996,0.0);
	drawstring(l+110.0,430.0-20,1.0,E);

setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(0,0,0);
	drawstring(m+30.0,430-20.0,1.0,E);




	glColor3f(1.0,1.0,1.0);
	drawstring(69,268.0,0.0," 1");
	glColor3f(1.0,1.0,1.0);
	drawstring(55,268.0,0.0,"0");

	glColor3f(1.0,1.0,1.0);
	drawstring(320,268.0,0.0,"1");


glColor3f(0.0,0.0,1.0);																				  // sliding the window and becoming blue
slide(2,2,50,260);
glEnd();
	glFlush();

glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);																			 // To remove initial WHITE window trace
		glVertex2f(50,255);
	    glVertex2f(50,290);
		glVertex2f(110,290);
		glVertex2f(110,255);
    glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);																				// sliding the window and becoming blue
 slide(2,2,110,260);
glBegin(GL_LINES);
glVertex2f(110,260);
glVertex2f(110,285);
glEnd();
	glFlush();



glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																			 // moving the reciever window in WHITE color
		glVertex2f(65,255);
	    glVertex2f(65,290);
		glVertex2f(125,290);
		glVertex2f(125,255);
    glEnd();
	glFlush();



glColor3f(0.0,0.0,1.0);																					//to remove traces
glBegin(GL_LINES);
glVertex2f(50,260);
glVertex2f(50,285);
glEnd();
glFlush();

glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);																			  // moving the reciever window in WHITE color
		glVertex2f(315,255);
	    glVertex2f(375,255);
		glVertex2f(375,290);
		glVertex2f(315,290);
    glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(315,260);
	glVertex2f(315,285);
	glVertex2f(375,260);
	glVertex2f(375,285);
	glEnd();
	glFlush();

	glColor3f(0.0,0.0,1.0);																			// sliding the window and becoming green
slide(3,2,300,260);
glEnd();
	glFlush();


glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																			  // moving the reciever window in WHITE color
		glVertex2f(330,255);
	    glVertex2f(330,290);
		glVertex2f(390,290);
		glVertex2f(390,255);
    glEnd();
	glFlush();


glColor3f(1.0,0.0,0.0);																				 // sliding the window and becoming green
slide(2,2,375,260);
glEnd();
	glFlush();


move8();

	setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(1.0,1.0,1.0);
	drawstring(m+30.0,430.0-20,1.0,"message sent");

	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(1.0,1.0,1.0);
	drawstring(334,268.0,0.0," 2");


glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);																				  // remove window trace
		glVertex2f(65,255);
	    glVertex2f(65,290);
		glVertex2f(125,290);
		glVertex2f(125,255);
    glEnd();
	glFlush();


glColor3f(1.0,0.0,0.0);																					// sliding the window and becoming green
slide(5,2,80,260);
glEnd();
	glFlush();

	glColor3f(0.0,0.0,1.0);																				 // sliding the window and becoming green
slide(3,2,50,260);
glEnd();
	glFlush();


glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																			   // moving the reciever window in WHITE color
		glVertex2f(80,255);
	    glVertex2f(80,290);
		glVertex2f(140,290);
		glVertex2f(140,255);
    glEnd();
	glFlush();

	delay();


}


void draw4(int m,int l)																						 // DRAWING OF PACKET CRASHNG
{
																										//second screen for lost packet
//delay();


glClear(GL_COLOR_BUFFER_BIT);
		computers();
//computer1();
//computer2();
glColor3f(1.6,1.9,1.2);

	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(180.0,465.5,1.0,"P A C K E T   C R A S H I N G");

	setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0,1.0,1.0);
	drawstring(56,268.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(70,268.0,0.0,"1");
	glColor3f(1.0,1.0,1.0);
	drawstring(85,268.0,0.0,"2");
	glColor3f(1.0,1.0,1.0);
	drawstring(100,268.0,0.0,"3");
	glColor3f(1.0,1.0,1.0);
	drawstring(114,268.0,0.0," 4");
	glColor3f(1.0,1.0,1.0);
	drawstring(130,268.0,0.0,"5");
	glColor3f(1.0,1.0,1.0);
	drawstring(147,268.0,0.0,"6");
	glColor3f(1.0,1.0,1.0);
	drawstring(163,268.0,0.0,"7");
	glColor3f(1.0,1.0,1.0);
	drawstring(177,268.0,0.0,"0");

	glColor3f(1.0,1.0,1.0);
	drawstring(305,268.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(320,268.0,0.0,"1");
	glColor3f(1.0,1.0,1.0);
	drawstring(334,268.0,0.0," 2");
	glColor3f(1.0,1.0,1.0);
	drawstring(349,268.0,0.0,"3");
	glColor3f(1.0,1.0,1.0);
	drawstring(365,268.0,0.0,"4");
	glColor3f(1.0,1.0,1.0);
	drawstring(379,268.0,0.0," 5");
	glColor3f(1.0,1.0,1.0);
	drawstring(394,268.0,0.0,"6");
	glColor3f(1.0,1.0,1.0);
	drawstring(409,268.0,0.0,"7");
	glColor3f(1.0,1.0,1.0);
	drawstring(424,268.0,0.0,"0");


	glColor3f(0.0,0.0,1.0);
	slide(10,2,50,260);																					// Initial set of frames in BLUE color

	glColor3f(1.0,0.0,0.0);
	slide(5,2,50,260);																					 // red frames in window
	glEnd();
	glFlush();

	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																				// send window in WHITE color
		glVertex2f(50,255);
	    glVertex2f(50,290);
		glVertex2f(110,290);
		glVertex2f(110,255);
    glEnd();
	glFlush();




																										//Reciver Window
	glColor3f(0.0,0.0,1.0);
	slide(10,2,300,260);																				// Initial set of frames in BLUE color
	glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);
	slide(5,2,300,260);																				   // red frames in window
	glEnd();
	glFlush();

	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																				// moving the reciever window in WHITE color
		glVertex2f(300,255);
	    glVertex2f(360,255);
		glVertex2f(360,290);
		glVertex2f(300,290);
    glEnd();
	glFlush();



//	delay();

	glColor3f(0.0,1.0,0.0);
    slide(2,2,50,260);																					// red frames in window
	glEnd();
	glFlush();

	move1();


glColor3f(0.0,0.0,1.0);																					 // sliding the window and becoming green
slide(2,2,300,260);
glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);																				// 4th frame red
slide(2,2,360,260);
glEnd();
	glFlush();

glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);																				// To remove initial WHITE window trace
		glVertex2f(300,255);
	    glVertex2f(360,255);
		glVertex2f(360,290);
		glVertex2f(300,290);
    glEnd();
	glFlush();


glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																				 // moving the reciever window in WHITE color
		glVertex2f(315,255);
	    glVertex2f(375,255);
		glVertex2f(375,290);
		glVertex2f(315,290);
    glEnd();
	glFlush();

glColor3f(0.0,0.0,1.0);																					// To remove traces
glBegin(GL_LINES);
glVertex2f(300,260);
glVertex2f(300,285);
glEnd();
glFlush();

glColor3f(1.0,0.0,0.0);																					 // To remove traces
glBegin(GL_LINES);
glVertex2f(360,260);
glVertex2f(360,285);
glEnd();
glFlush();



 glColor3f(0.0,1.0,0.0);																				 // sliding the window and becoming green
slide(2,2,65,260);
glEnd();
	glFlush();


	move2();


glColor3f(0.0,0.0,1.0);																					 // sliding the window and becoming blue
slide(2,2,50,260);
glEnd();
	glFlush();

glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);																				 // To remove initial WHITE window trace
		glVertex2f(50,255);
	    glVertex2f(50,290);
		glVertex2f(110,290);
		glVertex2f(110,255);
    glEnd();
	glFlush();

glColor3f(1.0,0.0,0.0);																					// sliding the window and becoming blue
slide(2,2,110,260);
glBegin(GL_LINES);
glVertex2f(110,260);
glVertex2f(110,285);
glEnd();
	glFlush();



glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																				 // moving the reciever window in WHITE color
		glVertex2f(65,255);
	    glVertex2f(65,290);
		glVertex2f(125,290);
		glVertex2f(125,255);
    glEnd();
	glFlush();



glColor3f(0.0,0.0,1.0);																					//to remove traces
glBegin(GL_LINES);
glVertex2f(50,260);
glVertex2f(50,285);
glEnd();
glFlush();

glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);																			  // moving the reciever window in WHITE color
		glVertex2f(315,255);
	    glVertex2f(375,255);
		glVertex2f(375,290);
		glVertex2f(315,290);
    glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(315,260);
	glVertex2f(315,285);
	glVertex2f(375,260);
	glVertex2f(375,285);
	glEnd();
	glFlush();

glColor3f(0.0,0.0,1.0);																					// sliding the window and becoming green
slide(3,2,300,260);
glEnd();
	glFlush();




glColor3f(1.0,0.0,0.0);																					// sliding the window and becoming green
slide(2,2,375,260);
glEnd();
	glFlush();

	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																				 // moving the reciever window in WHITE color
		glVertex2f(330,255);
	    glVertex2f(330,290);
		glVertex2f(390,290);
		glVertex2f(390,255);
    glEnd();
	glFlush();


	setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0,1.0,1.0);
	drawstring(56,268.0,0.0,"0");
		glColor3f(1.0,1.0,1.0);
	drawstring(320,268.0,0.0,"1");

move8();

setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0,1.0,1.0);
	drawstring(70,268.0,0.0,"1");

glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);																				 // remove window trace
		glVertex2f(65,255);
	    glVertex2f(65,290);
		glVertex2f(125,290);
		glVertex2f(125,255);
    glEnd();
	glFlush();


glColor3f(1.0,0.0,0.0);																					 // sliding the window and becoming green
slide(5,2,80,260);
glEnd();
	glFlush();

	glColor3f(0.0,0.0,1.0);																				 // sliding the window and becoming green
slide(3,2,50,260);
glEnd();
	glFlush();


glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																				 // moving the reciever window in WHITE color
		glVertex2f(80,255);
	    glVertex2f(80,290);
		glVertex2f(140,290);
		glVertex2f(140,255);
    glEnd();
	glFlush();

	glColor3f(0.0,1.0,0.0);
	slide(2,2,80,260);
	glFlush();

move3();

	glColor3f(1.0,0.0,0.0);																				//packet crashing
	glBegin(GL_POLYGON);
	glVertex2f(240,168);
	glVertex2f(255,168);
	glVertex2f(260,178);
	glVertex2f(265,168);
	glVertex2f(280,168);
	glVertex2f(267.5,163);
	glVertex2f(280,153);
	glVertex2f(260,163);
	glVertex2f(240,153);
	glVertex2f(252.5,163);
	glEnd();
	glFlush();


	glColor3f(0.0,0.0,0.0);																				//to remove traces
	glBegin(GL_TRIANGLES);
	glVertex2f(240,168);
	glVertex2f(260,178);
	glVertex2f(255,168);
    glEnd();
	glFlush();

    glBegin(GL_TRIANGLES);
	glVertex2f(240,168);
	glVertex2f(252.5,163);
	glVertex2f(240,153);
	glEnd();
	glFlush();


	glColor3f(0.0,0.0,1.0);
	slide(2,2,65,260);
	glFlush();


	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(80,260);
	glVertex2f(80,285);
	glEnd();

  glColor3f(0.0,1.0,0.0);
	slide(2,2,95,260);
	glFlush();


   move5();

   glColor3f(1.0,1.0,1.0);
	drawstring(334,268.0,0.0," 2");


   glColor3f(0.0,1.0,0.0);
	slide(2,2,345,260);
	glFlush();

    glColor3f(0.0,1.0,0.0);
	slide(2,2,110,260);
	glFlush();


	move10();

	glColor3f(0.0,1.0,0.0);
	slide(2,2,360,260);
	glFlush();

	glColor3f(0,0,0);
    glBegin(GL_POLYGON);																			 //to remove timer trace
		glVertex2f(100,80);
	    glVertex2f(100,90);
		glVertex2f(225,90);
		glVertex2f(225,80);
    glEnd();
	glFlush();

	glColor3f(0.0,0.0,0.0);																			//packet crashing
	glBegin(GL_POLYGON);
	glVertex2f(240,168);
	glVertex2f(255,168);
	glVertex2f(260,178);
	glVertex2f(265,168);
	glVertex2f(280,168);
	glVertex2f(267.5,163);
	glVertex2f(280,153);
	glVertex2f(260,163);
	glVertex2f(240,153);
	glVertex2f(252.5,163);
	glEnd();
	glFlush();


	glColor3f(0.0,0.0,0.0);																			//to remove traces
	glBegin(GL_TRIANGLES);
	glVertex2f(240,168);
	glVertex2f(260,178);
	glVertex2f(255,168);
    glEnd();
	glFlush();

    glBegin(GL_TRIANGLES);
	glVertex2f(240,168);
	glVertex2f(252.5,163);
	glVertex2f(240,153);
	glEnd();
	glFlush();

glColor3f(0.0f,0.0f,0.0f);
    drawstring(185.0,165.0,1.0,"FRAME 2 lost");

	move4();
	glColor3f(1.0,1.0,1.0);
	drawstring(334,268.0,0.0," 2");

glColor3f(0.0,1.0,0.0);
	slide(2,2,330,260);
	glFlush();

 //delay();

	glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);																			// moving the reciever window in WHITE color
		glVertex2f(330,255);
	    glVertex2f(330,290);
		glVertex2f(390,290);
		glVertex2f(390,255);
    glEnd();
	glFlush();


	glColor3f(0.0,0.0,1.0);
	slide(6,2,300,260);
	glFlush();


glColor3f(1.0,0.0,0.0);
	slide(5,2,375,260);
	glFlush();

	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																			// moving the reciever window in WHITE color
		glVertex2f(375,255);
	    glVertex2f(375,290);
		glVertex2f(435,290);
		glVertex2f(435,255);
    glEnd();
	glFlush();

move11();

	glColor3f(1.0,1.0,1.0);
	drawstring(85,268.0,0.0,"2");
	glColor3f(1.0,1.0,1.0);
	drawstring(100,268.0,0.0,"3");
	glColor3f(1.0,1.0,1.0);
	drawstring(114,268.0,0.0," 4");
	glColor3f(1.0,1.0,1.0);
	drawstring(379,268.0,0.0," 5");


glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);																			 // moving the reciever window in WHITE color
		glVertex2f(80,255);
	    glVertex2f(80,290);
		glVertex2f(140,290);
		glVertex2f(140,255);
    glEnd();
	glFlush();


glColor3f(0.0,0.0,1.0);
	slide(6,2,50,260);
	glFlush();


glColor3f(1.0,0.0,0.0);
	slide(5,2,125,260);
	glFlush();


glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																			 // moving the reciever window in WHITE color
		glVertex2f(125,255);
	    glVertex2f(125,290);
		glVertex2f(185,290);
		glVertex2f(185,255);
    glEnd();
	glFlush();

}



void draw5(int m, int l)																					// to show time out
{

																									//Sender site initial window
	glClear(GL_COLOR_BUFFER_BIT);
				computers();
//computer1();
//computer2();
	glColor3f(0.0,0.0,1.0);
	slide(10,2,50,260);																				// Initial set of frames in BLUE color
	glFlush();
	glColor3f(0.0,0.0,1.0);																						// active line indicator
/*
	glBegin(GL_POLYGON);
	glVertex2f(59.5+m,348);
	glVertex2f(59.5+m,342);
	glVertex2f(155.5+l,342);
	glVertex2f(155.5+l,348);
	glEnd();
	glFlush();*/
	glColor3f(1.6,1.9,1.2);

	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(180.0,465.5,1.0,"T I M E    O U T");

	setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0,1.0,1.0);
	drawstring(55,268.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(69,268.0,0.0," 1");
	glColor3f(1.0,1.0,1.0);
	drawstring(84,268.0,0.0," 2");
	glColor3f(1.0,1.0,1.0);
	drawstring(99,268.0,0.0,"3");
	glColor3f(1.0,1.0,1.0);
	drawstring(114,268.0,0.0,"4");
	glColor3f(1.0,1.0,1.0);
	drawstring(130,268.0,0.0,"5");
	glColor3f(1.0,1.0,1.0);
	drawstring(147,268.0,0.0,"6");
	glColor3f(1.0,1.0,1.0);
	drawstring(163,268.0,0.0,"7");
	glColor3f(1.0,1.0,1.0);
	drawstring(177,268.0,0.0,"0");

	glColor3f(1.0,1.0,1.0);
	drawstring(305,268.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(320,268.0,0.0,"1");
	glColor3f(1.0,1.0,1.0);
	drawstring(334,268.0,0.0," 2");
	glColor3f(1.0,1.0,1.0);
	drawstring(349,268.0,0.0," 3");
	glColor3f(1.0,1.0,1.0);
	drawstring(364,268.0,0.0,"4");
	glColor3f(1.0,1.0,1.0);
	drawstring(379,268.0,0.0,"5");
	glColor3f(1.0,1.0,1.0);
	drawstring(394,268.0,0.0,"6");
	glColor3f(1.0,1.0,1.0);
	drawstring(409,268.0,0.0,"7");
	glColor3f(1.0,1.0,1.0);
	drawstring(424,268.0,0.0,"0");





	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																			 // Send window in WHITE color
		glVertex2f(50,255);
	    glVertex2f(110,255);
		glVertex2f(110,290);
		glVertex2f(50,290);
    glEnd();
	glFlush();


	glColor3f(0.0,0.0,1.0);
	slide(10,2,300,260);																			 // Initial set of frames in BLUE color
	glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);																			 // initial sending frames in red
slide(5,2,50,260);
glEnd();
	glFlush();



glColor3f(1.0,0.0,0.0);																				 // receiver window in red
slide(5,2,300,260);
glEnd();
	glFlush();
	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																			 // receiver window in WHITE color
		glVertex2f(300,255);
	    glVertex2f(360,255);
		glVertex2f(360,290);
		glVertex2f(300,290);
    glEnd();
	glFlush();
   glColor3f(0.0,1.0,0.0);																			//Frame 0 sent and becoming green
   slide(2,2,50,260);
   glEnd();
   glFlush();



   glColor3f(1.0,0.0,0.0);																			 // sliding the window and becoming green
slide(4,2,65,260);
glEnd();
	glFlush();


move1();																							// movement of data packet

glColor3f(0.0,0.0,1.0);																				// sliding the window and becoming green
slide(2,2,300,260);
glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);																			// 4th frame red
slide(2,2,360,260);
glEnd();
	glFlush();

glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);																			// To remove initial WHITE window trace
		glVertex2f(300,255);
	    glVertex2f(360,255);
		glVertex2f(360,290);
		glVertex2f(300,290);
    glEnd();
	glFlush();


glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																			  // moving the reciever window in WHITE color
		glVertex2f(315,255);
	    glVertex2f(375,255);
		glVertex2f(375,290);
		glVertex2f(315,290);
    glEnd();
	glFlush();

glColor3f(0.0,0.0,1.0);																				// To remove traces
glBegin(GL_LINES);
glVertex2f(300,260);
glVertex2f(300,285);
glEnd();
glFlush();

glColor3f(1.0,0.0,0.0);																				// To remove traces
glBegin(GL_LINES);
glVertex2f(360,260);
glVertex2f(360,285);
glEnd();
glFlush();



glColor3f(0.0,1.0,0.0);																				// sliding the window and becoming green
slide(2,2,65,260);
glEnd();
	glFlush();

glColor3f(0.0,0.0,1.0);																				// sliding the window and becoming green
slide(1,2,300,260);
glEnd();
	glFlush();

move2();

	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(1.0,1.0,1.0);
	drawstring(69,268.0,0.0," 1");
	glColor3f(1.0,1.0,1.0);
	drawstring(320,268.0,0.0,"1");



glColor3f(0.0,0.0,1.0);																				// sliding the window and becoming blue
slide(2,2,50,260);
glEnd();
	glFlush();

glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);																			 // To remove initial WHITE window trace
		glVertex2f(50,255);
	    glVertex2f(50,290);
		glVertex2f(110,290);
		glVertex2f(110,255);
    glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);																			// sliding the window and becoming blue
 slide(2,2,110,260);
glBegin(GL_LINES);
glVertex2f(110,260);
glVertex2f(110,285);
glEnd();
	glFlush();



glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																			 // moving the reciever window in WHITE color
		glVertex2f(65,255);
	    glVertex2f(65,290);
		glVertex2f(125,290);
		glVertex2f(125,255);
    glEnd();
	glFlush();



glColor3f(0.0,0.0,1.0);																				//to remove traces
glBegin(GL_LINES);
glVertex2f(50,260);
glVertex2f(50,285);
glEnd();
glFlush();


glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);																			 // moving the reciever window in WHITE color
		glVertex2f(315,255);
	    glVertex2f(375,255);
		glVertex2f(375,290);
		glVertex2f(315,290);
    glEnd();
	glFlush();

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(315,260);
	glVertex2f(315,285);
	glVertex2f(375,260);
	glVertex2f(375,285);
	glEnd();
	glFlush();

	glColor3f(0.0,0.0,1.0);																			// sliding the window and becoming green
slide(3,2,300,260);
glEnd();
	glFlush();



glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																			 // moving the reciever window in WHITE color
		glVertex2f(330,255);
	    glVertex2f(330,290);
		glVertex2f(390,290);
		glVertex2f(390,255);
    glEnd();
	glFlush();


glColor3f(1.0,0.0,0.0);																				// sliding the window and becoming green
slide(2,2,375,260);
glEnd();
	glFlush();


	move12();

	setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(1.0f,1.0f,1.0f);
    drawstring(280.0,163.0,1.0,"ACK 2 lost");


		glColor3f(0.0,1.0,1.0);																		//packet crashing
	glBegin(GL_POLYGON);
	glVertex2f(240,168);
	glVertex2f(255,168);
	glVertex2f(260,178);
	glVertex2f(265,168);
	glVertex2f(280,168);
	glVertex2f(267.5,163);
	glVertex2f(280,153);
	glVertex2f(260,163);
	glVertex2f(240,153);
	glVertex2f(252.5,163);
	glEnd();
	glFlush();




	glColor3f(0.0,0.0,0.0);																			//to remove traces
	glBegin(GL_TRIANGLES);
	glVertex2f(240,168);
	glVertex2f(260,178);
	glVertex2f(255,168);
    glEnd();
	glFlush();

    glBegin(GL_TRIANGLES);
	glVertex2f(240,168);
	glVertex2f(252.5,163);
	glVertex2f(240,153);
	glEnd();
	glFlush();

glColor3f(0.0,1.0,0.0);																				// sliding the window and becoming green
slide(2,2,80,260);
glEnd();
	glFlush();

		glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);																			// moving the reciever window in WHITE color
		glVertex2f(358,120);
	    glVertex2f(358,130);
		glVertex2f(485,130);
		glVertex2f(485,120);
    glEnd();
	glFlush();


    move14();

	setFont(GLUT_BITMAP_HELVETICA_12);

	glColor3f(1.0,1.0,1.0);
	drawstring(334,268.0,0.0,"2");
		setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(0.0f,0.0f,0.0f);
    drawstring(280.0,163.0,1.0,"ACK 2 lost");


	glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);																			 // moving the reciever window in WHITE color
		glVertex2f(98,100);
	    glVertex2f(98,112);
		glVertex2f(225,112);
		glVertex2f(225,100);
    glEnd();
	glFlush();


glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);																			// moving the reciever window in WHITE color
		glVertex2f(330,255);
	    glVertex2f(330,290);
		glVertex2f(390,290);
		glVertex2f(390,255);
    glEnd();
	glFlush();


glColor3f(0.0,0.0,1.0);																				// sliding the window and becoming green
slide(4,2,300,260);
glEnd();
	glFlush();


glColor3f(1.0,0.0,0.0);																				// sliding the window and becoming green
slide(2,2,390,260);
glEnd();
	glFlush();


	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																			 // moving the reciever window in WHITE color
		glVertex2f(345,255);
	    glVertex2f(345,290);
		glVertex2f(405,290);
		glVertex2f(405,255);
    glEnd();
	glFlush();


	glColor3f(0.0,0.0,0.0);																			//packet crashing
	glBegin(GL_POLYGON);
	glVertex2f(240,168);
	glVertex2f(255,168);
	glVertex2f(260,178);
	glVertex2f(265,168);
	glVertex2f(280,168);
	glVertex2f(267.5,163);
	glVertex2f(280,153);
	glVertex2f(260,163);
	glVertex2f(240,153);
	glVertex2f(252.5,163);
	glEnd();
	glFlush();

move13();
setFont(GLUT_BITMAP_HELVETICA_12);
	glColor3f(1.0,1.0,1.0);
	drawstring(55,268.0,0.0,"0");
	glColor3f(1.0,1.0,1.0);
	drawstring(69,268.0,0.0," 1");
	glColor3f(1.0,1.0,1.0);
	drawstring(84,268.0,0.0," 2");
	glColor3f(1.0,1.0,1.0);
	drawstring(349,268.0,0.0,"3");


glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);																			 // moving the reciever window in WHITE color
		glVertex2f(65,255);
	    glVertex2f(65,290);
		glVertex2f(125,290);
		glVertex2f(125,255);
    glEnd();
	glFlush();

	glColor3f(0.0,0.0,1.0);																			// sliding the window and becoming green
slide(4,2,50,260);
glEnd();
	glFlush();

glColor3f(1.0,0.0,0.0);																				 // sliding the window and becoming green
slide(5,2,95,260);
glEnd();
	glFlush();


	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);																			 // moving the reciever window in WHITE color
		glVertex2f(95,255);
	    glVertex2f(95,290);
		glVertex2f(155,290);
		glVertex2f(155,255);
    glEnd();
	glFlush();



}







void output(int x, int y, char *string)
{
  int len, i;

  glRasterPos2f(x, y);
  len = (int) strlen(string);
  for (i = 0; i < len; i++) {
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
  }
}



void send_options(void)																				// to draw the text in menu screen
{
	glClear(GL_COLOR_BUFFER_BIT);
		computers();
//computer1();
//computer2();
	//drawop(0,0);

	setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(0.98392,0.49,0.0);
	drawstring(180.0,185.0,1.0,"SENDING OPTIONS(select any one)");

	glColor3f(1.0,1.0,1.0);
	drawstring(67.5,305.0,1.0,"Press A for 1-2");

	glFlush();
}















void menuSelect(int value)
{
  switch (value)
  {
	  case mainmenu:
      text();
	  break;
 

	case sendop:
      send_options();draw6();
      break;

	case one:
      draw3(0,0);
      break;


    case safesending:
      send_options();draw6();
      break;

    case packetcrashing:
      draw4(100,300);delay();draw6();;
	  break;

	case timeout:
      draw5(0,300);
	  break;

  }


}


void mykeyboard(unsigned char key,int x,int y)
{

	switch(key)
	{	case 'e':
		case 'E':exit(0);			break;
		case 's':
		case 'S':draw3(0,300);delay();draw6();break;//draw3();			delay();break;	//safe sending
	        case 'p':
		case 'P':draw4(0,300);delay();draw6();break;	//packet crashing
		case 't':
		case 'T':draw5(0,300);delay();draw6();break;	//time out*/
		case 'c':
		case 'C':text();break;
		default:return;
	}

	//glutPostRedisplay();
}

void myMouse(int btn, int state, int x, int y)
{

	if(btn==GLUT_LEFT_BUTTON && state == GLUT_DOWN )
	{int z=1;
		x=x/2;
		y=(1000-y)/2.1;

printf("%d\t%d\n",x,y);
	if((x>=155 && x<=299) && (y>=325 && y<=346 ))  // safe sending menu
		{
				draw3(0,300);delay();draw6();

		}

		if((x>=155 && x<=299) && (y>=272 && y<=292 ))  // packet loss menu
		{
				draw4(0,300);delay();draw6();
		}

		if((x>=155 && x<=299) && (y>=221 && y<=241 ))  // time outmenu
		{
				draw5(0,300);delay();draw6();
		}

		if((x>=155 && x<=299) && (y>=169 && y<=189 ))  // exit menu
		{
				exit(0);
		}

               


                if((x>=360 && x<=435) && (y>=82-66 && y<=100-66 )) 
		{
               exit(0);

		}


		if((x>=360 && x<=435) && (y>=106-66 && y<=122-66 )) 
		{	
                  text();	
		}

	}
}




void myInit()
{
    glClearColor(0.0,0.0,0.0,0.0);
	glColor3f(0.0f,0.0f,0.0f);
	glPointSize(5.0);
	gluOrtho2D(0.0,500.0,0.0,500.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

}


void display(void)
{		glClear(GL_COLOR_BUFFER_BIT);
	
	
////////////////////////////
if(flag==0) {text();}


//////////////////////////////////

//delay();
	//delay();
	//if(flag==0) {text();}


}


void changeSize(int w, int h) {

	// Prevent a divide by zero, when window is too short
	// (you cant make a window of zero width).
	if(h == 0)
		h = 1;
	float ratio = 1.0* w / h;

	// Use the Projection Matrix
	glMatrixMode(GL_PROJECTION);

        // Reset Matrix
	glLoadIdentity();

	// Set the viewport to be the entire window
	glViewport(0, 0, w, h);

	// Set the correct perspective.
	gluPerspective(45,ratio,1,1000);

	// Get Back to the Modelview
	glMatrixMode(GL_MODELVIEW);
}




int main(int argc, char ** argv)
{
	 int fillmenu = 0;
	printf("\nenter a message less than ten characters\n--------------------------------------------\n ");
		scanf("%s",E);
		printf("%s",E);//printf("--------------------------------------------\n");
	if(strlen(E)>10)
	{
		printf("\nmessage length exceeded......");
		//main(0,0);
		exit(0);
	}
else {


	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
  	glutInitWindowPosition(0,0);
	glutInitWindowSize(1000,1000);
glutReshapeFunc(changeSize);
	glutCreateWindow("Selective Repeat ARQ");
		glutKeyboardFunc(mykeyboard);
glutMouseFunc(myMouse);
    glutDisplayFunc(display);


	myInit();
  fillmenu = glutCreateMenu(menuSelect);
  glutCreateMenu(menuSelect);
  //glutAddMenuEntry("Back To Main Menu", mainmenu);
  //glutAddSubMenu("safesending", fillmenu);
  //glutAddMenuEntry("packetcrashing",packetcrashing );
 // glutAddMenuEntry("timeou",timeout);
  glutMainLoop();
}

}
