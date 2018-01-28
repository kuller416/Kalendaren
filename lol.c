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
    if (m == 11 || m == 12)
    {
        c = c - 1;
        y = y - 1;
        if (y == -1)
        {
            y = 99;
        }
    }
    w = (d+ ((13*m - 1)/ 5)+ ((5*y)/ 4)+ ((c/4)-2*c))% 7;
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
