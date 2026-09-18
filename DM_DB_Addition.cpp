#include <iostream.h>
#include <conio.h>

class DB;

class DM
{
    int meter;
    int centimeter;

public:
    DM()
    {
        meter = 0;
        centimeter = 0;
    }

    void getdata()
    {
        cout << "Enter meters: ";
        cin >> meter;
        cout << "Enter centimeters: ";
        cin >> centimeter;
    }

    void display()
    {
        cout << meter << " meters " << centimeter << " centimeters";
    }

    DM add(DB);
};

class DB
{
    int feet;
    int inches;

public:
    DB()
    {
        feet = 0;
        inches = 0;
    }

    void getdata()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void display()
    {
        cout << feet << " feet " << inches << " inches";
    }

    DB add(DM);
};

DM DM::add(DB d)
{
    DM temp;
    float totalCM;

    totalCM = (meter * 100) + centimeter;
    totalCM = totalCM + (d.feet * 30.48) + (d.inches * 2.54);

    temp.meter = (int)(totalCM / 100);
    temp.centimeter = (int)(totalCM - (temp.meter * 100));

    return temp;
}

DB DB::add(DM d)
{
    DB temp;
    float totalInches;

    totalInches = (feet * 12) + inches;
    totalInches = totalInches + (d.meter * 39.3701)
                  + (d.centimeter * 0.393701);

    temp.feet = (int)(totalInches / 12);
    temp.inches = (int)(totalInches - (temp.feet * 12));

    return temp;
}

void main()
{
    clrscr();

    DM d1, d3;
    DB d2, d4;

    cout << "Enter DM distance\n";
    d1.getdata();

    cout << "\nEnter DB distance\n";
    d2.getdata();

    d3 = d1.add(d2);
    d4 = d2.add(d1);

    cout << "\n\nResult in DM = ";
    d3.display();

    cout << "\nResult in DB = ";
    d4.display();

    getch();
}
/*Enter DM distance
Enter meters: 5
Enter centimeters: 25

Enter DB distance
Enter feet: 10
Enter inches: 6


Result in DM = 8 meters 46 centimeters
Result in DB = 27 feet 8 inches*/