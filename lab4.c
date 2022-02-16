
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    fprintf(stderr, "Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1]);
  int i;
  // A simple for loop that prints 0 thru 9  
  for(i=0; i<10; i++) {
    printf("%d\n", i);
  }
  
  //1. Rewrite the given for loop as an equivalent while loop
  for(i=10; i<20; i+=3) {
    printf("%d ", i);    
  }
  printf("\n");
  int r=10;
  while(r<20){
  	printf("%d ",r);
  		i+=3;
  }
  printf("\n");

  //2. Rewrite the given while loop as an equivalent for loop
  int k = 3;
  while(k > -4) {
    printf("%d ", k);
    k--;
  }
  printf("\n");
  for(k=3; k>-4; k--) {
    printf("%d ", i);
  }
  //3. Print numbers 1 thru n separated by a comma except for
  //   the last one; example: 1, 2, 3, 4, 5
  int t;
  for(t=1; t<=15; t++){
  	printf("%d,",t);
  }
   printf("%d\n",t);
  //4. Print squares of numbers 1 thru n separated by a comma 
  //   except for the last one; example: 1, 4, 9, 16, 25
  int y, square;
  for(y=1;y<=10;y++){
  	printf("%d,",square);
  	square=y*y;
  } 
    printf("%d");
  //5. Compute the summation of numbers 1 thru n and print
  //   the result; example: 1 + 2 + 3 + 4 + 5 = 15
  int sum=0;
  for(i=1;i<=25; i++){
  	printf("%d, ",sum);
  	sum+=i;
  }
  printf("%d\n",sum);
  
  //6. Compute the summation of squares of numbers 1 thru n
  //   and print the result; example: 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55
  int total=0;
  for(i=1;i<=n;i++){
  	int power=pow(i,i);
  	printf("%d^2=%d, ",i,total);
  	total+=power;
  }
  //7. Compute the summation of even numbers 1 thru n and print 
  //   the result; example (n=5): 2 + 4 = 6
  for(i=2;i<=10;i+=2){
  	int result=0;
  	printf("%d+",i);
  	printf("=%d\n",result);
  	result+=i;
  }
  //8. Write a solution to the following variation of the FizzBuzz
  //   problem.  Pring out integers 1 thru n, one to a line, except
  //   that if the integer is divisible by 7 print "Foo" instead.
  //   If the integer is divisible by 11 print "Bar" instead.  If
  //   the integer is divisible by both 7 and 11, print "FooBar"
  //   instead.
  for(i=1;i<=150;i++){
  	if(i%7==0 && i%11==0){
  		printf("foobar\n");
	  }
	else if(i%7==0){
		printf("foo\n");
	}  
	else if(i%11==0){
		printf("bar\n");
	}
	else{
		printf("%d\n",i);
	}
  }
  return 0;
}
