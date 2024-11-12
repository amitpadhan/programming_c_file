 #include<stdio.h>
int main()
 {


     float a,b;
     char c;
printf("enter operator(+,-,*,/)");
 scanf("%c",&c);

 printf("enter the first no ");
 scanf("%f",&a);

//  printf("enter operator(+,-,*,/)");
//  scanf("%c",&c);

 printf("enter the second no ");
scanf("%f",&b);

switch(c)
{
    case '+':
    printf("%f",a+b);
    break;
    case '-':
    printf("%f",a-b);
    break;
    case '*':
    printf("%f",a*b);
    break;
    case '/':
    printf("%f",a/b);
    break;
    default:
    printf("error:invalid operetion");
    break;
}
    return 0;
}