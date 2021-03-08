---
layout: post
title:  "Using Classes in C++"
date:   2021-03-08 17:50:13 +0800
categories: Programming
tags: using classes in c++
---

This is an example of how to use classes in C++.

{% highlight cpp linenos %}
// sample_class.cpp
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

// Overwrite the print operator
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
{% endhighlight %}

Compilation and execution
{% highlight shell linenos %}
$ g++ -o sample_class sample_class.cpp
$ ./sample_class
{% endhighlight %}

##### [Excellent reference book for C++](/assets/pdf/cpp-handbook.pdf)