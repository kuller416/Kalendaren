#include<stdio.h>
#include<stdlib.h>

int main()
{
    int d, m, y, c, w;
    printf("Enter day \t");
    scanf("%d", &d);
    printf("Enter month \t");
    scanf("%d", &m);
    printf("Enter year \t");
    scanf("%d", &y);
    c = y / 100;
    y = y % 100;
    if (m >=3 )
        m = m - 2;
        else
        m = m+10;
    w = (d+ ((13*m - 1)/ 5)+ ((5*y)/ 4)+ ((-7*c))/ 4)% 7;
    if (m == 11)
        {
            w = w - 1;
            if (w == -1)
                w = 6;
        }
    if (m == 12)
        {
            w = w - 1;
            if (w == -1)
                w = 6;
        }
    if (m == 12 && d == 29)
        {
            w = w -1;
            if (w == -1)
                w = 6;
        }
    if (c < 20 || c > 20)
        {
            w = w - 1;
            if (w == -1)
                w = 6;
        }
    if (c < 19 || c > 21)
        {
            w = w - 1;
            if (w == -1)
                w = 6;
        }
    if (c < 18 || c > 22)
        {
            w = w - 1;
            if (w == -1)
                w = 6;
        }
    if (c < 17 || c > 23)
        {
            w = w - 1;
            if (w == -1)
                w = 6;
        }
        if (c < 16 || c > 24)
        {
            w = w - 1;
            if (w == -1)
                w = 6;
        }
        if (c < 15 || c > 25)
        {
            w = w - 1;
            if (w == -1)
                w = 6;
        }
        if (c < 14 || c > 26)
        {
            w = w - 1;
            if (w == -1)
                w = 6;
        }
        if (c < 13 || c > 27)
        {
            w = w - 1;
            if (w == -1)
                w = 6;
        }
        if (c < 12 || c > 28)
        {
            w = w - 1;
            if (w == -1)
                w = 6;
        }
        if (c < 11 || c > 29)
        {
            w = w - 1;
            if (w == -1)
                w = 6;
        }
        if (c < 10 || c > 30)
        {
            w = w - 1;
            if (w == -1)
                w = 6;
        }
        if (c < 9 || c > 31)
        {
            w = w - 1;
            if (w == -1)
                w = 6;
        }
    switch(w)
    {
        case 0:
              printf("Sunday");
        break;

        case 1:
              printf("Monday");
        break;

        case 2:
              printf("Thusday");
        break;

        case 3:
              printf("Wednesday");
        break;

        case 4:
              printf("Thursday");
        break;

        case 5:
              printf("Friday");
        break;

        case 6:
              printf("Saturday");
        break;
    }
return 0;
}
