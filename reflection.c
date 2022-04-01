#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT,gm;
int x,y,x1,y1,x2,y2,a;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
printf("\t\tTRIANGLE BEFORE AXIS ROTATION\n");
printf("ENTER TRIANGLE AXIS & COORDINATES:-\t");
scanf("%d%d%d%d%d%d",&x,&y,&x1,&y1,&x2,&y2);
line(x,y,x1,y1);
line(x1,y1,x2,y2);
line(x2,y2,x,y);
line(320,0,320,420);
line(0,240,640,240);
printf("ENTER 1 FOR X AXIS & 0 FOR Y AXIS ROTATION");
printf("ENTER AXIS OF ROTATION :-\t");
scanf("%d",&a);
if(a==0)
{line(x,y+240,x1,y1+240);
line(x1,y1+240,x2,y2+240);
line(x2,y2+240,x,y+240);}
else if(a==1)
{line(x+320,y,x1+320,y1);
line(x1+320,y1,x2+320,y2);
line(x2+320,y2,x+320,y);}
else{printf("WRONG CHOICE");}
printf("\t\tTRIANGLE AFTER AXIS ROTATION\n");
getch();closegraph();}

