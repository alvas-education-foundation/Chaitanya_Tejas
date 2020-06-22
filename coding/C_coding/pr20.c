#include <stdio.h> 
int findSmallest(int arr[], int n) 
{ 
int res = 1;  
 
for (int i = 0; i < n && arr[i] <= res; i++) 
	res = res + arr[i]; 

return res; 
} 
 
int main() 
{ 
int arr1[100],n ;
printf("n :");
scanf("%d",&n);
printf("array :");
for(int i=0;i<n;i++){
    scanf("%d",&arr1[i]);
}
printf("There are no elements to get sum = %d",findSmallest(arr1, n)); 


return 0; 
} 

