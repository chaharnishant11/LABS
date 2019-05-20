#include <iostream>
#include <graphics.h>
#include <math.h>
#define PI 3.148
using namespace std;

void point(int x, int y, int ox, int oy, int color){
	if(ox+x>=0 && oy-y>=0 && ox+x<getmaxx() && oy-y<getmaxy())
		putpixel(ox+x,oy-y,color);
	else
		cout<<ox+x<<","<<oy-y<<" : Pixel out of bound\n";//display a point x,y with respect to origin at ox,oy
}

void circlePoint(int x, int y, int ox, int oy, int color){
	point(x,-1*y,ox,oy,color);
	point(-1*x,-1*y,ox,oy,color);
	point(x,y,ox,oy,color);
	point(-1*x,y,ox,oy,color);

	point(y,-1*x,ox,oy,color);
	point(y,x,ox,oy,color);
	point(-1*y,-1*x,ox,oy,color);
	point(-1*y,x,ox,oy,color);
}

void drawCircle(int cx, int cy, int radius, int color){
	int x = 0;
	int y = radius;
	double d = 5.0/4.0 - radius;
	circlePoint(x,y,cx,cy,color);
	while(y>x){
		if(d<0){
			d+=2.0*x + 3.0;
		}else{
			d+= 2.0*(x-y) + 5.0;
			y--;
		}
		x++;
		circlePoint(x,y,cx,cy,color);
	}
}

int main()
{
	int gd = DETECT, gn;

	initgraph(&gd,&gn,NULL);
	int X = getmaxx();
	int Y = getmaxy();
	setcolor(WHITE);
	line(0,Y/2,X,Y/2);// x axis
	line(X/2,0,X/2,Y);// y axis
	setcolor(WHITE);
	int x,y,r;
	cout<<"Enter x y r : ";
	cin>>x>>y>>r;
	drawCircle(X/2+x,Y/2-y,r,WHITE);
	//drawCircle(X/2,Y/2,X/8,4);
	getch();
	closegraph();
}
