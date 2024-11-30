#include<stdio.h>
// #include<>
int main()
{
    int n,b,s;
    // int a[100];
    printf("enter length of array:");
    scanf("%d",&n);
int a[n];
printf("enter %d no one by one \n",n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);

}
printf("1.show all element");
printf("\n2.search a element");
scanf("%d",&b);
printf("elements are ::");
switch(b)
{
    case 1:
        for(int i=0;i<n;i++)
        {
            printf("%d",a[i]);
            printf("    ");
        }
    break;
    case 2:
    printf("enter number we have to search ");
    scanf("%d",&s);
        for(int i=0;i<n;i++)
        {
            if(s==a[i])
            {
                printf("location of %d is %d",s,i);
            }
        }
    break;
    default:
    printf("error");
}




    return 0;
}