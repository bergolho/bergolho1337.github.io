#include <iostream>
#include <string>

using namespace std;

// How to setup a class in C++
class Foo
{
private:
    int id;
    string name;
public:
    // Constructor initialization
    Foo (int id, string name) : id(id), name(name) { }
    friend ostream& operator<< (ostream& os, const Foo& foo);
};

// Overloading output operator
ostream& operator<< (ostream& os, const Foo& foo) 
{  
    os << "Id = " << foo.id << endl;
    os << "Name = " << foo.name << endl;  
    return os;  
}

int main ()
{
    Foo foo1(1,"Ana");
    Foo foo2(2,"Beto");
    Foo foo3(3,"Carla");

    cout << foo1 << endl;
    cout << foo2 << endl;
    cout << foo3 << endl;

    return 0;
}