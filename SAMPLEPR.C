/*PRABHAKAR POUDEL*/
/*ACE078BEI034*/

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
int main() {
int err;
int gd= DETECT,gm;
int midx, y, radius = 5;
int k = 0, stangle, endangle;
initgraph(&gd,&gm, "C:\\TURBOC3\\BGI");
err = graphresult();
if (err != grOk) {
printf("Graphics Error: %s\n",
grapherrormsg(err));
getch();
return 0;
}
midx = getmaxx() / 2;
y = (3 * getmaxy()) / 4;
stangle = 120;
endangle = 200;
while (!kbhit()) {
k = 0, radius = 5;
cleardevice();
line(midx - 50, getmaxy(), midx, y);
line(midx + 50, getmaxy(), midx, y);
line(midx - 25, getmaxy(), midx, y);
line(midx + 25, getmaxy(), midx, y);
line(midx - 45, getmaxy() - 10, midx + 45, getmaxy() - 10);
line(midx - 30, getmaxy() - 50, midx + 30, getmaxy() - 50);
line(midx - 16, getmaxy() - 80, midx + 16, getmaxy() - 80);
while (k < 18) {
arc(midx, y, stangle, endangle, radius);
arc(midx, y, 0, 60, radius);
arc(midx, y, 340, 360, radius);
radius = radius + 15;
delay(50);
k++;
}
}
getch();
closegraph();
return 0;
}