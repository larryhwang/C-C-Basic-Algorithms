#include<iostream>
using namespace std;
		void splitFloat (float x,int *intPart,float *fracPart){
					*intPart=static_cast<int>(x);
					*fracPart=x-*intPart;	
}
        
		int main(){
			
			cout<<"3:"<<endl;
			for(int i=0;i<3;i++){
				float x,f;
				int n;
				cin>>x;
				splitFloat(x,&n,&f);
				cout<<"Integer Part="<<n<<"\t"<<"Fraction Part="<<f<<endl;
			}
			return 0;
		} 
