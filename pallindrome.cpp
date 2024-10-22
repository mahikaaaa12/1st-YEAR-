#include<stdio.h>
#include<conio.h>
int main()
{
	int n,org,rem;
	int rev=0;
	printf("Enter a number:");
	scanf("%d",&n);
	org=n;
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(org==rev){
		printf("The number is pallindrome number");
	}
	else{
		printf("The number is not pallindrome number");
	}
	return 0;
}
