//NEERAJ LAHKAR
//CSE-21/20

#include<iostream>
using namespace std;

class time{
	public:
		int hrs;
		int mins;
		int secs;
		
		time():hrs(0),mins(0),secs(0){}
		time(int a,int b,int c){
			hrs=a;
			mins=b;
			secs=c;
		}
		time sum(time x,time y){
			secs=x.secs+y.secs;
			if(secs>59){
				secs-=60;
				mins++;
			}
			mins=x.mins+y.mins;
			if(mins>59){
				mins-=60;
				hrs++;
			}
			hrs=x.hrs+y.hrs;
		}
		void display(){
			cout<<hrs<<":"<<mins<<":"<<secs<<"\n";
		}
};

int main(){
	const time x(2,49,30);
	const time y(3,30,15);
	time z;
	z.sum(x,y);
	z.display();
}







