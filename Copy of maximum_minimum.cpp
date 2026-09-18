//enters -999, then print the minimum and maximum number.
#include<iostream.h>
#include<conio.h>

void main()
{
    int num, min, max;

    clrscr();

    cout << "Enter number: ";
    cin >> num;

    if(num == -999)
    {
        cout << "No number entered.";
        getch();
        return;
    }

    min = max = num;

    while(1)
    {
        cout << "Enter number: ";
        cin >> num;

        if(num == -999)
            break;

        if(num < min)
            min = num;

        if(num > max)
            max = num;
    }

    cout << "\nMinimum number = " << min;
    cout << "\nMaximum number = " << max;

    getch();
}
/*Example Output
Enter number: 25
Enter number: 10
Enter number: 45
Enter number: 5
Enter number: 30
Enter number: -999

Minimum number = 5
Maximum number = 45

Logic:

-999 is the stop value and is not included in min/max.
min stores the smallest number.
max stores the largest number.*/