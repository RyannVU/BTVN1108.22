#include <stdio.h>

int power(int a , int n)
{
	int result = 1;
	
	while(n--) //n se giam den 0 thi vong lap ket thuc
	{
		result = result * a;
	}
	return result;
}
	

int main()

{
	int n,a,r ;
	printf("\nEnter a number 'a':  ");
	scanf("%d", &a);
	printf("\nEnter a number 'n':  ");
	scanf("%d", &n);
	r = power(a,n);
	printf("%.1d^%d = %.1d", a,n,r);
	
}
