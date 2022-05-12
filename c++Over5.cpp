#include<iostream>
using namespace std;

class Test{
	private:
		int x;
	public:
		Test(){
		}
		Test(int a){
			x=a;
		}
		Test operator++(){
			Test temp;
			temp.x=++x;
			return temp;
		}
		Test operator++(int m){
			Test temp;
			temp.x=x++;
			return temp;
		}
		void display(){
			cout<<"Ans:"<<x<<"\n";
		}
};
int main(){
	int n;
	cout<<"Enter a number:"<<"\n";
	cin>>n;
	Test count(n),result;
	result=++count;
	result.display();
	
	result=count++;
	result.display();
}






