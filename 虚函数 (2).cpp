#include<iostream>
using namespace std;
class A {
public:
	   virtual void print() {   //���û�ж����麯�������������� this is a  
	        cout<<"this is a "<<endl;
	   }

};

class B:public A {
public:
	  void print() {
	   cout<<"THIS IS B "<<endl;
	  }
};

int  main () {
	A a;
	B b;

     A *p1=&a;
	 A *p2=&b;
	 
	 p1-> print();
	 p2-> print();
  
	return 0;

}
