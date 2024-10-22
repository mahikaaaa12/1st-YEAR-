#include<stdio.h>
#include<conio.h>
int main()
{
	int n,org;
	int rem=0;
	int sp=0;
	printf("Enter the number:");
	scanf("%d",&n);
	org=n;
	while(n>0){
		rem=n%10;
		sp+=rem*rem*rem;
		n=n/10;
	}
	if(org==sp){
		printf("The number is Armstrong number");
	}
	else{
		printf("The number is not Armstrong number");
	}
	return 0;
}
