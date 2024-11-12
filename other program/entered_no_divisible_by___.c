#include<stdio.h>
int main()
{
//float n;
int n,i=1;
printf("enter a  no. :");
scanf("%d",&n);
printf("%d divisible by ",n);
while(i<=9)
{
    if(n%i==0)
    {
        printf("%d",i);
        printf(",");
    }

    i++;
}
printf("%d",n);



    return 0;
}