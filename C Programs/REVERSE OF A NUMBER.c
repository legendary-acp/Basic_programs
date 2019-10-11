/*Program to find reverse of a number*/
#include<stdio.h>
int main(){
	long long N;
	scanf("%lld",&N);
	printf("THE REVERSED NUMBER IS :");
	while(N>0){
		printf("%d",N%10);
		N/=10;
	}
}
