#include<stdio.h>
int main(void){
	int i;
	char str[7]="akashi";
	for(i=0;i<7;i++){
		if(str[i]>=97) str[i]=str[i]-32;
	}  
	printf("%s\n",str);

	return 0;
}

