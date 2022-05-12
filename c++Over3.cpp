#include<iostream>
using namespace std;

class Test{
	private:
		int value;
	public:
		
		Test(){
			value=5;
		}
		void operator++(){
			++value;
		}
		void disp(){
			cout<<"Ans:"<<value<<"\n";
		}
};

int main(){
	Test count;
	++count;
	count.disp();
}
