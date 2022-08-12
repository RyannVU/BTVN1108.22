#include<stdio.h>
#include <math.h>
int n;
int inputNumber()
{
	printf("\nEnter a Integer: ");
	scanf("%d", &n);
	printf("%d",n );
}
void checkNumber()
{
	if(n<2){
		printf("\n%d not a Prime",n);
	}
	int count = 0;
	for(int i =2; i<= sqrt(n); i++){
		if(n%i == 0){
			count++;
		}
	}
	if(count == 0){
		printf("\n%d is a Prime", n);
	}else{
		printf("\n%d not a Prime",n);
	}
	
	
}


int main()
{

	inputNumber();
	checkNumber();
	return 0;
}
