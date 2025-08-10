#include<iostream>
using namespace std;
class clsPerson {
private:
	int _ID;
	string _FirstName;
	string _LastName; // securd 
public:
	// read only (no edit ) Properity get :
	int ID() {
		return _ID=10;
	}
	//Properity set : // edit 
	void setFirstName(string FirstName) {
		_FirstName = FirstName;
	}
	//Properity get:
	string GetFirstName() {
		return _FirstName;
	}
	__declspec(property(get = GetFirstName, put = setFirstName)) string FirstName;// declARation specification t3ml mapping (rbt bin set w get )
	//Properity set : // edit 
	void seLastName(string LastName) {
		_LastName = LastName;
	}
	//Properity get:
	string LastName() {// ma ib3tlha parameter 3la jal hya globl var 
		return _LastName;
	}
	// fl main mmmnou3 tktb function 
	string FullName() {
		return _FirstName + " " + _LastName;
	}
};
int main() {
	clsPerson Person1; // ooject
	Person1.setFirstName("Mouhammed");
	Person1.FirstName = "Mouhammed";
	cout << Person1. FirstName; 
	Person1.seLastName("Abu-Hadhoud");
	//	Person1.setFirstName("hassib");
	cout << "ID: " << Person1.ID() << endl;
	cout << "first name :" << Person1.GetFirstName() << endl;
	cout << "Last name:" << Person1.LastName() << endl;
	cout << "Full name :" << Person1.FullName() << endl;
	system("pause>0");
	return 0;
}