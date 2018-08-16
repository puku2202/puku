#include<stdio.h>
#include<math.h>
int main(void)
{
	int a=0;
	int x=0;
	int y=0;
	int i;
	for(i=0;i<=3;i=i+1){
		scanf("%d",&a);
		if(a%2==0){
			x=x+a;
		}else{
			y=y+a;	
	
		}	
	}	
	printf("(%d,%d)",x,y);
	printf("%d",x*y/2);	
	printf("%f",sqrt(x*x+y*y));
	return 0;
}


