#include<iostream>
#include<vector>
using namespace std;

//Such vector init is supported only in >c++ 11
int main(){
	vector<int> vec = {1,2,3};
	cout<<vec[0]<<"\n";
	cout<<vec.size()<<"\n";
	
	//Merge two vectors
	vector<int> v1 = {1,2,3,4,5};
	vector<int> v2 = {6,7,8,9,10};
	for (int i=0;i<v2.size();i++){
		v1.push_back(v2[i]);
	}
	for (int j=0;j<v1.size();j++) cout<<v1[j]<<"\t";
	cout<<"\n"<<"Max Capacity of vector on this system:	"<<v1.max_size();
	return 0;
}
