#include <stdio.h>
//#include <conio.h>
int main()
{
    //clrscr();
    float a, b, c, d, e, avg;
    printf("enter 5 marks of student one-by-one(not more then 100) ::");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    avg = (a + b + c + d + e) / 5;
    if (a > 100 || b > 100 || c > 100 || d > 100 || e > 100)
    {
        printf("mark can not more then 100\n");
    }
    else
    {
        avg = (a + b + c + d + e) / 5;

        if (avg > 60)
        {
            printf("1st class");
        }
        else if (avg >= 50 && avg < 60)
        {
            printf("2nd class");
        }
        else if (avg >= 35 && avg < 50)
        {
            printf("3rd class");
        }
        else
        {
            printf("fail");
        }
    }
    //getch();
    return 0;
}