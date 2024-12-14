#include <iostream>
#include <vector>
#include <iterator>

int main()
{
	std::vector<int> myVector = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int>::iterator itStart = myVector.begin();
	std::vector<int>::iterator itCurrent = myVector.begin();
	while(*itCurrent != 8)
	{
		itCurrent++;
	}
	std::cout << std::distance(itStart, itCurrent);

	return 0;
}