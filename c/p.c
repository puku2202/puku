#include<stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		for(c=b;c<=b;c=c-1){
			printf("*");		
			}
			printf("\n");
		
	}
	return 0;
}
