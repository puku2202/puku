#include<stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	for(a=1;a<=13;a++){
		b=198-a*a;
		for(c=0;c<=b;c++){
			printf("%d",0);
		}
		printf("%d",1);
		for(d=1;d<=189-a*a;d++){
			printf("%d\n",0);
		}
	}
}

