#include<stdio.h>
int main(void){
	int m=2,n=7000;
	for(m;;m++){
		while(n%m==0){
			n=n/m;
                	printf("%d\n",m);
        	}
		if(n==1) break;
	}
	
	return 0;
}

