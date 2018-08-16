#include<stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	int flag=0;
	scanf("%d",&a);
	printf("%d",(a*a+a)/2);
        int v[];
	if(a==1||a==0){
		printf("no");
	}else{
		printf("%d",2);
		
		for(b=3;b<=a;b=b+2){
			if(b%v[]==0){
				flag=1;
				}else{
				for(c=3;c<b;c=c+2){
				
					if(b%c==0){
						flag=1;
					}
					if(flag=0){
						int v []={b};
						printf("%d",b);
					}
				}
			}	
		flag=0;
		}
	}

	return 0;
}	
