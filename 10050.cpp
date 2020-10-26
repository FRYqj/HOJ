//10050
#include <cstdio>
#include <cmath>

int a[3000];
bool b[3000] = {false};

int main (){
	int n ;
	int flag;
	int abs;
	while (scanf ("%d", &n) != EOF){
		flag = 1;
		if (n <= 0){
			printf ("Not jolly");
			continue ;
		}
		scanf ("%d", &a[1]);
		for (int i = 2 ; i < n+1 ; i++){
			scanf ("%d", &a[i]);
			if (a[i]>a[i-1]) abs = a[i]-a[i-1];
			else abs = a[i-1]-a[i];
			if (abs>(n-1)||a[i]==a[i-1]) {
				flag = 0;
			}else b[abs] = true ;
		}
		for(int j = 1 ; j < n ; j++){
			if (b[j] == false){
				flag = 0;
				break;
			}
		}
		if (flag)printf ("Jolly\n");
		else printf ("Not jolly\n");
	}
	return 0 ;
} 

