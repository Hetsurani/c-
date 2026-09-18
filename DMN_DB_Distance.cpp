#include <iostream.h>
#include <conio.h>

class DB;   // Forward declaration

class DMN
{
    int meter;
    int centimeter;

public:
    void getdata()
    {
        cout << "Enter distance in meters: ";
        cin >> meter;
        cout << "Enter centimeters: ";
        cin >> centimeter;
    }

    void display()
    {
        cout << "\nDistance in DMN: "
             << meter << " meters "
             << centimeter << " centimeters";
    }

    friend void add(DMN, DB);
};

class DB
{
    int feet;
    int inches;

public:
    void getdata()
    {
        cout << "\nEnter distance in feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void display()
    {
        cout << "\nDistance in DB: "
             << feet << " feet "
             << inches << " inches";
    }

    friend void add(DMN, DB);
};

void add(DMN d1, DB d2)
{
    float totalMeter, totalFeet;

    totalMeter = d1.meter + d1.centimeter / 100.0;
    totalFeet = d2.feet + d2.inches / 12.0;

    cout << "\n\nTotal distance in meters = "
         << totalMeter << " meters";

    cout << "\nTotal distance in feet = "
         << totalFeet << " feet";
}

void main()
{
    clrscr();

    DMN d1;
    DB d2;

    d1.getdata();
    d2.getdata();

    d1.display();
    d2.display();

    add(d1, d2);

    getch();
}
/*Enter distance in meters: 5
Enter centimeters: 25

Enter distance in feet: 10
Enter inches: 6

Distance in DMN: 5 meters 25 centimeters
Distance in DB: 10 feet 6 inches

Total distance in meters = 5.25 meters
Total distance in feet = 10.5 feet*/