#include <iostream>
#include "Sales_item.h"

int main()
{	
	Sales_item item1, item2;
	int count = 0;


	while( std::cin >> item1 ){
		count += 1;
	}

	std::cout << "The number of transactins is:  " << count << std::endl;

	return 0;

}