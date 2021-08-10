#include <iostream>
using namespace std;

int main(){

int rows, number = 1;
cout<<"Enter Rows: ";
cin>>rows;
/*
		Assending half pyramid:-

	for(int i = 1; i<=10; i++){
		for(int j = 1; j<=i; j++){
			cout<<j;
		}
	cout<<"\n";
	}

*/

/*
		Decending half pyramid:-

	for(int i = rows; i>=1; --i){
		for(int j=1; j<=i; j++){
		cout<<"* ";
		}
	cout<<"\n";
	}
*/

	for(int i = 1; i<=rows; i++){
		for(int j = 1; j<=i; j++){
		//number++;
		cout<<number;
		++number;
		}
	cout<<endl;
	}
return 0;
}


