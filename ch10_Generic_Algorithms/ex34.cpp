#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1 = {1,2,3,4,5,6,7,8};

	for(auto r_iter = v1.crbegin(); r_iter != v1.crend(); ++r_iter)
		cout << *r_iter << " ";
	cout << endl;

	return 0;
}