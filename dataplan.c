#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc,char **argv){
	int NumberOfGbInPlan=atoi(argv[3]);
	int TotalNumberOfGbUsed=atoi(argv[1]);
	int DaysUsed=atoi(argv[2]);
	int DaysRemaining=30-DaysUsed;
	int RemainingGb=NumberOfGbInPlan-TotalNumberOfGbUsed;
	
	printf("NumberOfGbInPlan:");
	scanf("%d\n",&NumberOfGbInPlan);
	printf("TotalNumberOfGbUsed:");
	scanf("%d\n",&TotalNumberOfGbUsed);
	printf("DaysUsed:");
	scanf("%d",&DaysUsed);
	printf("%dDaysRemaining\n",DaysRemaining);
	
	double AverageOfGbPerMonth= NumberOfGbInPlan/30;
	double AverageOfGbPerDay=TotalNumberOfGbUsed/DaysUsed;
	double ExceededData=(AverageOfGbPerDay*30)-NumberOfGbInPlan;
	double NormalData=RemainingGb/DaysRemaining;
	
	printf("AverageOfGbPerMonth=%d\n",AverageOfGbPerMonth);
	printf("AverageOfGbPerDay=%d\n",AverageOfGbPerDay);
	if(AverageOfGbPerDay>AverageOfGbPerMonth){
	printf("You are exceeding your average daily use %lf,You will exceed your data plan by %lf",AverageOfGbPerMonth,ExceededData);
	exit(0);
	}
		printf("\nTo stay below your data plan, use no more than %lf GB/day",NormalData);
	return 0;
}
