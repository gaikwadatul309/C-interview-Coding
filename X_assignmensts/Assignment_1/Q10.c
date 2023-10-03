 
 //C Program to draw Pyramid.
 #include<stdio.h>
int main(){

	int i,j,w,num;
	printf("Enter any number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
	    for(w=num-i;w>=0;w--){

		   printf(" "); 
	    }
	    for(j=0;j<(2*i)-1;j++){
		    printf("%d",i);
	    }
	    printf("\n");
	}
	return 0;


}
