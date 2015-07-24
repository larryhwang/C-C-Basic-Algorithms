#include<iostream>
using namespace std;


class Point {
   public: 
          Point(int x=0,int y=0):x(x),y(y){}
          int getX() const {return x;}
          int getY() const {return y;}
          	 
  private:
  	      int x ,y;          
};
   
   int main(){
     Point a(4,5);
     Point *p1=&a;

	 int (Point::*funcPtr)() const=&Point::getX;   //相当于在外部声明一个Point类的指针成员，该指针又指向一个成员函数 
	 
	 cout<<(a.*funcPtr)()<<endl;   //使用成员函数指针和对象名访问成员函数 
	 cout<<(p1->*funcPtr)()<<endl;  //使用成员函数指针和对象指针 
	 cout<<a.getX()<<endl;   //使用对象名 
	 cout<<p1->getX()<<endl;  //使用对象指针
	  
   	 return 0;
   }
