// Array of Objects & Array within a Class

#include<iostream.h>
#include<conio.h>

class result
{
    int rno;
    char nm[20];
    int m[3];
    int total;

public:
    void get();
    void put();
};

void result::get()
{
    cout << "\nEnter Roll No: ";
    cin >> rno;

    cout << "Enter Name: ";
    cin >> nm;

    total = 0;

    for(int i = 0; i < 3; i++)
    {
        cout << "Enter Marks " << i + 1 << ": ";
        cin >> m[i];
        total = total + m[i];
    }
}

void result::put()
{
    cout << "\n" << rno << "\t" << nm;

    for(int i = 0; i < 3; i++)
    {
        cout << "\t" << m[i];
    }

    cout << "\t" << total;
}

void main()
{
    result r[5];

    clrscr();

    // Input
    for(int i = 0; i < 5; i++)
    {
        cout << "\n\nStudent " << i + 1 << endl;
        r[i].get();
    }

    // Output
    cout << "\n\nRno\tName\tM1\tM2\tM3\tTotal";

    for(int i = 0; i < 5; i++)
    {
        r[i].put();
    }

    getch();
}
/*Student 1
Enter Roll No: 101
Enter Name: Rahul
Enter Marks 1: 80
Enter Marks 2: 75
Enter Marks 3: 90

Student 2
Enter Roll No: 102
Enter Name: Amit
Enter Marks 1: 70
Enter Marks 2: 85
Enter Marks 3: 80

Student 3
Enter Roll No: 103
Enter Name: Jay
Enter Marks 1: 90
Enter Marks 2: 95
Enter Marks 3: 88

Student 4
Enter Roll No: 104
Enter Name: Ravi
Enter Marks 1: 65
Enter Marks 2: 70
Enter Marks 3: 75
output:

Rno     Name    M1      M2      M3      Total
101     Rahul   80      75      90      245
102     Amit    70      85      80      235
103     Jay     90      95      88      273
104     Ravi    65      70      75      210
105     Kiran   85      80      90      255 */