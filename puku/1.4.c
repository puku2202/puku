#include<stdio.h>
int main(void){
	int i, j,a[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			a[i][j]=(i*3)+(j+1);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%2d",a[j][i]);
		}
	printf("\n");
	}
	return 0;
}

