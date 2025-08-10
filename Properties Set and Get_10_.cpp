#include<iostream>
using namespace std;
class clsPerson {
private:
	string _FirstName;
	string _LastName; // securd 
public:
	//Properity set : // edit 
	void setFirstName(string FirstName) {
		_FirstName = FirstName;
	}
	//Properity get:
	string FirstName() {
		return _FirstName; 
	} 
	//Properity set : // edit 
	void seLastName(string LastName) {
		_LastName = LastName;
	}
	//Properity get:
	string LastName() {
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
	Person1.seLastName("Abu-Hadhoud");
	//	Person1.setFirstName("hassib");

	cout << "first name :" << Person1.FirstName() << endl;
	cout << "Last name:" << Person1.LastName() << endl;
	cout << "Full name :" << Person1.FullName() << endl;
	system("pause>0");
	return 0;
}