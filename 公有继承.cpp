//公有继承
#include<iostream>
	class point {
			public:
				 void set(int m, int n)
				 { x=m;y=n;}
				 int getx() return {x;}
				 int gety() return {y;}
			private:
				int x,y;
};
	class circle:public point     {    //公有继承
			public:
				void setc(int p,int q){
					set(p,q);       //使用基类的成员函数
				}
            void setr(int r){
				this->r=r;
			}
			int getr() {
				return r;
			}
			double area(){
				return 3.141596*r*r;
			}
		private:
		   int r; 	
	};
	void main(){
		circle c;
		c.setc(3,4);
		c.setr(2);
		cout<<"圆心是：（"<<c.getx()<<","<<c.gety()<<")半径是："<<c.getr()<<"圆的面积为："<<c.area()<<endl;
	}
	
