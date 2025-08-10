#include <iostream>
using namespace std;
class clsPerson {
public: 
	virtual void Print() { 
		cout << "hi, i am a person\n";
	}
};
class clsEmployee : public clsPerson {
public:
	void Print() {
		cout << "HI, iam employee\n";
	}
};
class clsStudent : public clsPerson {
public:
	void Print() {

		cout << "hi , i am student\n";
	}
};
int main() {
	clsEmployee Employee1;// wrt print mn person 
	clsStudent Student1;
	// early static binding : 
	// 3rf mn 9bl anou adress fi student 
	// fun m3roufa fl compiler 
	// static asr3 chwy fl run time 
		Employee1.Print();
	Student1.Print();
	clsPerson* Person1 = &Employee1; // upcasting 
	clsPerson* Person2 = &Student1;
	// compiler mch 3arf l adress t3 employee,student 
	// rbt fl run time 3n tri9 virtual time 
	// Late dynamic binding :

		Person1->Print();
	Person2->Print();

}
// fourth consept of OOP:
//Polymorphism: //  t3dd lawjh t3 code  // many forms:
// allows us to create consistant code:
// function overloading :
// ex: sum of 2 or 3 parameters // function overriding :
// Print employee,print person 
// virtual functions: virtual , point 
// Operator overloading :
// var1+var2 , firstname+Lastname
// consistancy // ns9 wa7d 
// 
// 