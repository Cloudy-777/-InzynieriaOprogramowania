#include <iostream>
using namespace std;

class A {
public:
	A() {}
	A(int);
	~A() {}

	void przypiszWartosc(int);
	int pokazLiczbe() const;

	static int msi_publicLiczba;

protected:
	int mi_protLiczba;

private:
	int mi_privLiczba;
};

int A::msi_publicLiczba = 200;

A::A(int i = 0) :mi_protLiczba(0) { mi_privLiczba = i; }

void A::przypiszWartosc(int i) { mi_privLiczba = i; }
int A::pokazLiczbe() const { return mi_privLiczba; }

int main() {
	A asd = A(2);
	asd.przypiszWartosc(7);
	cout << asd.msi_publicLiczba;
	asd.~A();
	return 0;
}