#include <stdio.h>
int main()
{

float a,b,c;
printf("enter 3 no. one by one :\n");
scanf("%f%f%f",&a,&b,&c);
if(a==b)
{
    printf("two or three no are same\n");
}
else if(b==c)
{
    printf("two or three no are same\n");
}else if(a==c)
{
    printf("two or three no are same\n");
}
if(a>b)
{
    if(a>c){
        printf("%f is gratest no. among 3 :",a);
    }
    else{
        printf("%f is gratest no. among 3 : ",c);
    }
}
else
{
    if(b>c)
    {
        printf("%f is gratest no. among 3 :",b);
    }else{
        printf("%f is gratest no. among 3 :",c);

    }
}


    return 0;
}