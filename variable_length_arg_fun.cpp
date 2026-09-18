#include <iostream.h>
#include <conio.h>
#include <stdarg.h>

int sum(int n, ...)
{
    va_list list;
    int total = 0;
    int i;

    va_start(list, n);

    for(i = 0; i < n; i++)
    {
        total = total + va_arg(list, int);
    }

    va_end(list);

    return total;
}

void main()
{
    clrscr();

    cout << "Sum = " << sum(3, 10, 20, 30);
    cout << "\nSum = " << sum(5, 1, 2, 3, 4, 5);

    getch();
}
/*Output
Sum = 60
Sum = 15

Main point: ... allows the function to accept a variable number of arguments.*/