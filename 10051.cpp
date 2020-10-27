//10051

#include<cstdio>

int main (){
	int n ;
	int sum;
	int i;
	printf("PERFECTION OUTPUT\n");
	while(scanf("%d", &n), n!=0){
		printf("%5d  ",n);
		if(n==1){
			printf("DEFICIENT\n");
			continue;
		}
		sum = 1;	//包含1不包含n本身 
		for( i = 2 ; i*i < n; i++){
			if(n%i==0){
				sum += i;
				sum += n/i;
			}
			//
			//printf("sum=%d\n",sum);
		}
		if(i*i==n)sum+=i;
		//
		//printf("sum=%d\n",sum);
		if (sum>n)printf("ABUNDANT\n");
		if (sum==n)printf("PERFECT\n");
		if (sum<n)printf("DEFICIENT\n");
	}
	printf("END OF OUTPUT");
} 
