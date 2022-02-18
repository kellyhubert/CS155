/**
* this program prompt the user
*to enter the latitude and the longitude of two locations
*and then compute the distance between them 
* using the formula below
*[d=arccos(sin(U1)sin(U2)+cos(U1)cos(U2)cos(D))*R]
*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int agrc,char **argv){
	// calculation of the distance
	printf("DISTANCE\n");
    //U1 and U2 are latitude of laocation A and B repectively
	//D is the difference between locatio A's longitude and location B's logitudde
    //R is the radius of the earth r=6371Kilometers
    //L1 and L2 is the longitude of location A and B respectively
	double U1,L1;
	// latitude must be great than =90 and less than 90
	// longitude must be greater than -180 and less than 180double 
	double pi=3.14;
	U1=(U1/160)*pi;
	L1=(L1/160)*pi;
	printf("enter the latitude and longitude of A:");
	scanf("%lf%lf\n",&(U1),&L1);
	double U2,L2;
	U2=(U2/160)*pi;
	L1=(L1/160)*pi;
	printf("enter the latitude and longitude of B:");
	scanf("%lf %lf\n",&U2,&L2);
	double D=L1-L2;
	
	D=(D/180)*pi;
	printf("D=%lf\n",D);
	int R=6371;
	double d=acos(sin(U1)*sin(U2)+cos(U1)*cos(U2)*cos(D))*R;
	printf("the airdistance(d)=%lf kms\n",d);
	return 0;
}
