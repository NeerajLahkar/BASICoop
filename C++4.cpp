#include<iostream>
using namespace std;

class stud{
	public:
		double mrk1,mrk2;
};

stud create(){
	stud s;
	s.mrk1=4;
	s.mrk2=4;
	
	cout<<"Marks 1 ="<<s.mrk1<<"\n";
	cout<<"Marks 2 ="<<s.mrk2<<"\n";
	
	return s;
}
int main(){
	stud s1;
	s1=create();
	return 0;
}

