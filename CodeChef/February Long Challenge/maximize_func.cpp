//You are given a sequence A1,A2,…,AN. Find the maximum value of the expression 
//|Ax−Ay|+|Ay−Az|+|Az−Ax| over all triples of pairwise distinct valid indices (x,y,z)

//TODO: Fails with WA on CodeChef

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int T;
    int N;
    cin>>T;
    if(T < 1 || T > 5)
        return 0;
    else {
    while(T--)
    {
        cin>>N;
        if(N < 3 || N > 100000)
            continue;
        short a[N];
        int currentSum=0, largestSum=0;

        for(int i=0;i<N;i++)
            cin>>a[i];
        
        for(int i=0;i<N;i++)
        {
            if(i == (N-2))
                break;
            else
            {
                // using std::abs() as just using abs() gives ambiguity error 
                currentSum = (std::abs(a[i] - a[i+1])) + (std::abs(a[i+1] - a[i+2])) + (std::abs(a[i+2] - a[i]));
                if(currentSum > largestSum)
                    largestSum = currentSum;
            }
        }
        cout<<largestSum<<endl;
    }
    }

    return 0;
}