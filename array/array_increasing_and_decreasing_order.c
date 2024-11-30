#include<stdio.h>
int main(){
int i,c,temp,o,n;
    printf("enter length of array:");
    scanf("%d",&n);
int a[n];
printf("enter %d no one by one \n",n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("1.decresing order\n");
printf("2.incresing order");
scanf("%d",&o);
switch(o)
{
    case 1:
for(i=0;i<n;i++)
{
    for(int j=1;j<n;j++)
    {
        if(a[j-1]<a[j])
        {
            temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
        }
    }
}
break;
case 2:
    for(i=0;i<n;i++)
{
    for(int j=1;j<n;j++)
    {
        if(a[j-1]>a[j])
        {
            temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
        }
    }
}


}





        for(int i=0;i<n;i++)
        {
            printf("%d",a[i]);
            printf("    ");
        }







    return 0;
}