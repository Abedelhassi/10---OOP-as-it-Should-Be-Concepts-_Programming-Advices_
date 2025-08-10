#include<iostream>
using namespace std; 
  // destructors: mn tdmir 
class clsPerson {
public:
	string FullName;
	// instructor 
	clsPerson(){
		FullName = "Mouhammd abu hadhoud";
		cout << "\nHi, i am constructor";
	}
	// destructor : when object is destroyed:
	~clsPerson() {
		cout << "\nHi, i am destructor";
	}

};
void Fun1() {
	clsPerson Person1;
}
void Fun2() {
	clsPerson* Person2 = new clsPerson; // rule : kl new ytb3ha delete 
	delete Person2;
}

int main() {
	//clsPerson Person1;
	// ttnfd destructor ki yt9fl l brnamj 
	Fun1();
	Fun2();
	system("pause>0");
	return 0;
}