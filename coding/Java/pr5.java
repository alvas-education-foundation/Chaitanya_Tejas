class Solution
{
public int reverse(int x)
{
int rev=0,rem=0,prev_rev=0;
while(x!=0){
rem=x%10;
rev=(rev*10)+rem;
x=x/10;
if((rem-rev)/10 !=prev_rev)
{
return 0;
}
prev_rev=rev;
}
return rev;
}
}
