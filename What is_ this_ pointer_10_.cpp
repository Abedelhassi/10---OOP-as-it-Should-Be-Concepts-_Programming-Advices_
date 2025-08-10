#include<iostream>
using namespace std;
// "this " pointer :
class clsEmployee {
public:
	int ID;
	string Name;
	float Salary;
	clsEmployee(int ID, string Name, float Salary) {
// ida bdk twsl lay chy b this . compiler rw7k mnha w ktbha 3lik 
		this->ID = ID;// wanaha t3 fun wwanaha t3 var 

		this->Name = Name;// ki tsmi nfs lasami lazm this 
		this->Salary = Salary;
}
	static void Func1(clsEmployee Employee) { // ttnada 3la lclass mn brra
		Employee.Print();
		// lazm object 
	}
	void Func2() {
		Func1(*this);
	}
	void Print() {

		cout << ID << " " << Name << " " << Salary << endl;

	}

};

int main() {
	clsEmployee Employee1(101, "Ali", 5000); 
		Employee1.Print();
		Employee1.Func2();

	return 0;
}