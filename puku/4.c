#include<stdio.h>
#include<math.h>
#define f(x) (x*x*x)
int main(void){
	int i,n=1000;
	float x1, x2,h, a=0.0;
	h=1.0/n;
	for(i=0;i<n;i++){
		x1=h*(i);
		x2=h*(i+1);
		a+=0.5*h*(f(x1)+f(x2));
	}  
	printf("%4.2f\n",a);

	return 0;
}

