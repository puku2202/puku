#include<stdio.h>
int main(void)
{	
	int a;
	int b;
	printf("数を入れよ\n");
	scanf("%d",&a);
	if(a%2==0){
		printf("%d\n",(a/2)*(a/2));
		printf("%d\n",(a+2)*a/4);
	}else{
		printf("%d\n",(a+1)/2*(a+1)/2);
		printf("%d\n",(a+1)*(a-1)/4);
	}
	
	printf("わかるはずがない　知るかボケ 何やねん  むかつく ダボ アホ ボケ カス ダボ");

	return 0;
}
