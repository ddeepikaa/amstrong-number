# amstrong-number
#include<stdio.h>
int main()
{
 int num=153,safe;
 int rem,div,sum=0,pro;
 safe=num;
 while(num!=0)
 {
   rem=rem%10;
   num=num/10;
   pro=rem*rem*rem;
   sum=sum+pro;
 }
if(safe==sum)
  printf("armstron number");
else 
 printf("not a armstong number");
}
