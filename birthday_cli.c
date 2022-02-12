/**

*this program reads in comand line arguments
*of the user's name and birthday and computes
* how old they are
*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<time.h>

int main(int argc, char **argv){
	
	if(argc!=5){
		printf("ERROR:invalid number of command line inputs\n");
		printf("      usage: birthday FIRSTNAME YEAR MONTH DAY\n");
		exit(1);
	}
	
	char name[100];
	
	strcpy(name,argv[1]);
	int year =atoi(argv[2]);
	int month= atoi(argv[3]);
	int day= atoi(argv[4]);
	// tip: atoi converts alphanumeric to an integer
	// atof converts alphanueric to a double
	
	char str[100];
	time_t now= time(NULL);
	struct tm *ptrNow;
	struct tm bday;
	bday.tm_mday=day;
	bday.tm_mon= month -1;
	// tm_year iss the number of years since 1900, so correcting
	bday.tm_year= year-1900;
	bday.tm_sec=0;
	bday.tm_min=0;
	bday.tm_hour=0;
	bday.tm_isdst -1;// let the system determine DST or not
	ptrNow= localtime(&now);
	strftime(str,80,"%y/%m/%d",&bday);
	printf("to day is %s\n",str);
	strftime(str,80,"%y/%m/%d",&bday);
	printf("your birthday was %s\n",str);
	
	time_t bdayT= mktime(&bday);
	double diff= difftime(now,bdayT);
	
	int years =(int) (diff/(double) (365.25*24*60*60));
	diff -=years*(365.25*24*60*60);
	int days= diff/(24*60*60);
	int weeks =days/7;
	days +days%7;
	
	printf("Hello,%s. you are %d years , %d weeks, and %d dats old to day.\n",name, years,weeks,days);
	return 0;
}
