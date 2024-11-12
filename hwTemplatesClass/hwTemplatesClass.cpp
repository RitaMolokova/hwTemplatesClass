﻿#include <iostream>
using namespace std;

template<class T>
class Point
{
	T a;
	T b;
public:
	Point();
	Point(T a, T b);
	Point(T a);
	void Init(T, T);
	void InitRandom();
	void Print();
};
template<class T>Point<T>::Point() :Point(0, 0) {}

template<class T>Point<T>::Point(T a, T b){
	this->a = a;
	this->b = b;
}
template<class T>Point<T>::Point(T a) :Point(a, a) {}

template<class T>void Point<T>::Init(T a, T b){
	this->a = a;
	this->b = b;
}
template<class T>void Point<T>::InitRandom(){
	a = rand() % 40;
	b = rand() % 40;
}
template<class T>void Point<T>::Print(){
	cout << "a: " << a << "\tb: " << b << endl;
}
int main()
{
	srand(time(0));
	Point<int>obj1(20);
	obj1.Print();
	obj1.Init(5, 10);
	obj1.Print();
	obj1.InitRandom();
	obj1.Print();
}
