//10022
#include<iostream>
using namespace std ;

int main (){
	int distance, mileages = 0 ;
	int flag = 0 ;
	char category;
	string name1 , name2 ;
	cin >> name1 ;
	while ( name1[0] != '#'){
		while( name1[0] != '0'){
			cin >> name2 >> distance >> category ;
			if ( category == 'F') distance *= 2;
			if ( category == 'B'){
				 distance = distance + (distance + 1)/2 ;
			}
			if ( distance < 500 && category == 'Y') distance = 500 ;
			mileages += distance ;
			cin >> name1 ;
		}
		
		cout << mileages <<endl;
		mileages = 0 ;
		
		flag = 1 ;
		cin >> name1 ;
	}
}
