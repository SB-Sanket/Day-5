#include<stdio.h>
int main(){
	int n,r,rev=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	int num=n;
	for(;n!=0;n=n/10){
		r=n%10;
		rev=rev*10+r;
	}
	if(rev==num){
		printf("Palindrome number");
	}
	else{
		printf("Not Palindrome number");
	}
	return 0;
}