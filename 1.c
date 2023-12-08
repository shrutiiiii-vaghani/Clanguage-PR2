#include<stdio.h>

main(){
	
	int a;
	printf("Enter a no:");
	scanf("%d",&a);
	
	(a % 2 == 0)?printf("This number is Even.")	:printf("This number is Odd.");
	
	return 0;
}
