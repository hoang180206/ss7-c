#include<stdio.h>
int main(){
	int array[] = {1,2,3,4,5};
	 int length = sizeof(array) / sizeof(array[0]);
	int i;
	for(i=0;i<5;i++){
		printf("array[%d]] =",i);
		printf("gia tri cac phan tu trong mang la \n");
		printf("array[%d] = %d \n ",i,array[i]); 
		printf("do dai cua mang la: %d\n", length);
	} 
	return 0; 
} 
