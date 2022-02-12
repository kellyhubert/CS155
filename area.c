/**
 * this program prompts the user to enter
 * the base and the height of a triangle and  computes
 * its area using a well known formula
 */
 #include<stdlib.h>
 #include<stdio.h>
 #include<math.h>

 int main(int argc, char **argv){

     int base, height;
     printf("Enter the base of triangle:");
     scanf("%d",&base);
      printf("Enter the height of triangle:");
     scanf("%d",&height);

     int area= (base * height)*1/2;
     printf("The area of a triangle is %d",area);

     return 0;
 }
