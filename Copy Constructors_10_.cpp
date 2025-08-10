#include<iostream>
using namespace std;
// mch lazm t3ml object far4 
// construction: lbnaa  . method ytm istid3a 
// hwa lclass t3yt fi rou7ha
//ismo tfs ism class . functiion y3ytoyuli ki nkounou n5dmou bl object 
//lazm tb3t parameter t3 construction fl object 
class clsAdress {
private:
	string _AdressLine1;
	string _AdressLine2;
	string _POPox;
	string _ZipCode;
public:
	clsAdress(string AdressLine1, string AdressLine2, string POPox, string ZipCode) {
		_AdressLine1 = AdressLine1;
		_AdressLine2 = AdressLine2;
		_POPox = POPox;
		_ZipCode = ZipCode;
	}
	// copy constructor:
	clsAdress(clsAdress & old_obj) {
		_AdressLine1 = old_obj.AdressLine1();
		_AdressLine2 = old_obj.AdressLine2();
		_POPox = old_obj.POPox();
		_ZipCode =old_obj. ZipCode();
	}
	void SetAdressLine1(string AdressLine1) {
		_AdressLine1 = AdressLine1;
	}
	string AdressLine1() {
		return _AdressLine1;
	}
	void SetAdressLine2(string AdressLine2) {
		_AdressLine2 = AdressLine2;
	}
	string AdressLine2() {
		return _AdressLine2;
	}
	void SetPOPox(string POPox) {
		_POPox = POPox;
	}
	string POPox() {
		return _POPox;
	}
	void SetZipCode(string ZipCode) {
		_ZipCode = ZipCode;
	}
	string ZipCode() {
		return _ZipCode;
	}
	void Print() {
		cout << "\nAdress Details: \n";
		cout << "______________________";
		cout << "\nAdressLine1:" << _AdressLine1 << endl;
		cout << "\nAdressLine2:" << _AdressLine2 << endl;
		cout << "\nPOBox:" << _POPox << endl;
		cout << "\nZipCode" << _ZipCode << endl;
	}
};
int main() {
	clsAdress Adress1("Queen Alia street ", "B 303", "11192", "5555");

	Adress1.Print();
	clsAdress Adress2 = Adress1;
	Adress2.Print(); 
	// lcompiler y3ml copy constructor 

	system("pause>0");
	return 0;
}
// cionstruction: clsAdress(   ) {}   
// object : Adress1(  ) 