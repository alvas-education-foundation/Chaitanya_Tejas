#include <stdio.h> 

void leftRotatebyOne(int arr[], int n); 

void leftRotate(int arr[], int d, int n) 
{ 
	int i; 
	for (i = 0; i < d; i++) 
		leftRotatebyOne(arr, n); 
} 

void leftRotatebyOne(int arr[], int n) 
{ 
	int temp = arr[0], i; 
	for (i = 0; i < n - 1; i++) 
		arr[i] = arr[i + 1]; 
	arr[i] = temp; 
} 

void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		printf("Element at index %d : %d\n",i, arr[i]); 
} 

int main() 
{ 
	int arr[20],n,d;
	printf("n : ");
	scanf("%d",&n);
		printf("elements : ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("d : ");
	scanf("%d",&d);
	leftRotate(arr, d, n); 
	printArray(arr, n); 
	return 0; 
} 
