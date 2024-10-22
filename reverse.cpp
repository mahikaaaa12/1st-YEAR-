#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int rev=0;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("The reverse number is:");
	while(n>0){
		rev=n%10;
		printf("%d",rev);
		n=n/10;
	}
	return 0;
}
