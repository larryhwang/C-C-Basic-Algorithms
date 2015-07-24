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
  	Point *p1=&a;  //p1指针存放的是对象a的地址 
  	
	cout<<p1->getX()<<endl;  //相当于a.getX()
	cout<<a.getX()<<endl;      
	      //上面两个的输出效果是一样的
		   
  	
  }
