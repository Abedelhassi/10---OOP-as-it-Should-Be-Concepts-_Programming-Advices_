#include<iostream>
using namespace std;
class clsPerson {
private:
   //da5l classs brk :
	int Variabl1 = 5;
	int Function1() {
		return 40;
	}
protected:
	// class w wldou hh:
	int Variabl2 = 100;
	int Function2() {
		return 50;
	}
public:
	// access to all :
	string FirstName;
	string LastName;
	string FullName() {
		return FirstName + " " + LastName;
	}
	float Function3() {
		return Function1() + Variabl1 + Variabl2;
	}
};
int main() {
	clsPerson Person1;
	Person1.FirstName = "Hassib";
	Person1.LastName = "Lakhdari";
	cout << "Person1: " << Person1.FullName() << endl;
	cout << Person1.Function3();

}