#include <iostream>
#include <string>
using namespace std;

enum Gender { Male, Female };
enum Status { Married, Single };
enum MyFavouriteColor { Red, Green, Yellow, White };

int main()
{
    string Name;
    int Age;
    string City;
    string Country;
    int MonthlySalary;
    int YearlySalary;

    Gender MyGender;
    Status MyStatus;
    MyFavouriteColor Color;

    // Gender
    int GenderChoice;

    cout << "Please enter Gender (0 = Male, 1 = Female): ";
    cin >> GenderChoice;

    if (GenderChoice == 0)
    {
        MyGender = Gender::Male;
    }
    else
    {
        MyGender = Gender::Female;
    }

    // Status
    int StatusChoice;

    cout << "Please enter Status (0 = Married, 1 = Single): ";
    cin >> StatusChoice;

    if (StatusChoice == 0)
    {
        MyStatus = Status::Married;
    }
    else
    {
        MyStatus = Status::Single;
    }

    // Favourite Color
    int ColorChoice;

    cout << "Please enter Favourite Color "
         << "(0 = Red, 1 = Green, 2 = Yellow, 3 = White): ";
    cin >> ColorChoice;

    if (ColorChoice == 0)
    {
        Color = MyFavouriteColor::Red;
    }
    else if (ColorChoice == 1)
    {
        Color = MyFavouriteColor::Green;
    }
    else if (ColorChoice == 2)
    {
        Color = MyFavouriteColor::Yellow;
    }
    else
    {
        Color = MyFavouriteColor::White;
    }

    // Personal Information
    cout << "Please enter Name?" << endl;
    cin >> Name;

    cout << "Please enter Age?" << endl;
    cin >> Age;

    cout << "Please enter City?" << endl;
    cin >> City;

    cout << "Please enter Country?" << endl;
    cin >> Country;

    // Salary
    cout << "Please enter Monthly Salary?" << endl;
    cin >> MonthlySalary;

    YearlySalary = MonthlySalary * 12;

    // Output
    cout << "****************************" << endl;

    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
    cout << "City: " << City << endl;
    cout << "Country: " << Country << endl;
    cout << "Monthly Salary: " << MonthlySalary << endl;
    cout << "Yearly Salary: " << YearlySalary << endl;

    if (MyGender == Gender::Male)
    {
        cout << "Gender: Male" << endl;
    }
    else
    {
        cout << "Gender: Female" << endl;
    }

    if (MyStatus == Status::Married)
    {
        cout << "Status: Married" << endl;
    }
    else
    {
        cout << "Status: Single" << endl;
    }

    if (Color == MyFavouriteColor::Red)
    {
        cout << "Favourite Color: Red" << endl;
    }
    else if (Color == MyFavouriteColor::Green)
    {
        cout << "Favourite Color: Green" << endl;
    }
    else if (Color == MyFavouriteColor::Yellow)
    {
        cout << "Favourite Color: Yellow" << endl;
    }
    else
    {
        cout << "Favourite Color: White" << endl;
    }

    cout << "*****************************" << endl;

    return 0;
}
