// exchange between datatype 
// up casting : 
// Person;;employee 
// i cn exchange employee to person this is up casting 
//(with pointer)
// person i cn not exchange to employee case peron is big than employee 
#include<iostream>
using namespace std;
class clsPerson {
public:
	string FullName ="Hassib lakhdari";
};
class clsEmployee : public clsPerson {
public:
	string Title = "CEO";
};
int main() {
	clsEmployee Employee1;
	cout << Employee1.FullName << endl;
	// upcasting :
	clsPerson* Person1 = &Employee1;
	cout << Person1->FullName << endl;
	//cout << Person1->Title << endl : u dont have accesss to tille
	// s4ir yachr 3la kbir bs7 kbi r nn 
	//clsPerson Person2;
	//cout << Person2.FullName << endl;
	// Downcasting :
	//clsEmployee* Employee2 = &Person2;

	//employee hwa person bs7 person mch dima employee 
	//
}