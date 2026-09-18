#include <iostream.h>
#include <conio.h>

void main()
{
    int avg;

    clrscr();

    cout << "Enter Average Marks: ";
    cin >> avg;

    switch (avg / 10)
    {
        case 10:
        case 9:
        case 8:
        case 7:
            cout << "\nGrade: Distinction";
            break;

        case 6:
            cout << "\nGrade: First";
            break;

        case 5:
            cout << "\nGrade: Second";
            break;

        case 4:
            cout << "\nGrade: Pass";
            break;

        default:
            cout << "\nGrade: Try Again";
    }

    getch();
}

=>output

Enter Average Marks: 75

Grade: Distinction

------------------------
Enter Average Marks: 65

Grade: First

------------------------
Enter Average Marks: 55

Grade: Second

------------------------
Enter Average Marks: 45

Grade: Pass

-----------------------------
Enter Average Marks: 30

Grade: Try Again