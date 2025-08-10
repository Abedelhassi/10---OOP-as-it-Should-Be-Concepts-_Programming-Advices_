
// inheritance :
// Sub Class/ Derived Class (son)
// Super Class/ Base Class // Super Class/ Base Class 

#include <iostream>
using namespace std;
class clsPerson {
private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;
public:
	clsPerson() {}
	clsPerson(int ID, string FirstName, string LastName, string Email, string Phone) {
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
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
	void Print() {
		cout << "\nInfo:";
		cout << "\n_________________________";
		cout << "\nID:                      " << _ID;
		cout << "\nFirstName:" << _FirstName;
		cout << "\nLastName:" << _LastName;
		cout << "\nFull Name:" << FullName();
		cout << "\nEmail" << _Email;
		cout << "\nPhone:" << _Phone;
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
class clsEmployee : public clsPerson {
private:
	string _Title;
	string _Department;
	float _Salary;
public:
	clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary)
		: clsPerson(ID, FirstName, LastName, Email, Phone) {
		_Title = Title;
		_Department = Department;
		_Salary = Salary;
	}
	// Properity set:
	void setTitle(string Title) {
		_Title = _Department;
	}
	string Title() {
		return _Title;
	}
	void setDepartment(string Department) {
		_Department = Department;
	}
	string Department() {
		return _Department;
	}
	void setSalary(float Salary) {
		_Salary = Salary;
	}
	float Salary() {
		return _Salary;
	}
	void Print() {
		//clsPerson::Print();
		cout << "\nInfo:";
		// fun overriding m3naha nl4i lprint lwla w ndirha fl 2eme
		cout << "\n_________________________";
		cout << "\nID:                      " << ID();
		cout << "\nFirstName:" << FirstName();
		cout << "\nLastName:" << LastName();
		cout << "\nFull Name:" << FullName();
		cout << "\nEmail" << Email();
		cout << "\nPhone:" << Phone();
		cout << "\n__________________________\n";
		cout << "\ntitle" << _Title;
		cout << "\nDepartment" << _Department;
		cout << "\nSalary" << _Salary;

	}
};
class clsProgrammer : public clsEmployee {
private:
	 string _MainProgrammingLanguage;
public:
	clsProgrammer(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary, string MainProgrammingLanguage)
		: clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Department, Salary) {
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}
	void setMainProgrammingLanguage(string MainProgrammingLanguage) {
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}
	string MainProgrammingLanguage() {
		return _MainProgrammingLanguage;
	}
	void Print() {
		clsEmployee::Print();
		cout << "\nmain programming :" << _MainProgrammingLanguage << endl;
	}

};
int main() {
	clsProgrammer Programmer1(10, "Hassib", "lakhdari", "#dd", "0778888", "Ceo", "pp", 5000,"Solidity");
	Programmer1.Print();


	system("pause>0");
	return 0;

	/*clsPerson Person1(10, "Hassib", "Lakhdari", "hhassib303@gmail.com", "0667691889");
	Person1.Print();
	Person1.SendEmail("hi ", "how r u");
	Person1.SendSMS("how r u");
	system("pause>0");
	return 0;
	*/

}