#include<iostream>
using namespace std;

class Test{
	public:
		int x;
		
		Test(int a){
			x=a;
		}
		void operator++(){
			++x;
		}
		void operator++(int m){
			x++;
		}
		void pri(){
			cout<<" "<<x;
		}
};

int main(){
	int n,m;
	cout<<"Enter"<<"\n";
	cin>>n;
	Test r(n);
	++r;
	cout<<"Enter"<<"\n";
	cin>>m;
	Test t(m);
	t++;
	r.pri();
	t.pri();
}
