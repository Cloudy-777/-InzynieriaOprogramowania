#include <iostream>
using namespace std;

template <class T>

class A {
public:
	A();
	A(T x);
	~A();
	void pokaz_t();
protected:
	T t;
};

template <class T> A<T>::A() :t(0) { }
template <class T> A<T>::A(T x) : t(x) { }
template <class T> A<T>::~A() { }

template <class T> void A<T>::pokaz_t()
{
	cout << "t= " << t << endl;
}

void main()
{
	A<int> a(100);
	A<char> b('Q');
	A<double> d(1.25);
	a.pokaz_t();
	b.pokaz_t();
	d.pokaz_t();
}