#include<iostream>
using namespace std;
int func (int a ,int&b)
{
 	a++;
	b++;
	return b;
}

    int main() {
    	int x=0,y=1;
    	cout<<func(x,y);
    }
