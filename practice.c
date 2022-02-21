#include<stdlib.h>
#include<stdio.h>
#include<math.h>
double euclideanDistance(double x1, double y1, double x2, double y2);
int main(int argc,char **argv){
if(argc!=5){
	printf("Usage:%s x1 y1 x2 y2",argv[0]);
	exit(1);
}
double x1,y1,x2,y2;
 x1=atof(argv[1]);
 y1=atof(argv[2]);
 x2=atof(argv[3]);
 y2=atof(argv[4]);

double dist=euclideanDistance(x1, y1, x2, y2);
printf("the distance from(%lf,%lf)to(%lf,%lf) is %lf\n",x1,y1,x2,y2,dist);

return 0;
}
double euclideanDistance(double x1,double y1,double x2, double y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
