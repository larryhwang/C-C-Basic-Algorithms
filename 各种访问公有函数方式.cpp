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

	 int (Point::*funcPtr)() const=&Point::getX;   //�൱�����ⲿ����һ��Point���ָ���Ա����ָ����ָ��һ����Ա���� 
	 
	 cout<<(a.*funcPtr)()<<endl;   //ʹ�ó�Ա����ָ��Ͷ��������ʳ�Ա���� 
	 cout<<(p1->*funcPtr)()<<endl;  //ʹ�ó�Ա����ָ��Ͷ���ָ�� 
	 cout<<a.getX()<<endl;   //ʹ�ö����� 
	 cout<<p1->getX()<<endl;  //ʹ�ö���ָ��
	  
   	 return 0;
   }
