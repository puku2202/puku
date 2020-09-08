#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	/*
	   日本＝JP
	   アメリカ=US
	   ユーロ=EU
	   オーストラリア=AU
	   イギリス=UK

	   a~r 推移用
	   s~z 関数用
	   A~J レート換算
	   K~M*/
	int x, y, u, K, L;
	double v, w, z;
	double jp=10000, us=0, eu=0, au=0, uk=0;
	double chr[5][5];
	char str1[60];//なんか一つずつ消えてくから作っとくやつ
	char str2[60];
	char str3[60];
	char str4[60];
	char str5[60];
	char str6[60];
	srand((unsigned int)time(NULL));
	printf("ルール説明を行います\nあなたは現在円（JP）を10000円保有しています。これから為替レートを見て10回、トレードする機会を与えます。\n最終的に資金を増やせるように頑張ってください。\n");
	printf("為替の交換方法は金額指定と交換前の通貨保有国と交換先の保有国を選択してください\n");
	printf("ただし、通貨を保有していない国の選択とゼロ通貨交換は行えません\n\n");
	printf("※　ちなみに終了後10回目のレートで全て資金を円換算にします。また、売値と買値などのポイントは無視するものとします。\n\n");
	printf("日本＝JP　アメリカ＝US　ユーロ＝EU　オーストラリア=AU イギリス=UK\n");
	printf("入力時は数字で入力してください　   ");
	printf("日本＝1　アメリカ＝2　ユーロ＝3　オーストラリア=4 イギリス=5\n");
	printf("レート表の見方は横軸の単位通貨あたりの換算です　※　例　JP>>USなら一ドルあたりX円\n");
	for(x=1;x<=10;x++){
		printf("\x1b[4m");
		printf("＊＊%d回目＊＊\n",x);
		printf("\x1b[0m");
		double def=1;
		double A, B, C, D, E, F, G, H, I, J;
		double a=100,  b=125,  c=110,  d=140,  e=72,   f=95,   g=130,  h=190;//a JPーUSMIN　b JPーUSMAX　c JPーUSAMIN　d JPーUSMAX　e JPーAUMIN　f JPーAUMAX　g JPーUKMIN　h JP−UKMAX
		double i=1.05, j=1.24, k=0.68, l=0.8,  m=1.2,  n=1.6;//i USーEUMIN　j USーEUMAX　k USーAUMIN　l USーEUMAX　m USーAUMIN　n USーAUMAX
		double o=0.6,  p=0.73, q=1.09, r=1.42;//o EUーAUMIN　p EUーAUMAX　q EUーUKMIN　r EUーUKMAX
		double s=1.62, t=2.18;//s AUーUKMIN　t AUーUKMAX
		A=a+(double)(rand()*(b-a+0)/(1.0+RAND_MAX));
		B=c+(double)(rand()*(d-c+0)/(1.0+RAND_MAX));
		C=e+(double)(rand()*(f-e+0)/(1.0+RAND_MAX));
		D=g+(double)(rand()*(h-g+0)/(1.0+RAND_MAX));
		E=i+(double)(rand()*(j-i+0)/(1.0+RAND_MAX));
		F=k+(double)(rand()*(l-k+0)/(1.0+RAND_MAX));
		G=m+(double)(rand()*(n-m+0)/(1.0+RAND_MAX));            
		H=o+(double)(rand()*(p-o+0)/(1.0+RAND_MAX));
		I=q+(double)(rand()*(r-q+0)/(1.0+RAND_MAX));
		J=s+(double)(rand()*(t-s+0)/(1.0+RAND_MAX));
		sprintf(str1,"JP=%lf,US=%lf,EU=%lf,AU=%lf,UK=%lf",jp,us,eu,au,uk);
		sprintf(str2,"%10lf,|%10lf,|%10lf,|%10lf,|%10lf",def, A  , B  , C  , D  );
		sprintf(str3,"%10lf,|%10lf,|%10lf,|%10lf,|%10lf",1/A, def, E  , F  , G  );
		sprintf(str4,"%10lf,|%10lf,|%10lf,|%10lf,|%10lf",1/B, 1/E, def, H  , I  );
		sprintf(str5,"%10lf,|%10lf,|%10lf,|%10lf,|%10lf",1/C, 1/F, 1/H, def, J  );
		sprintf(str6,"%10lf,|%10lf,|%10lf,|%10lf,|%10lf",1/D, 1/G, 1/I, 1/J, def);
		chr[0][0]=def; chr[0][1]=1/A; chr[0][2]=1/B; chr[0][3]=1/C; chr[0][4]=1/D;
		chr[1][0]=A  ; chr[1][1]=def; chr[1][2]=1/E; chr[1][3]=1/F; chr[1][4]=1/G;
		chr[2][0]=B  ; chr[2][1]=E  ; chr[2][2]=def; chr[2][3]=1/H; chr[2][4]=1/I;
		chr[3][0]=C  ; chr[3][1]=F  ; chr[3][2]=H  ; chr[3][3]=def; chr[3][4]=1/J;
		chr[4][0]=D  ; chr[4][1]=G  ; chr[4][2]=I  ; chr[4][3]=J  ; chr[4][4]=def;
		printf("\x1b[34m");
		printf("現在の所持金は\n");
		printf("\x1b[39m");
		printf("JP=%lf,US=%lf,EU=%lf,AU=%lf,UK=%lf\n\n\n",jp,us,eu,au,uk);
		printf("\x1b[34m");
		printf("レート表\n");
		printf("\x1b[39m");    
		printf("  JP        US          EU          AU          UK\n");
		for(y=1;y<=5;y++){
			switch(y){
				case 1:
					printf("JP>>\n%s\n",str2);
					break;
				case 2:
					printf("US>>\n%s\n",str3);
					break;
				case 3:
					printf("EU>>\n%s\n",str4);
					break;
				case 4:
					printf("AU>>\n%s\n",str5);
					break;
				case 5:
					printf("UK>>\n%s\n",str6);
					break;
			}
			printf("\n\n");
		}
		printf("日本＝1　アメリカ＝2　ユーロ＝3　オーストラリア=4 イギリス=5\n\n\n");
		int flag=0;
		do{
			if(flag==0){
				printf("\x1b[34m");
			}else{
				flag=0;
				printf("\x1b[31m");
			}
			printf("交換前の通貨を選択してください(1~5)\n");
			printf("\x1b[39m");    
			scanf("%d",&u);
			switch(u){
				case 1:
					if(jp==0){
						flag=1;
					}else{
						v=jp;
						L=0;
					}
					break;
				case 2:
					if(us==0){
						flag=1;
					}else{
						v=us;
						L=1;
					}
					break;
				case 3:
					if(eu==0){
						flag=1;
					}else{
						v=eu;
						L=2;
					}
					break;
				case 4:
					if(au==0){
						flag=1;
					}else{
						v=au;
						L=3;
					}
					break;
				case 5:
					if(uk==0){
						flag=1;
					}else{
						v=uk;
						L=4;
					}
					break;
				default :    
					flag=1;
					break;
			}
		}while(flag==1);
		int flag2=0;
		do{
			z=0;
			if(flag2==0){
				printf("\x1b[34m");
			}else{
				flag2=0;
				printf("\x1b[31m");
			}
			flag2=1;
			printf("交換する金額を選択してください\n");
			printf("\x1b[39m");    
			scanf("%lf",&w);
			z=v-w;
		}while(v-w<0||w==0);
		switch(u){
			case 1:
				jp=z;
				break;
			case 2:
				us=z;
				break;
			case 3:
				eu=z;
				break;
			case 4:
				au=z;
				break;
			case 5:
				uk=z;
				break;
			default :
				break;
		}

		int flag3=0;
		do{
			if(flag3==0){
				printf("\x1b[34m");
			}else{
				flag3=0;
				printf("\x1b[31m");
			}
			printf("交換後の通貨を選択してください(1~5)\n");
			printf("\x1b[39m");    
			scanf("%d",&K);
			switch(K){
				case 1:
					jp=jp+w*chr[L][0];
					break;
				case 2:
					us=us+w*chr[L][1];
					break;
				case 3:
					eu=us+w*chr[L][2];
					break;
				case 4:
					au=au+w*chr[L][3];
					break;
				case 5:
					uk=uk+w*chr[L][4];
					break;
				default :
					flag3=1;
					break;
			}
		}while(flag3==1);

		printf("\x1b[36m");
		printf("\n\n現在のレートでの日本円換算は%lf円\n\n",jp+us*chr[1][0]+eu*chr[2][0]+au*chr[3][0]+uk*chr[4][0]);
		printf("\x1b[39m");

		if(x==10){
			jp=jp+us*chr[1][0]+eu*chr[2][0]+au*chr[3][0]+uk*chr[4][0];
		}
		printf("\n\n");
	}
	double M;
	M=jp/100-100;
	printf("\x1b[36m");
	printf("最終金額は%lf円\n",jp);
	printf("\x1b[39m");    
	if(M<0){
		printf("\x1b[31m");
	}else if(M>0){
		printf("\x1b[34m");
	}else{
		printf("\x1b[33m");
	}
	printf("増額は%lf\n",jp-10000);
	printf("増加率は%5.1lf％\n",M);
	printf("\x1b[39m");    

	return EXIT_SUCCESS;
}



