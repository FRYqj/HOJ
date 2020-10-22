//10019
#include<cstdio>
#include<algorithm>
using namespace std;

int card[60];

int main (){
	int n , m;
	int max,result,temp;
	int caseNum = 0;
	while ( scanf("%d %d", &n, &m),n ){
		caseNum++;
		for (int i = 0 ; i != m ; i++){
			scanf("%d", &card[i]);
		}
		sort (card,card+m);
		max = n*m;
		result = 0;
		temp = 0;
		for (int j = m-1 ; j != -1 ; max--){
			if (card[j]==max) {
				temp++;
				j--;
			}
			else temp--;
			if (temp > result) result = temp;
			
		}
		if(result < 0) result = 0 ;
		if(caseNum != 1) printf("\n");
		printf("Case %d: %d", caseNum, result);
	}
	return 0 ;
}
