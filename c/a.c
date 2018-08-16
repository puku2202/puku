#include<stdio.h>
#include<math.h>

int  main(void) {
	for(int c=0; c<5; c++) {
		printf("%dnorutoha%Lf\n",c+1,sqrtl(c+1));
	}
	return 0;
}

