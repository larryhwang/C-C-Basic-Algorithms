#include<iostream>
using namespace std; 
 
   class Obj {
   	   static int i;
   public:
       Obj() {
       	  i++;
       } 
      ~Obj() {
       	  i--;
       }
       static int getVal() {
       	 return i;
       }
   };
   
   int Obj::i=0;
   
   void f() {
   	    Obj ob2;
   	    cout<<ob2.getVal();   //ob2���������ں�������  �����ں���ִ����� ������������� 
   }



   
   int main () {
   	 Obj ob1;
   	 f();
   	 Obj *obj3 =new Obj;
   	 cout<<obj3->getVal();
	 delete obj3;
	 cout<<Obj::getVal();
	 return 0; 
   }
