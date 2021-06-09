#include<stdio.h>
#define max value 10
int main(){
	int a[] = {1,2,3,4,5};
	char b[] = {'O','S'};
	char *s = b;
	printf("%c\n",*s);
	printf("%d\n",sizeof(s)/sizeof(s[0]));
	int *p = a;
	printf("%d\n",*p++);
	printf("%d\n",*p++);
	printf("Size of array: %d\n",sizeof(a)/sizeof(a[0]));
	return 0;
}
