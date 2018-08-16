#include<stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	for(a=13;a>=1;a=a-1){
		b=a*a-1;
		for(c=1;c<=b;c++){
			printf("%d",0);
		}
		printf("%d",1);
		d=187-a*a;
		for(e=1;e<=d;e++){
			printf("%d",0);
		}	
		printf("%d\n",0);	
	}	
	
	return 0;
}
