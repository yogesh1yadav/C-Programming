//2D array or matrices
//Ques: create and print the 2d array 

int main(){
	int arr[4][2]={{1,2},{3,4},{5,6},{7,8}};
	int i,j; 
	for (i=0;i<4;i++){  
		for(j=0;j<2;j++){                   
		printf("%d ",arr[i][j]);
		}
	}
return 0;
}

//int main(){
//	int arr[4][2]={{1,2},{3,4},{5,6},{7,8}};
//	int i,j; 
//	for (i=0,j=0;j<2;i++,j++){                       // syntax is correct but logic for solve this ques is wrong
//		printf("%d",arr[i][j]);
//	}
//return 0;
//}
