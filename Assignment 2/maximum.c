#include <stdio.h>
int main(){
	int a,b,c;
	printf("\nEnter three numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	
	int max=a>b?(a>c?a:c):(b>c?b:c);
	
	printf("\nMaximum : %d",max);	
}
