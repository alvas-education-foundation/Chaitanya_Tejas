PROBLEM STATEMENT:
Write a C Program to generate first N Armstrong Numbers
Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

Example 1:
Let's try to understand why 153 is an Armstrong number.
153 = (111)+(555)+(333)
where:
(111)=1
(555)=125
(333)=27
So:
1+125+27=153
Example 2:
371 = (333)+(777)+(111)
where:
(333)=27
(777)=343
(111)=1
So:
27+343+1=371
SOLUTION:
#include <stdio.h>
int checkArmstrong(int num){
	int tempNumber,rem,sum;
	tempNumber=num;
	sum=0;
	while(tempNumber!=0)
	{
		rem=tempNumber%10;
		sum=sum + (rem*rem*rem);
		tempNumber/=10;
	}  
  if(sum==num)  
      return 1;
  else
      return 0;
}
void main()
{
	int i, n;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	printf("All Armstrong numbers from 1 to %d:\n",n);
	for(i=1;i<=n;i++)
	{
		if(checkArmstrong(i))
			printf("%d  ",i);
	}
	printf("\n");
}
