//Author Peter Adamson

#include <stdio.h>
#include <math.h>

int main(){
	int value;
	printf("Enter a positive integer: ");
	scanf("%d",&value);

	int previous = 0;
	int result = 1;
	int fib = 0;
	int count = 1;
	if(value==previous || value==result){
		printf("%d is a fibonacci number\n",value);
	}
	else
	{
		while(fib<value){
			fib=result+previous;
			previous=result;
			result=fib;
			count = count + 1;
		}
	}
	if(fib==value){
		printf("%d is a fibonacci number\n",value);
	}
	else{
		int count2 = count -1;
		printf("%d is not a fibonacci number\n",value);
		printf("It is between fib(%d) = %d and fib(%d) = %d\n",count2,previous,count,fib);
	}
}
