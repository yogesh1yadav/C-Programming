#include<stdio.h>

int main(){
	printf("hello world");
	return  0;
}


// print multiplication table

int main(){
	int n;
	int i;
	printf("input\nenter no. you want multiplication table of:");
	scanf("%d",&n);
	printf("output\ntable of %d:\n",n);
	for (i=0;i<10;i++){
		printf("%d x %d=%d\n",n,i,n*i);}
	return 0;
}
