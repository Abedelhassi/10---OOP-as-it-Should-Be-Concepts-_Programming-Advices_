#include <iostream>
using namespace std;
class clsPerson {
public: // virtual bach ma tt5rbtch bs7 ybti lprogram chwy 
	 virtual void Print() { // recommendation ll compiler bach ma tt5rbtch 
		cout << "hi, i am a person\n";
	}
};
class clsEmployee : public clsPerson {
public:
	void Print(){
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
	Employee1.Print();
	Student1.Print();
	clsPerson* Person1 = &Employee1; // upcasting 
	clsPerson* Person2 = &Student1;
	Person1->Print();
	Person2->Print(); // iam person(fi 2)
	// fl base class method normal 
	//wlat 3ndou 5rbata 
	// bach ma yt5rbtch nzidou virtual 
}// overright fl subclass 
// m3naha bnfs ism fun a5fi li kayn fl base 
// 