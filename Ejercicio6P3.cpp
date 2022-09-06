#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector< int> nums;
	nums.push_back(35);
	nums.push_back(98);
	nums.push_back(1248);
	nums.push_back(89544);
	
	int i = 0;
	while (i < nums.size()) {
		cout << nums [i] << endl;
		i++;
	}

}


