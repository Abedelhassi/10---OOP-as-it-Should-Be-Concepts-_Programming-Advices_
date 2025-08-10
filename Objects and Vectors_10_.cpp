#include<iostream>
#include<vector>
using namespace std;
class clsA {
public:
	// constructor para :
	clsA(int value) {
		x = value;
	}
	int x;
	void Print() {
		cout << "the value of x =" << x << endl;
	}
};
int main() {
	vector<clsA> v1;
	short NumberOfObjects = 5;
	// inserting object at the end of vector:
	for (int i = 0; i < NumberOfObjects; i++) {
		v1.push_back(clsA(i));
	}
	// print :
	for (int i = 0; i < NumberOfObjects; i++) {
		v1[i].Print();

	}
	system("pause>0");
	return 0;
}