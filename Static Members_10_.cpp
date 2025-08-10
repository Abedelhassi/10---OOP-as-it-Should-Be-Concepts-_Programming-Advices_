#include<iostream>
#include<string>
using namespace std;
// static var// global var shared lkll objects wykoun fl class
// stati var m3naha var y3di 3la obj lkll 
// ftrt 7yak counter hya nfsha t3 program 
class clsA {
public:
	int var;
	static int counter;
		clsA() {
		counter++;
	}
		void Print() {
			cout << "\nvar     =" << var << endl;
			cout << "counter=" << counter << endl;
		}
		};
int clsA::counter = 0;// stativ variabl hwa global int :: class=0
int main() {
	clsA A1, A2, A3;
	A1.var = 10;
	A2.var = 20;
	A3.var = 30;
	A1.Print();
	A2.Print();
	A3.Print();
	A1.counter = 500;
	cout << "\n after chaning static mumbr\n";
	A1.Print();
	A2.Print();
	A3.Print();

}

