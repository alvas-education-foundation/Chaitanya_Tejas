#include <stdio.h> 

// Function to find the absolute value 
void findAbsolute(int N) 
{ 

	// If the number is less than 
	// zero, then multiply by (-1) 
	if (N < 0) { 
		N = (-1) * N; 
	} 

	// Print the absolute value 
	printf("%d ", N); 
} 

// Driver Code 
int main() 
{ 

	// Given integer 
	int N = -12; 

	// Function call 
	findAbsolute(N); 
	return 0; 
} 

