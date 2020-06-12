PROBLEM STATEMENT:
C Program to Generate All the Set Partitions of n Numbers Beginning from 1 and so on
This algorithm partitions an integer into numbers which sum up to form the original number. It generates partitions of a set of numbers for a given range.

Sample Input

Enter a number N to generate all set partition from 1 to N: 5
Integer partition for 1 is:
1

Integer partition for 2 is:
2
11

Integer partition for 3 is:
3
12
111

Integer partition for 4 is:
4
13
112
1111
22

Integer partition for 5 is:
5
14
113
1112
11111
122
23

SOLUTION:
#include<stdio.h>

void printArray(int p[], int n)
{
    for (int i = 0; i < n; i++)
       printf("%d ",p[i]);
    printf("\n");
}

void partition(int n)
{
    int p[n], true=1;
    int k = 0;
    p[k] = n;

    while (true)
    {
        printArray(p, k+1);

        int rem_val = 0;
        while (k >= 0 && p[k] == 1)
        {
            rem_val += p[k];
            k--;
        }

        if (k < 0)  return;

        p[k]--;
        rem_val++;

        while (rem_val > p[k])
        {
            p[k+1] = p[k];
            rem_val = rem_val - p[k];
            k++;
        }

        p[k+1] = rem_val;
        k++;
    }
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    partition(n);

    return 0;
}
