#include<stdio.h>

int main (){
	int arr[5]= {1,2,3,4,5};
//	arr[5] = { 1,2,3,4,5 };
	int * ptr = arr+4;
	int val = 0;
	printf("%d\n",*ptr);
	for(int i = 0 ; i<5 ; i++){
		val += *ptr;
		ptr--;
	}
	printf("%d",val);
	return 0;
}

