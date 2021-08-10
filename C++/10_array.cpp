#include <iomanip>
#include <iostream>
using namespace std;
using std::setw; 

int main(){
int A [10]; // Array size Declaration

	for(int i = 0; i < 10; i++){
		A[i]=i+1000; // Storing value
	}
cout<<setw(5)<<"Index"<<setw(15)<<"Elements"<<endl;

	for(int j = 0; j < 10; j++){
	cout<<setw(5)<<j<<setw(15)<<A[j]<<endl; // Printing Value
	}

return 0;
}


