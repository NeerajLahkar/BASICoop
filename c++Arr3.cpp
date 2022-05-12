#include<iostream>
//#define MAX 3
using namespace std;

class Array{
	public:
	int x,y;
	Array(){
	}
	Array(int a,int b){
		this->x=a;
		this->y=b;		
	}
	
	void pri(){
		cout<<"x-"<<x<<" "<<"y-"<<y<<"\n";
	}
};

int main(){
	int n,num1,num2;
	int i=0;
	cout<<"Enter size of array:"<<"\n";
	cin>>n;
	Array *arr = new Array[n];
	
	for(i=0;i<n;i++){
		cout<<"Enter num "<<i+1<<":"<<"\n";
		cin>>num1;
		cout<<"Enter num "<<i+1<<":"<<"\n";
		cin>>num2;
		arr[i]=Array(num1,num2);
	}
	for(i=0;i<n;i++){
		arr[i].pri();
	}
	
}

