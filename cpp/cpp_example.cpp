#include <iostream>
#include <string>
#include <vector>


using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;



int main() 
{
	int v1 [10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int v2 [10];
	
	int j;

	for(int i = 0; i <= v1.size(); i++){

		v2.push_back(v1[i]);

		cout << "Elements of v2 on " << i " is " << v2[i] << endl;

	}
	
	

	return 0;
}