PROBLEM STATEMENT:
Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.
Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N elements.
Output:
For each test case, print the count of all triplets, in new line. If no such triplets can form, print "-1".
Constraints:
1 <= T <= 100
3 <= N <= 105
1 <= A[i] <= 106
Example:
Input:
2
4
1 5 3 2
3
3 2 7
Output:
2
-1
Explanation:
Testcase 1: There are 2 triplets: 1 + 2 = 3 and 3 +2 = 5

Try your program for at least four different inputs. Each time, the array size should be minimum of Nine elements (More than Nine elements are welcome)

SOLUTION:
#include<stdio.h>
#include<math.h>

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int countWays(int arr[], int n)  
    {  
        int max_val = 0; 
        for (int i = 0; i < n; i++)  
            max_val = max(max_val, arr[i]);  
        
        int freq[20]={0};  
        for (int i = 0; i < n; i++)  
            freq[arr[i]]++;  
  
        int ans = 0; 
  
        ans += freq[0] * (freq[0] - 1) * (freq[0] - 2) / 6;  
  
        for (int i = 1; i <= max_val; i++)  
            ans += freq[0] * freq[i] * (freq[i] - 1) / 2;  
  
        for (int i = 1; 2 * i <= max_val; i++)  
            ans += freq[i] * (freq[i] - 1) / 2 * freq[2 * i];  
    
        for (int i = 1; i <= max_val; i++) {  
            for (int j = i + 1; i + j <= max_val; j++)  
                ans += freq[i] * freq[j] * freq[i + j];  
        }  
  
        return ans;  
    }  
  
    int main() 
    {  
        int arr[]={1, 5, 3, 2 };  
        int n = sizeof(arr)/sizeof(int);  
        printf("%d",countWays(arr, n));  
        return 0; 
} 
