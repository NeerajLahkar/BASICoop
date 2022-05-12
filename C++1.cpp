#include<iostream>
using namespace std;

class Ex{
	public:
		int a;
		
		void add(Ex e){
			a=a+e.a;
			cout<<"value of a:"<<a;
		}
};

int main(){
	Ex e1,e2;
	e1.a=3;
	e2.a=4;
	cout<<"initial value of";
	cout<<"Val of obj1:"<<e1.a;
	cout<<"Val of obj2:"<<e2.a;
	
	e2.add(e1);
	
	
	cout<<"new value of e1:"<<e1.a;
	cout<<"new value of e2:"<<e2.a;
	
}
