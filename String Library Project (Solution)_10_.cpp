#include<iostream>
#include"clsString.h";
using namespace std;
int main() {
	clsString String1("Mohammed Abu-Hadhoud");
	String1.ReverseWordsInString();
	cout << String1.Value;
	cout << clsString::CountVowels("welcome to algeria");//static
	return 0;
}
