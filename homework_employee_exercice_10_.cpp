
#include <iostream>
using namespace std;
class clsPerson {
private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;
	int _Salary;
public:
	clsPerson(int ID, string FirstName, string LastName, string Email, string Phone,int Salary) {
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
		_Salary = Salary;
	}
	// REad only properity // psq id ma t9drch tbdlopu;
	int ID() {
		return _ID;
	}
	// Properity set :
	void setFirstName(string FirstName) {
		_FirstName = FirstName;
	}
	// Properity get :
	string FirstName() {
		return _FirstName;
	}
	void setLastName(string LastName) {
		_LastName = LastName;
	}
	string LastName() {
		return _LastName;
	}
	void setEmail(string Email) {
		_Email = Email;
	}
	string Email() {
		return _Email;
	}
	void setPhone(string Phone) {
		_Phone = Phone;
	}
	string Phone() {
		return _Phone;
	}
	string FullName() {
		return _FirstName + " " + _LastName;
	}
	void setSalary(int Salary) {
		_Salary = Salary;
	}
	int Salary() {
		return _Salary;
	}
	void Print() {
		cout << "\nInfo:";
		cout << "\n_________________________";
		cout << "\nID:                      " << _ID;
		cout << "\nFirstName:" << _FirstName;
		cout << "\nLastName:" << _LastName;
		cout << "\nFull Name:" << FullName();
		cout << "\nEmail" << _Email;
		cout << "\nPhone:" << _Phone;
		cout << "\nSalary:" << _Salary;
		cout << "\n__________________________\n";
	}
	void SendEmail(string Subject, string Body) {
		cout << "\nThe folllowing message send successfully to email:" << _Email;
		cout << "\nSubject: " << Subject;
		cout << "\nBody" << Body;
	}
	void SendSMS(string TextMessage) {
		cout << "\nThe folllowing message send successfully to phone:" << _Phone;
		cout << "\n" << TextMessage << endl;
	}
};
int main() {
	clsPerson Person1(10, "Hassib", "Lakhdari", "hhassib303@gmail.com", "0667691889",3000);
	Person1.Print();
	Person1.SendEmail("hi ", "how r u");
	Person1.SendSMS("how r u");
	system("pause>0");
	return 0;
}