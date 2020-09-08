#include<stdio.h>
int main(){
	int a,i,h=1;
	do{
		printf("入力せんかい");
		scanf("%d",&a);
	}while(a>12);
	for(i=1;i<=a;i++){
		h=h*i;
	}
	printf("%d\n",h);

	return 0;
}
