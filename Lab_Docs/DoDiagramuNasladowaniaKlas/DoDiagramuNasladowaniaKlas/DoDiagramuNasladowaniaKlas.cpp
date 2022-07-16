#include <iostream>
using namespace std;

class A {
public:
	A() {}
	~A() {}
	void funkcjaA() {}
};

class B : public A {
public:
	B() {}
	~B() {}
	void funkcjaB() {}
};

void main()
{
	B b;
	b.funkcjaA();
	b.funkcjaB();
}