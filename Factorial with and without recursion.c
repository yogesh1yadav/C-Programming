// recursion in C: function calls a copy of itself
//Ques: find the factorial of any number using recursion.      fact(n)= n*fact(n-1)

int fact(int n){
	if(n==1 || n==0 ){
		return 1;
	}
	else{
		return n*fact(n-1);
	}	
}
int main(){
	int c,n;
	printf("enter no which factor you want to calculate");
	scanf("%d",&n);
	c=fact(n);
	printf("factorial of %d is %d",n,c);
	return 0;
}

//Ques: factorial using iterative loop. (without recursion)

int main(){
	int i,n,c;
	printf("enter no which factor you want to calculate");
	scanf("%d",&n);
	for(i=n;i>1;i--){
		c=c*i;
	}
	printf("factorial of %d is %d",n,c);
	return 0;
}
