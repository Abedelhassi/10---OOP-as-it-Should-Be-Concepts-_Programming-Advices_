#include<iostream>
using namespace std;
class clsPerson { 

	int x;// private 
public:// twli 3am t9dr t3yt ibra
	string FirstName;
	string LastName;
	// i can add function :
	string fullName() {
		return FirstName + " " + LastName;
	}
};
int main() {
	clsPerson Person1;// object 
	// variable mn nw3 class
	//Person1.// kl 7aja da5l class hya private 
	Person1.FirstName = "Hassib";
	Person1.LastName = "Lakhdari";
	cout << Person1.fullName() << endl;

	string S1; // objectv mn class ismha string 
    


	
}