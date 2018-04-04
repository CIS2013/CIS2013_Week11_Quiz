#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int rows;
	int cols;
	
	cout << "Number or rows: ";
	cin >> rows;
	cout << endl;
	
	int *multi_array = new int[rows];
	
	for( int i=0; i<rows;i++){
		cout << "Number of computers on row " << i << ": ";
		cin >> cols;
		multi_array[i] = new int[cols];
	}
}