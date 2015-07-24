#include<iostream>
using namespace std;
   class Base {
   	 private:
		void fun1() const {cout<<"func1";}
   	 protected:
   	 	void func2() const{ cout<<"func2";}
   	 public:
   	 	void func3() const {cout<<"func3";}
   	
	   
	class Derived:protected Base
	   {
	   	public:
	   		void func4() const 
	   }
   	 
   };
