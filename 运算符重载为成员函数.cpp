//双目运算符重载为成员函数的实例 
#include<iostream>
using namespace std;
class Complex {
  public:
  	  Complex (double r=0.0,double i=0.0):real(r),imag(i){}
  	  Complex operator+(const Complex &c2) const;
  	  Complex operator-(const Complex &c2) const;
  	  void display() const;
  private:
      double real;
	  double imag;		
}; 
 
 Complex Complex::operator+(const Complex &c2) const {
    return Complex(real+c2.real,imag+c2.imag);  //直接用形参名  而且只需要引用一个参数名就够了 
 }
 Complex Complex::operator-(const Complex &c2) const{
    return Complex(real-c2.real,imag-c2.imag);
 }
   
  void Complex::display() const {
    cout<<"("<<real<<","<<imag<<")"<<endl;
  }
  
    int main(){
    	
    	Complex c1(4,5),c2(2,10),c3;
    	cout<<"c1=";c1.display();
    	cout<<"c2=";c2.display();
    	c3=c1-c2;
    	cout<<"c3=c1-c2=";c3.display();
		c3=c1+c2;
		cout<<"c3=c1+c2=";c3.display();
		return 0;
    		
    }
