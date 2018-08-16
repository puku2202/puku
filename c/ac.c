#include<stdio.h>
int main(void)
{	
	int flag=0;
	long int i;
	long int a;
	long int b;
	scanf("%ld\n",&a);

	if(a==0||a==1){
		printf("no");
	}else{
		for(b=2;b<=a;b++){
			for(i=2;i<b;i++){
		if(b%i==0){	
			flag=1;
		}
				}	
	if(flag==0){
		printf("%ld\n",b);
	}
	flag=0;
	}}
	return 0;
}
