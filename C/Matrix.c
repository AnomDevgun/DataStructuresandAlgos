#include<stdio.h>
void main(){
    int arr[2][2] = {{1,2},{3,4}};                  // a simple 2d matrix or more commonly called an array.
    int rows=0,columns=0;
    for (int i=0;i<2;i++){                                  //predefined values are now being iterated through using a nested for loop, the outer loop scans the rows and inner loop, individual columns
        for(int j=0;j<2;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }

//now to ask the user to input the rows and columns and then input rows*columns number of elements
printf("Please enter the number of rows\n");
scanf("%d",&rows);
printf("Please enter the number of columns\n");
scanf("%d",&columns);
int userArr[rows][columns];
printf("Please enter %d elements\n",rows*columns);              //Creating a user defined sized matrix of integers. (can you think of a user error that may occur here?)
for (int i=0;i<rows;i++){
    for (int j=0;j<columns;j++){
        scanf("%d",&userArr[i][j]);
    }
}
printf("The user input array is:\n");
for (int i=0;i<2;i++){                                  
        for(int j=0;j<2;j++){
            printf("%d  ",userArr[i][j]);
        }
        printf("\n");
    }
}