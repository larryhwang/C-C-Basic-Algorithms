#include<iostream.h>
	class point {
			public:
				 void set(int m, int n)
				 { x=m;y=n;}
				 int getx() return {x;}
				 int gety() return {y;}
			private:
				int x,y;
};
	class circle:public point     {    //���м̳�
			public:
				void setc(int p,int q){
					set(p,q);       //ʹ�û���ĳ�Ա����
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
		cout<<"Բ���ǣ���"<<c.getx()<<","<<c.gety()<<")�뾶�ǣ�"<<c.getr()<<"Բ�����Ϊ��"<<c.area()<<endl;
	}
	