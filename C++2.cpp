#include<iostream>
using namespace std; 

class Int{
	public:
		int a;
		Int(){
			a=0;
		}
		Int(int n){
			a=n;
		}
		Int add(Int x,Int y){
			Int z;
			z.a=x.a+y.a;
			return z;
		}
};

int main(){
	Int e1,e2,e3;
	
	e1.a=10;
	e2.a=20;
	e3.a=0;
	
	cout<<"Initial value:"<<"\n";
	cout<<"Value of object 1:"<<e1.a<<"\n";
	cout<<"Value of object 2:"<<e2.a<<"\n";
	cout<<"Value of object 3:"<<e3.a<<"\n";
	
	e3=e3.add(e1,e2);
	
	cout<<"New values:"<<"\n";
	cout<<"Val of Object 1:"<<e1.a<<"\n";
	cout<<"Val of Object 2:"<<e2.a<<"\n";
	cout<<"Val of Object 3:"<<e3.a<<"\n";
	
	
}
