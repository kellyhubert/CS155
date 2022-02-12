/**
*this program outputs data on limits of various
*data tpes.
*/

#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(int argc, char **argv){

// character types

printf("\n Data type:charcter type.\n");
printf("minimum value for signed char:%d.\n", SCHAR_MIN);
printf("Maximum value for signed char:%d.\n", SCHAR_MAX);
printf("Minimu value for unsigned char:%d.\n", 0);
printf("Maximum value for unsigned char:%d.\n",UCHAR_MAX);
printf("Minimum value fo char:%d.\n",CHAR_MIN);
printf("Maximum value for char:%d.\n",CHAR_MAX);
printf("Size of signed char:%ld byte.\n",sizeof(signed char));

// intergers
printf("Dta type: Interger.\n");
printf("Minimum value for signed short:%d.\n",SHRT_MIN);
printf("Maximum value for signed short:%d.\n",SHRT_MAX);
printf("Sie of signed short:%ld bytes.\n\n",sizeof(signed short));
printf("Minimum value for unsigned short:%\n",0);
printf("Maximum value for unsigned short:%d\n",USHRT_MAX);
printf("size of unsigned short:%ld bytes\n\n",sizeof(unsigned short));
printf("Minimum value for signed int:%d\n",INT_MIN);
printf("Maximu value for signed int:%d\n",INT_MAX);
printf("Size of signed int:%ld bytes.\n\n", sizeof(signed int));
printf("Minimum value for unsigned int:%D\n",0);
printf("Maximum value of unsiiged int:%d\n",UINT_MAX);
printf("Sizeof unsigne int:%ld. bytes\n\n",sizeof(unsigned int));
printf("Minimum value for signed log:%d\n",LONG_MIN);
printf("Maximum value for signed long:%d.\n",LONG_MAX);
printf("Size of signed long:%ld bytes\n\n",sizeof(signed long));
printf("Minimum value for unsigned long:%d\n",0);
printf("Maximum vaue for unsigned long:%d\n",ULONG_MAX);
printf("Size of unsigned long:%ld bytes\n\n",sizeof(unsigned long));

// floating point types
printf("Data type: floating-point.\n");
printf("size of float:%ld bytes.\n",sizeof(float));
printf("Size of double:%ld\n",sizeof(double));
printf("Size of long double:%ld bytes\n",sizeof(long double));
	
	return 0;
}
