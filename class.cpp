#include<iostream> 
#include<iomanip> 
using namespace std;
	class clock {
		public:
				void setTime (int newH=0,int newM=0,int newS=0);
				void showtime();
		    private:
		        int hour,minute,second;    	
		};
		   void clock::setTime(int newH,int newM,int newS){
		   	   hour=newH;
		   	   minute=newM;
		   	   second=newS;
		   }
		   inline void clock::showtime(){
		   	cout<<hour<<":"<<minute<<":"<<second<<endl;
		   }
	
	int main(){
		clock myclock;
		cout<<"First time set and output:"<<endl;
		myclock.setTime(17,21,20);
		myclock.showtime();
	}	   
