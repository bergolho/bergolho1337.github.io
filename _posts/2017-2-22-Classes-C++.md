---
layout: post
title: Using classes in C++
---

Este é um exemplo de uso de classes em C++.

```cpp
#include <iostream>
#include <string>

using namespace std;

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

ostream& operator<< (ostream& os, const Foo& foo) 
{  
    os << "Id = " << foo.id << endl;
    os << "Name = " << foo.name << endl;  
    return os;  
}

int main ()
{
    Foo *foo1 = new Foo(1,"Ana");
    Foo *foo2 = new Foo(2,"Beto");
    Foo *foo3 = new Foo(3,"Carla");

    cout << foo1 << endl;
    cout << foo2 << endl;
    cout << foo3 << endl;

    delete foo1;
    delete foo2;
    delete foo3;

    return 0;
}
```
