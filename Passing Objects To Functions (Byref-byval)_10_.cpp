
#include <iostream>
using namespace std;
class clsA {
public:
	int x;
	void Print() {
		cout << "the value of x =" << x << endl;
	}
};
	// by value:
	void Fun1(clsA A1) {
		A1.x = 100;
	} // reference:
	void Fun2(clsA& A1) {
		A1.x = 200;
	}

int main() {
	clsA A1;
	A1.x = 50;
	cout << "\nA.x before calling function1: \n";
	A1.Print();
	// by value:
	Fun1(A1);
	cout << "\nA.x after callling function1 byval: \n";
	A1.Print(); 
	// by reference:
	Fun2(A1);
	cout << "\nA.x after calling fun 2 by ref\n";
	A1.Print(); 
	system("pause>0");
	return 0;


}