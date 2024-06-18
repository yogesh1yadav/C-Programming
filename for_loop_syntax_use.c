//loop advantage: code reusability, saves time, traversing
//print 1 to 10

int main(){
	int i;
	for (i=0;i<10;i++){
		printf("%d ",i+1);
	}
	return 0;
}

//syntax of for loop;
// for(exp1;exp2;exp3){
//		code   }

// (1)
int main()                        								
{int i,j;
for (i=0,j=0; i<5,j<3;j++,i++){                            //i=0 j=2	, i=1 j=1,  i=1 j=2
	printf ("i=%d j=%d\n",i,j);
	}
return 0;
}

// (2)
int main()                        								
{int i,j;
for (i=0,j=0; j<5,i<3;j++,i++){                              //i=0 j=0, i=1 j=1 ,i=2 j=2
	printf ("i=%d j=%d\n",i,j);
	}
return 0;
}

// (3)
int main()                        								
{int i,j;
for (i=0,j=0; j<3,i<5;j++,i++){                              //i=0 j=0,i=1 j=1,i=2 j=2,i=3 j=3,i=4 j=4
	printf ("i=%d j=%d\n",i,j);
	}	
return 0;
}
/* from above outputs conclusion: exp 1, exp2, exp3 are optional ,
in exp2 , can give more conditions, but compiler will take care of only last statement of exp2, if its got false , loop stops*/
