#include<iostream>
using namespace std;
  int i=3;   //����ı� i ��ֵҲ��û���õ� 
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
   
   int Fun::i=3;  	  //����ı� i ��ֵ������Ч�� 


   int main () {
   	  int i =9;   //����ı�i ��ֵ��û���õ� 
   	  Fun fun1;
   	  const Fun fun2;
   	  cout<<fun1.value()<<Fun::i<<fun2.value();
   	  return 0;
   	 
   }
