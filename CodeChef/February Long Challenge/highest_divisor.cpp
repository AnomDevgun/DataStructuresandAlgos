// You are given an integer N. Find the largest integer between 1 and 10 
// (inclusive) which divides N.

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int num=0;
    if(N < 2 || N > 1000)
        return 0;
    
    for(int i=1;i<10;i++)
    {
        if(N % i == 0)
            num = i;
    }
    cout<<num;

    return 0;
}