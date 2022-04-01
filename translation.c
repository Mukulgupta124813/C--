#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{ int gd=DETECT,gm;
int x,y,x1,y1,tx,ty,x2,y2;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
printf("\t\tBEFORE TRANSLATION\n");
printf("ENTER TRIANGLE AXIS & COORDINATES:-\t");
scanf("%d%d%d%d%d%d",&x,&y,&x1,&y1,&x2,&y2);
printf("TRIANGLE IS\n") ;
line(x,y,x1,y1);
line(x1,y1,x2,y2);
line(x2,y2,x,y);
printf("\n\n\n\n\n\n\n\n\n\nENTER TRANSLATION COORDINATES:-\t");
scanf("%d%d",&tx, &ty);
x=x+tx;
y=y+ty;
x1=x1+tx;
y1=y1+ty;
x2=x2+tx;
y2=y2+ty;
printf("\t\tAFTER TRANSLATION\n");
printf("TRIANLE IS\n");
line(x,y,x1,y1);
line(x1,y1,x2,y2);
line(x2,y2,x,y);
getch();
closegraph();
}



