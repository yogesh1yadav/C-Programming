// problem statement : conversion program from one unit to other
// km to miles, inches to foot, cms to inches, pound to kgs, inches to meters
//should ask from input which conversion they want to perform 
//ask user after every conversion , if they want to continue( perform more conversion or not)


int main(){
int c;
float n;
char continue1='y';
while(continue1=='y'){

	printf("1.km to miles\n2.inches to foot\n3.cms to inches\n4.pound to kgs\n5.inches to meters\n"
			"select the case number from above menu, which conversion you want to perform\n");
	scanf("%d",&c);
	printf("type the number you want to convert");
	scanf("%f",&n);		
	switch(c){
		case 1: printf("%f km = %f mile \n",n,0.6213*n); 	break;
		case 2: printf("%f inch = %f foot \n",n,0.08333*n); break;
		case 3: printf("%f cm = %f inch \n",n,0.393*n);  break;
		case 4: printf("%f pound = %f kg \n",n,0.4535*n); 	break;	
		case 5:	printf("%f inch = %f m \n",n,0.025*n); break;
		default: printf("you select wrong case number which is not in menu");	
	}
	// Consume the newline character left in the input buffer
    //while ((getchar()) != '\n'); 
    
	printf("do you want to do more conversions\nif yes press y , for exit press anything ");
	scanf(" %c",&continue1);                                                                  //important note to take care below
}
return 0;
}

/*The problem in the original code is that after reading numeric inputs with scanf, left a newline character(due to pressing enter) in the input buffer,
 which is then immediately read by the subsequent scanf call for the continue1 character. This causes the loop to exit prematurely 
 because continue1 is set to the newline character rather than the intended user input. There are two solutions to this problem:
1.Clear the input buffer before reading the continue1 character using a while (getchar() != '\n'); loop to consume all characters up to the next newline.
2.Use a space before %c in the scanf format string (scanf(" %c", &continue1);), which tells scanf to skip any whitespace characters (including newlines) 
until it encounters a non-whitespace character.
Both methods ensure that scanf("%c", &continue1); correctly waits for and reads the actual user input, allowing the program to continue running as intended.*/
