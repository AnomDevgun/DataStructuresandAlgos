#include<iostream>
int main(){
int i = 0;      //vaiable to store loopCount

    int arr[4] = {1,2,3,4};             //Preinitialized array
    for(i=0;i<4;i++){
        std::cout<<arr[i]<<" ";
    }

    int n;                                      //user input array size
    printf("\nPlease enter array size:");
    std::cin>>n;                         //UserInitialized array
    int userArray[n];
    printf("Please Enter array Elements:\n");
    for(i=0;i<n;i++){
        std::cin>>userArray[i];
    }
    for(i=0;i<n;i++){
        std::cout<<userArray[i]<<" ";
    }

    return 0;
}