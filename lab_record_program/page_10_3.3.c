/*
write a program using switch case thar read 4 no and display the menu that offers 4 option
1.total
2.avg
3.display smallest no
4.display bigest no
*/



#include<stdio.h>
int main()
{
float a,b,c,d;
int e;
printf("enter 1st no ");
scanf("%f",&a);
printf("enter 2nd no ");
scanf("%f",&b);
printf("enter 3rd no ");
scanf("%f",&c);
printf("enter 4th no ");
scanf("%f",&d);


printf("          1.total \n");
printf("          2.avgarage\n");
printf("          3.dispaly smallest no\n");
printf("          4.display bigest no\n");
scanf("%d",&e);


switch(e)
{
    case 1:
    printf("sum of %f,%f,%f,%f is %f",a,b,c,d,a+b+c+d);
    break;
    case 2:
    printf("avg of %f,%f,%f,%f is %f",a,b,c,d,(a+b+c+d)/4);
    break;
    case 3:
    while(a>0)
    {
        if(a<b&&a<c&&a<d)
        {
            printf("%f is smallest no ",a);
        }

        if(b<a&&b<c&&b<d)
        {
            printf("%f is smallest no ",b);
        }
        if(c<a&&c<b&&c<d)
        {
            printf("%f is smallest no ",c);
        }
                if(d<a&&d<b&&d<c)
        {
            printf("%f is smallest no ",d);
        }
    goto aa;
    }
    break;


    case 4:
    while(b>0)
    {
      if(a>b&&a>c&&a>d)
        {
            printf("%f is bigest no ",a);
        }

        if(b>a&&b>c&&b>d)
        {
            printf("%f is bigest no ",b);
        }
        if(c>a&&c>b&&c>d)
        {
            printf("%f is bigest no ",c);
        }
                if(d>a&&d>b&&d>c)
        {
            printf("%f is bigest no ",d);
        }
    goto bb;
    }
        break;


        default:
        printf("error");
}

aa:
bb:
    return 0;
}
