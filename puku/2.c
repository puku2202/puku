#include<stdio.h>
int main(void){
	int i,j;
	int a[9][3];
	for(j=0;j<3;j++){
		for(i=0;i<9;i++){
			a[i][j]=(i+1)*(j+1);
		}
	}  
	for(j=0;j<3;j++){
        	for(i=0;i<9;i++){
                	printf("%3d",a[i][j]);
        	}
		printf("\n");
	}
	
	return 0;
}

