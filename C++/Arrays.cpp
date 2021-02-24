#include<iostream>
using namespace std;

//Simulating a list in C++


class MyArray{
	private:
		int currPos;
		int data[100];
	public:
	MyArray(){
		this->currPos = 0;
	}
	bool push(int ele){
		if(this->currPos<100){
			this->data[currPos] = ele;
			this->currPos++;
			return 0;
		}
		return 1;
	}
	void arrayLength(){
	cout<<"Array Length: "<<this->currPos<<"\n";
	}
	void pop(){
		if(this->currPos>0){
			this->data[currPos] = 0;
			this->currPos--;
			cout<<"Element popped, array size now: "<<this->currPos<<"\n";
		}
	}
	void print(){
		int i = 0;
		for (i=0;i<this->currPos;i++){
			cout<<this->data[i]<<" ";
		}
		cout<<"\n";
	}
};

int main()
{
	int e;
	int pushElement;
	bool ret;
	MyArray newArray;
	while (true){
		cout<<"1)Push element into array.\n";
		cout<<"2)Pop element from array.\n";
		cout<<"3)Print the array elements.\n";
		cin>>e;
		switch(e){
			case 1:
				cout<<"Enter integer to push onto array:\n";
				cin>>pushElement;
				ret = newArray.push(pushElement);
				if (ret == 0) cout<<"Push Successful.\n";
				else cout<<"Array Size Exceeded.\n";
				newArray.arrayLength();
				break;
			case 2:
				newArray.pop();
				break;	
			case 3:
				newArray.print();
				break;	
		}
	}
	return 0;
}
