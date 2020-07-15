#include <iostream>
using namespace std;

int main() {

	int v1 = 50, v2 = 100, sum = 0;

	while (v1 < v2){

		sum += v1;
		++v1;
	}

	cout << "The sum from 50 to 100 is: " << sum << endl;

	return 0; 
}