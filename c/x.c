#include<stdio.h>
int main(void)
{
	int flag=0;
	long int a;
	long int b;
	long int c;
	long int d;
	scanf("%ld",&a);
	printf("%ld\n",(a*a+a)/2);
	d=(a*a+a)/2;
	if(a==0||a==1){
		printf("no");
	}else{
		printf("%d\n",2);
		for(b=3;b<=d;b=b+2){
			if(b%3==0){
				flag=1;
				}else{
			for(c=3;c<=b/2;c=c+2){
				
				if(b%c==0){
					flag=1;
					}
				}
			}
								
			if(flag==0){
		
				printf("%ld\n",b);
				}	
			flag=0;	
		
	}
	}

	return 0;
}

