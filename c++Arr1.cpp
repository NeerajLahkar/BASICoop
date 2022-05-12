#include<iostream>
using namespace std;
class Array{
	public:
	int id;
	char arr[30];
	
	void input(){
		cout<<"Enter a id no.:"<<"\n";
		cin>>id;
		cout<<"Enter a name:"<<"\n";
		cin>>arr;
	}
	void output(){
		cout<<"Name:"<<arr<<"\t"<<"id:"<<id<<"\t";
	}
};

int main(){
	int n;
	Array a[30];
	int i=0;
	
	cout<<"Enter number of students:"<<"\n";
	cin>>n;
	
	for(i=0;i<n;i++){
		a[i].input();
	}
	for(i=0;i<n;i++){
		a[i].output();
	}
}
