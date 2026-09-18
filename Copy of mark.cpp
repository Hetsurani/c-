#include <iostream.h>
#include <conio.h>

void main()
{
    int m1, m2, m3, fail = 0;

    clrscr();

    cout << "Enter marks of Subject 1: ";
    cin >> m1;

    cout << "Enter marks of Subject 2: ";
    cin >> m2;

    cout << "Enter marks of Subject 3: ";
    cin >> m3;

    if (m1 < 35)
        fail++;

    if (m2 < 35)
        fail++;

    if (m3 < 35)
        fail++;

    if (fail == 0)
        cout << "\nResult: PASS";

    if (fail == 1)
        cout << "\nResult: ATKT";

    if (fail >= 2)
        cout << "\nResult: FAIL";

    getch();
}