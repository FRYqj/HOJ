//10015
#include<cstdio>

int flag[10000] = {0};

const int max = 10000;

int main (){
	//int temp ;
	int tempi ;
	int flag1 ;
	int tempi2 ;
	for (int i = 1 , temp; i != max ; i++){
		flag1 = 1;
		temp = i;
		while (flag1){
			tempi = temp;
			tempi2 = temp;
			temp = 0;
			while (tempi){
				temp += tempi%10; 
				tempi /= 10;
			}
			temp += tempi2;
			if ( temp >= max || flag[temp] == 1) flag1 = 0 ;
			else flag[temp] = 1;
			
			//printf("%d\n",temp);
		}
	}
	printf("1");
	for (int j = 3 ; j != max ; j++){
		if(flag[j] == 0) printf("\n%d",j);
	}
} 
