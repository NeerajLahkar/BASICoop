#include<iostream>
using namespace std;

class Test{
	private:
		int x;
	public:
		Test(){
			x=5;
		}
		void operator++(){
			++x;
		}
		void operator++(int){
			x++;
		}
		void disp(){
			cout<<"Ans:"<<x<<"\n";
		}
};

int main(){
	Test count1,count2;
	++count1;
	count1.disp();
	count2++;
	count2.disp();
}
