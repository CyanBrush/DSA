#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int data = 10;
	int i;
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("%d", n);
	
	for(i=0;i<n;i++){
		if(arr[i] == data){
			printf("Element found at index: %d", i);
			break;
		}
	}
	if(i == n){
		printf("Element not found");
	}		
}
