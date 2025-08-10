#include <iostream>
using namespace std;

class clsA
{

private:
    int V1;
    int Fun1()
    {
        return 1;
    }

protected:
    int V2;
    int Fun2()
    {
        return 2;
    }

public:
    int V3;
    int Fun3()
    {
        return 3;
    }

};

//try to change visibility mode public/private/protected 
//and see in the main what will happen iside objects.
class clsB : protected clsA
{

public:

    int Fun4()
    {
        
        return 4;
    }

};

class clsC : public clsB
{

public:

    int Fun5()
    {

        return 5;
    }
};
// inheritance type:
// Single inheritance :
// ex : employee inherit person ,
// Multi level inheritance :
// ex: person.employee.dev
// Heirarchal inheritans:
//ex: Classd:a/classc:a
// supprted by modern programming languages ;
// kind 4 only in cpp :
//Multiple inheritance :
// class c : classa and class b 
// all prooberitors in both 
// issues like there is 2 methodes have same names 
// kind 4 :
//Hybrid inheritance:
// A//b and c // d 

int main()
{


    clsB B1;
    //Try B1 after you change visibility mode in clsB.   and see what you can see.


    clsC C1;
    //Try C1 after you change visibility mode in clsB.   and see what you can see.

}
