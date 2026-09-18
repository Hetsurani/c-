//integer is a palindrome or not
#include<iostream.h>
#include<conio.h>

void main()
{
    int num, rem, rev = 0, temp;

    clrscr();

    cout << "Enter an integer: ";
    cin >> num;

    temp = num;

    while(num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if(temp == rev)
        cout << "Number is Palindrome";
    else
        cout << "Number is Not Palindrome";

    getch();
}

/*Example

Input:

Enter an integer: 121

Output:

Number is Palindrome

For 123, the output will be:

Number is Not Palindrome
Simple logic

For 121:

121 % 10 = 1 → last digit
12 % 10 = 2
1 % 10 = 1
Reverse = 121
Original = 121
Both are same → Palindrome.*/