#include <iostream>
#include <vector>
#include <array>

using std::vector;
using std::array;
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::swap;


int main() {

	//using two pointers

	vector<int> A = {3,1,2,4};

	int i = 0;
	int j = A.size() - 1;


	while(i < j){

		if( A[i]%2 !=0 && A[j]%2 == 0){

			swap(A[i], A[j]);

			i++;
			j--;
		}
		else if( A[i]%2 == 0){

			i++;
		}
		else if( A[j]%2 != 0){

			j--;
		}
	}

return A;

}