#include<iostream> 
using namespace std;
int main(){    //1.87507e-307
  void function (double val);
  double val;
  function(val);
  cout<<val ;
  return 0;  
}
void function (double val){
	val=3;
}
