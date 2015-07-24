#include<iostream>
using namespace std;
  int i=3;   //这里改变 i 的值也是没有用的 
  class Fun {
  	public:
  		
  		 static int i;
  		int value () {
  			return i-1;
  		}
        int value() const {
        	return i+1;
        }
  };
   
   int Fun::i=3;  	  //这里改变 i 的值才是有效的 


   int main () {
   	  int i =9;   //这里改变i 的值是没有用的 
   	  Fun fun1;
   	  const Fun fun2;
   	  cout<<fun1.value()<<Fun::i<<fun2.value();
   	  return 0;
   	 
   }
