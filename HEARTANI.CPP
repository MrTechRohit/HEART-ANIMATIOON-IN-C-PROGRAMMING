// _________ WELCOME ALL OF YOU ON COMPUTER SOFT SKILLS CHANNEL ___________
//________________ C++ PROGRAMMING TO CREATE HEART ANIMATION ______________

#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int gm,gd=DETECT;
initgraph(&gd,&gm,"c://tc//bgi");

for(int i=0;i<33;i++)
{
cleardevice();
setbkcolor(15);
setcolor(4);
arc(300+i,150,30,200,50);
line(253+i,170,345+i,300);
line(342+i,125,310+i,160);
line(310+i,160,350+i,180);
line(350+i,180,310+i,200);
line(310+i,200,350+i,220);
line(350+i,220,345+i,300);

arc(450-i,150,335,150,50);
line(410-i,300,495-i,170);
line(406-i,125,374-i,160);
line(374-i,160,414-i,180);
line(414-i,180,374-i,200);
line(374-i,200,414-i,220);
line(414-i,220,410-i,300);
delay(100);
}
cleardevice();
setbkcolor(15);
arc(333,150,30,200,50);
line(287,169,378,300);
arc(417,150,335,150,50);
line(377,300,462,170);
setfillstyle(1,12);
floodfill(350,200,4);

setcolor(4);
settextstyle(1,0,1);
outtextxy(200,400,"Created by :- ");
setcolor(1);
outtextxy(200,420,"COMPUTER SOFT SKILLS");
setcolor(6);
outtextxy(200,440,"(ROHIT)");

getch();
}

//____________ I HOPE YOU LIKE THIS PROGRAMMING VIDEO ___________________

//____________ LIKE __________ SHARE __________ SUBSCRIBE __________________
