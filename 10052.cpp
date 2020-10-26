//10052
#include <cstdio>
#include <cmath>

int main (){
	int S, N;
	scanf ("%d", &S);
	int big = sqrt (S);
	int temp;
	for (int i = big ;  ; i++){
		temp = i*(i+1)/2;
		big = i;
		if(temp >=S && (temp-S)%2 == 0) break;
	}
	

		
	printf("%d",big);
}
