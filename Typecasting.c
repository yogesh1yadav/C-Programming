//typecasting : to convert anything into our desired data type, synatx: (type)value;
// (1) without typecasting
int main(){
	float a=12/5;
	printf("%f", a);              //output:  2.000000  , bcz 12 is in int and 5 is int , int/int=int so gives 2 only, but i want exact in decimal so typecast to float	
return 0;
}

// (2) with typecasting
int main(){
	float a= (float)12/5;  				// typecasting
	printf("%f", a);      				//output:  2.400000	
return 0;
}
