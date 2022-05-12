#include<iostream>
using namespace std;

class stud{
	public:
		double marks;
		
		stud(double x){
			marks=x;
		}
};

void avg(stud a, stud b){
	double avg=(a.marks+b.marks)/2;
	cout<<"Avg marks:"<<avg<<"\n";
}
int main(){
	stud obj1(90),obj2(90);
	
	avg(obj1,obj2);
	
	return 0;
}



