//Array: collection of similar data type items, stored at contiguous memory location.
//1D array or vectors

int main(){
	int arr[]={2,3,4,5};  			 				// declaration 1 method
	//arr[4]=1;                      				// attempt to write at 4th index in fixed array having 4 index , this is illegal 
	char arr1[4];					 				//declaration and initialize 2 method
	arr1[0]='a'; arr1[1]='b'; arr1[3]='d'; arr1[2]='c';
	printf("size of char data type : %d\n",sizeof(char));       //checking size of anydata type , char 1, int 4
	int i;
	printf("size of array having 4 element is : %d\n",sizeof(arr1));             //4 , as 1 element od char type is of 1bits so 4 element 1*4=4 bits
	while (i<4){
		printf("element at %d index of the array is : %c\n",i,arr1[i]);
		i++;
	}
	return 0;
}
