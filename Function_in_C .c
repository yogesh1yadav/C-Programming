//functions in c

//ex.1 : with argument and with return value

int sum(int a,int b){                        // in parameter/argument datatype must declared 
	return a+b;
}
int main (){
	int a,b,c;
	printf("give value of the two number , you want to add\n");
	scanf("%d %d",&a,&b);                     //remember to use "&" when giving inputs, using scanf
	c=sum(a,b);
	printf("sum a+b=%d",c);
	return 0;
}

/* should declare the function before using it , 
 declaration: int sum (int a,int b);
 function defination: after declaration once , can define function anywhere , after calling also , after main() also*/


//ex.2 : with argument and without return value
//Ques: print n stars(*)

void print_star(int n);             //function declaration
int main(){ 
	print_star(7);					//fn call
	return 0;	
}
void print_star(int n){				//fn defination
	int i=0;
	while (i<n){
		printf("%c",'*');			//remember to use single quote' ' for character, "" double quote is for string
		i++;
	
	}
}

//3: without argument with return value
//4: without argument without return type
