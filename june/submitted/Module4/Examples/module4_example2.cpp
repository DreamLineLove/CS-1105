#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int t, i, nums[3][4];
	
	for (t = 0; t < 3; ++t) {
		for (i = 0; i < 4; ++i) {
			nums[t][i] = (t*4)+i+1;
			cout << setw(5) << nums[t][i];
		}
		cout << endl;
	}
	
	return 0;
}