#include <iostream>
using namespace std;
class Student{
private:
    void privateFunction()
    {cout << "Private function is called." << endl;}
public:
    void publicFunction()
    {privateFunction();}};


int main()
{ Student s;
    s.publicFunction();

    return 0;
}
