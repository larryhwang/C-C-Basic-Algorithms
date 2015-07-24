#include<iostream>
using namespace std;
  class Myclass  {
  	 public:
  	 	Myclass() {
  	 		cout<<"A"<<endl;
  	 	}
  	 	Myclass(char c){
  	 		cout<<c<<endl;
  	 	}
  	    ~Myclass (){
  	    	cout<<"B"<<endl;
  	    }
  };
   int main () {
   	 Myclass *p2;
   	 Myclass  p1;
   	 
   	 
   }
