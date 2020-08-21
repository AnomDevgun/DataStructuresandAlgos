#include<stdio.h>
int main(){
int i = 0;      //vaiable to store loopCount

    int arr[4] = {1,2,3,4};             //Preinitialized array
    for(i=0;i<4;i++){
        printf("%d\n",arr[i]);
    }

    int n;                                      //user input array size
    printf("Please enter array size:");
    scanf("%d",&n);                         //UserInitialized array
    int userArray[n];
    printf("Please Enter array Elements:");
    for(i=0;i<n;i++){
        scanf("%d",&userArray[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",userArray[i]);
    }

    return 0;
}