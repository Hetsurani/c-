//Murphy
#include<iostream.h>
#include<conio.h>

void main()
{
    int n, square, temp, divisor = 1;

    clrscr();

    cout << "Enter an integer: ";
    cin >> n;

    square = n * n;
    temp = n;

    // Count digits
    while(temp != 0)
    {
        divisor = divisor * 10;
        temp = temp / 10;
    }

    // Check Automorphic number
    if(square % divisor == n)
        cout << n << " is a Murphy number.";
    else
        cout << n << " is not a Murphy number.";

    getch();
}
/*Output 1
Enter an integer: 25
25 is a Murphy number.

Because:

25 × 25 = 625
625 % 100 = 25
Output 2
Enter an integer: 7
7 is not a Murphy number.

Because:

7 × 7 = 49
49 % 10 = 9*/