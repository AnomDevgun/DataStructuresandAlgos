#include <bits/stdc++.h> 
using namespace std;
int main(){
	string s;
	cout<<"Enter a string to reverse\n";
	cin>>s;
	char string[s.length()+1];
	strcpy(string,s.c_str());
	cout<<"String to char array conversion:\n";
    for (int i = s.length(); i >=0; i--) 
        cout <<string[i];
return 0;
}

//Reversing using a loop and keeping inPlace
//for(i=0; i<len/2; i++)
//    {
//        char temp=str[i];
//        str[i]=str[len-i-1];
//        str[len-i-1]=temp;
//    }
