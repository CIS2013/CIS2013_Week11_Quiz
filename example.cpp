#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int rows;
	int *cols;
	int *multi_array;
	
	cout << "Number or rows: ";
	cin >> rows;
	cout << endl;
	
	cols = new int[rows];
	
	for( int i=0; i<rows;i++){
		int tmp;
		cout << "Number of computers on row " << i << ": ";
		cin >> tmp;
		cols[i] = tmp;
		multi_array[i] = new int*[tmp];
	}
	
	for(int x=0;x<rows;x++){
		cout << "Row " << x;
		for(int y=0; y<cols[x]; y++){
			cout << " " << "---";
		}
		cout << endl;
	}
	
	return 0;
}