#include<stdio.h>
#include<string.h>
void push();
void pop();
void empty();
void top();
void size();

int arr[100000];
int size2=0;
int main ()
{
	scanf("%d"&)
	char check[10];
	scanf("%s",check);
	if(strcmp("push",check)==0)
		push();

	if(strcmp("pop",check)==0)
		pop();

	if(strcmp("top",check)==0)
		top();
	if(strcmp("empty",check)==0)
		empty();
	if(strcmp("size",check)==0)
		size();

	return 0;
}

void push(){
	int data;
	scanf("%d",&data);
	arr[size2]=data;
	++size2;

}
void pop(){
	printf("%d",arr[size2]);
	arr[size2]='\0';
	--size2;
}
void top(){
	printf("%d",arr[size2]);
}
void empty(){
	if(size2==0)
		printf("1");
	else printf("0");
}
void size(){
	printf("%d",size2);
}



