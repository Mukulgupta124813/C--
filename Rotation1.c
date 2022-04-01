#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT,gm;
int x,y,x1,y1,x2,y2;
float t,r;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
printf("\t\tTRIANGLE BEFORE ROTATION\n");
printf("ENTER TRIANGLE AXIS & COORDINATES:-\t");
scanf("%d%d%d%d%d%d",&x,&y,&x1,&y1,&x2,&y2);
printf("TRIANGLE IS\t\t\t") ;
line(x,y,x1,y1);
line(x1,y1,x2,y2);
line(x2,y2,x,y);
printf("ENTER ANGLE OF ROTATION:-\t");
scanf("%f",&r);
t=r*3.14/180;
x=abs(x*cos(t)-y*sin(t));
y=abs(x*sin(t)+y*cos(t));
x1=abs(x1*cos(t)-y1*sin(t));
y1=abs(x1*sin(t)+y1*cos(t));
x2=abs(x2*cos(t)-y2*sin(t));
y2=abs(x2*sin(t)+y2*cos(t));
printf("\t\tTRIANGLE AFTER ROTATION\n");
line(x,y,x1,y1);
line(x1,y1,x2,y2);
line(x2,y2,x,y);
getch();
closegraph();
}

