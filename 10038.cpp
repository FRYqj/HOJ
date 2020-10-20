//10038
#include <cstdio>
#include <cmath>

int main (){
	int A = 1;
	int i ;
	int temp ;
	while(A){
		scanf("%d", &A);
		if(!A)break;
		temp = A;
		for ( i = 0 ;  temp ; i++){
			if (temp%2){
				i = -1;
				break;
			}
			if ( (temp - pow(2,i+1) ) < 0 ){
				temp = temp - pow(2,i);
				i = 0;
				//printf ("%d\n", temp);
			}
			if( (temp - pow(2,i+1) ) == 0 )break;
		}
		i = pow(2,i+1);
		printf ("%d\n",i);
	}
}
