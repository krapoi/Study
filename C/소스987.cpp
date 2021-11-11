#include <stdio.h>
#include <math.h>
typedef struct Point {
	int x, y;
}P;

int main() {
	P p1, p2;
	p1.x = 30;
	p1.y = 20;
	p2.x = 60;
	p2.y = 50;
	int pointx;
	int pointy;
	pointx = p2.x - p1.x;
	pointy = p2.y - p1.y;
	double sol = pow(pointx, 2) + pow(pointy, 2);
	printf("%lf", sqrt(sol));
}