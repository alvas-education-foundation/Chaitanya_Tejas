PROBLEM STATEMENT:
Given an array of positive integers. Write a C Program to find inversion count of array.
Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum.
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, the size of array. The second line of each test case contains N elements.
Output:
Print the inversion count of array.
Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
1 ≤ C ≤ 1018
Example:
Input:
1
5
2 4 1 3 5
Output:
3
Explanation:
Testcase 1: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).

SOLUTION:
#include <stdio.h> 
int getInvCount(int arr[], int n) 
{ 
	int inv_count = 0; 
	for (int i = 0; i < n - 1; i++) 
		for (int j = i + 1; j < n; j++) 
			if (arr[i] > arr[j]) 
				inv_count++; 
	return inv_count; 
} 
void main() 
{ 
	int arr[50], n,t;
	printf("Enter the number of test cases\n");
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		printf("Enter the array size : ");
		scanf("%d",&n);
		printf("Enter the elements\n");
		for(int j=0;j<n;j++)
			scanf("%d",&arr[j]);
		printf("Number of inversions are %d \n", getInvCount(arr, n)); 
		printf("------------------------------\n");
	}
} 
