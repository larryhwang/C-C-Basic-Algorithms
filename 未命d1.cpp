#include<iostream>
using namespace std;
const int Size=5;
class Stack;

class Item {
	public:
		Item(const int &val):item(val) {} /**/ 
	private:
	    int item;
		Item *next;
		friend class Stack;	
};
class Stack {
	public:
		Stack():top(NULL) {}
	   ~Stack();
	   int Pop();
	   void Push (const int&);
	private:
	    Item *top; 
};
    Stack::~Stack() {
    	Item *p=top,*q;
    	while(p!=NULL)  {
    		q=p->next;
    		delete [] p;
    		p=q;
    	}    	
    } 
  int Stack::Pop() {
  	 Item *temp;
  	 int ret;
  	 temp=top; /**/
  	 ret=top->item;
  	 top=top->next;
  	 return ret; 	
  }
  void Stack::Push(const int& val) {
  	 Item *temp=new Item(val);
  	 temp->next=top;
  	 top=temp;
  }
  
int main() {
    	Stack s;
    	for(int i=1;i<Size;i++)  s.Push(i);
    	cout<<"The elements of stack are:";
    	for(int i=1;i<Size;i++)  cout<<s.Pop()<<'\t';
    	return 0;    	
    }
