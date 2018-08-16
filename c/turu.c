#include<stdio.h>
int main(void)
{
	int flag=0;
	long int i;
	long int b;
	long int c;
	long int a;
	long int k;
	scanf("%ld",&c);
	a=(0+c)*(c-0+1)/2;
	if(c==0||c==1){
		printf("no");
	}else{
		for(b=2;b<=a;b++){
			for(i=2;i<b/2;i++){
				if(b%i==0){
					flag=1;
					}
				}
					if(flag==0){
						printf("%ld",b);
						}
						flag=0;
			}
		}
	return 0;
}
					


