#include<cstdio>

int a[1010];

int main (){
	int N,M;
while(scanf ("%d %d",&N,&M)!=EOF){

	for( int i = 1; i < N+1 ; i++){
		scanf("%d", &a[i]);
	}
	int start = M % N + 1;
	for (int j = 0; j < 10 ; j++){
		printf("%d",a[start]);
		start++;
		if (start == N+1) start = 1;
	}
	printf("\n");
}
	return 0;
}
