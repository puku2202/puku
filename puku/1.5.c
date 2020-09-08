#include<stdio.h>
#include<math.h>
int main(){
	int i, j;
	double x[20],y[20],a,b,s;
	printf("入力");
	for(i=0;i<20;i++){	
		scanf("%lf%lf",&x[i],&y[i]);
		a+=x[i]*y[i];
		b+=pow(x[i],2);
	}
	printf("傾き%lf",a/b);
	for(j=1;j<=20;j++){
		s+=pow(a*x[j]/b-y[j],2);
	}
	printf("標準偏差%lf\n",sqrt(s/20));
	return 0;
}
