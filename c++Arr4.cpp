#include<iostream>
using namespace std;

class Array{
	private:
		int x;
	public:
		void input(){
			cout<<"Enter a number"<<"\n";
			cin>>x;
		}
		void output(){
			cout<<"|"<<x<<"|";
		}
	};
	
	int main(){
		int n,i=0;
		cout<<"Enter size of array:"<<"\n";
		cin>>n;
		Array arr[n];
		for(i=0;i<n;i++){
			arr[i].input();
		}
		for(i=0;i<n;i++){
			arr[i].output();
		}
	}
