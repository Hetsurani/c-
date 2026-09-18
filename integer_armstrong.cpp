//Armstrong number or not.
#include<iostream.h>
#include<conio.h>

void main()
{
    int num, rem, sum = 0, temp;

    clrscr();

    cout << "Enter an integer: ";
    cin >> num;

    temp = num;

    while(num > 0)
    {
        rem = num % 10;
        sum = sum + rem * rem * rem;
        num = num / 10;
    }

    if(temp == sum)
        cout << "Number is Armstrong";
    else
        cout << "Number is Not Armstrong";

    getch();
}
/*Example 1

Input:

Enter an integer: 153

Output:

Number is Armstrong

Because:

1³ + 5³ + 3³ = 1 + 125 + 27 = 153

Example 2

Input:

Enter an integer: 123

Output:

Number is Not Armstrong

Note: This simple program is for 3-digit Armstrong numbers, such as 153, 370, 371, and 407.*/