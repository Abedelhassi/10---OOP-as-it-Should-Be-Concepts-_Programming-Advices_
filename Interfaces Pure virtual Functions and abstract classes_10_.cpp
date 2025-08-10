
#include <iostream>
using namespace std;
// abstract cls//interface // contract :

class clsMobile {

	virtual void Dial(string PhoneNumber) = 0; 
		virtual void SendSMS(string PhoneNumber , string Text) = 0;
		virtual void TakePicture() = 0;

};
class clsiPhone : public clsMobile {
public:
	// lazm y3ml implimentation ll 3 virtusl meethods :
	void Dial(string PhoneNumber) {};
	void SendSMS(string PhoneNumber, string Text) {};
	void TakePicture() {};
	void MyPhonemethod(){}
};
class clsSamsungNote10 : public clsMobile {
public: // implimentation l contract 
	void Dial(string PhoneNumber) {};
	void SendSMS(string PhoneNumber, string Text) {};
	void TakePicture() {};
};
int main() { 
	clsiPhone iPhone1;
	clsSamsungNote10 Note10;
	
}