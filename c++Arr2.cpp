#include<iostream>
#define MAX 20
using namespace std;

class Array{
	public:
		int x,y;
		
		Array(Array a,Array b){
			x=a;
			y=b;
		}
		void add(){
			cout<<"x+y="<<x+y<<"\n";
		}
};

int main(){
	int n,num1,num2;
	int i=0;
	Array a(3);
	//Array a[]={Array(1,1),Array(2,2),Array(3,3)};
	for(i=0;i<3;i++){
		cout<<"x&y"<<"\n";
		cin>>num1,num2;
		a[i].Array(num1,num2);
	}
	for(i=0;i<3;i++){
		a[i].add();
	}
}
