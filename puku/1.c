#include<stdio.h>
int main(void){
	int i,a,b;
	int n[10]={74,87,10, 7,45,49,50,56,57,79};

	a=n[0];
	b=n[0];
	for(i=i;i<10;i++){
		if(a>n[i]) a=n[i];
		if(b<n[i]) b=n[i];
	}
	printf("%2d\n",a);
	printf("%2d\n",b);
}

