#include <iostream>
#include <string>
using namespace std;
int main () {
	int N ;
	cin >> N ;
	int personalPoint, classPoint, paperNum, maxNum = 0, sum = 0, personalSum;
	char isCadre, isWesterner;
	string name, maxName;
	for (int i = 0 ; i != N ; i++){
		cin >> name >> personalPoint >> classPoint >> isCadre >> isWesterner >> paperNum ;
		personalSum = 0 ;
		if (personalPoint > 80 && paperNum > 0 ) personalSum += 8000 ;
		if (personalPoint > 85 && classPoint > 80) personalSum += 4000 ;
		if (personalPoint > 90 ) personalSum += 2000 ;
		if (personalPoint > 85 && isWesterner == 'Y') personalSum += 1000 ;
		if (classPoint > 80 && isCadre == 'Y') personalSum += 850 ;
		
		if (personalSum > maxNum){
			maxNum = personalSum ;
			maxName = name ;
		}
		sum += personalSum ;
	}
	
	cout << maxName << endl << maxNum  << endl << sum ;
	return 0 ;
}
