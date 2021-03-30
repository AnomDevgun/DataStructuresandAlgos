#include<iostream>
using namespace std;

class Integer{
	int num;
	public:
		Integer(){
			num=0;
			cout<<"1";
		}
	Integer(int arg){
		cout<<2;
		num=arg;
	}
	int print(){
		cout<<"3";
		return num;
		
	}
	
};
int main(){
		Integer i;
		i=10;
		cout<<i.print();
		return 0;
	}
