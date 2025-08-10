
#include <iostream>
using namespace std;
// rchwa bach tchouf private mumbers
class clsA {
private:
	int _Var1;
protected:
	int _Var3;
public:
	int Var2;
	clsA() {
		_Var1 = 10;
		Var2 = 20;
		_Var3 = 30;
	}
	friend int MySum(clsA A1); // friend function// have access for all 
	friend int Fun2(clsA A1);
};
int MySum(clsA A1) { // fun outside the class 

	return A1._Var1+A1.Var2+A1._Var3;
}
int Fun2(clsA A1) {
	return A1._Var1 + A1.Var2 + A1._Var3;
}
int main() {
	clsA A1;
 
	
	system("pause>0");
	return 0;
}