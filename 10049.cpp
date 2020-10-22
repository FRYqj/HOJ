//10049
#include <cstdio>
#include <cmath>

int main (){
	int n;
	int sum;
	int temp ;
	scanf ("%d", &n) ;
	getchar();
	for (int h = 0 ; h != n ; h++){
		if(h) printf ("\n");
		//输入四个8位 
		for ( int i = 0 ; i != 4 ; i++){
			sum = 0 ;
			for ( int j = 0 ; j != 8 ; j++){
				temp = getchar() - '0' ;
				if (temp) sum += pow (2,7-j);
			}
			
			if (i) printf (".");
			printf ("%d", sum);
		}
		getchar();
	}
} 
