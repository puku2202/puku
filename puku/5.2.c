#include<stdio.h>
#include<math.h>
int main(){
	double a[100], b, h, k;
	int c, i, j;
    	printf("入力せんかい\n");
	for(c=0;c<100;c++) scanf("%lf",&a[c]);
	k=a[0];
        b=fabs(a[0]-50.05);
	for(i=0;i<100;i++){
		h=h+a[i];
		if(a[i]<=50.00||a[i]>=50.10){
			j=j+1;
		}
		if(b<fabs(a[i]-50.05)){
			b=fabs(a[i]-50.05);
			k=a[i];
		}
	}
	printf("平均%lf\n",h/100);
	printf("不良品%d％\n",j);
	printf("最もアホ%lf\n",k);
	return 0;
}
