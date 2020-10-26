//10010
#include<cstdio>
int a[500005];
bool flag[100010000]={false};

int main (){
	int k;
	a[0]=0;
	for (int i = 1 ; i != 500001 ; i++){
			if(a[i-1]-i>0 && !flag[a[i-1]-i])
        	a[i] = a[i-1]-i;
        	else
        	a[i] = a[i-1]+i;
       		flag[a[i]] = true;
	}
	while ( scanf ("%d", &k), k != -1){
		
		printf("%d\n",a[k]);
	}
	return 0;
}
