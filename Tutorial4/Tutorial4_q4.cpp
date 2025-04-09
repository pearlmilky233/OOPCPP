#include <iostream>
using namespace std;
class HeartRates
{
private:
    string firstName;
    string lastName;
    int birthYear;

public:
    HeartRates(string fName, string lName, int bYear)
    {
        firstName = fName;
        lastName = lName;
        birthYear = bYear;
    }

    void setFirstName(string fName)
    {
        firstName = fName;
    }

    void setLastName(string lName)
    {
        lastName = lName;
    }

    void setBirthYear(int bYear)
    {
        birthYear = bYear;
    }

    string getFirstName()
    {
        return firstName;
    }

    string getLastName()
    {
        return lastName;
    }

    int getBirthYear()
    {
        return birthYear;
    }

    int getAge(int currentYear)
    {
        return currentYear - birthYear;
    }

    int getMaximumHeartRate(int currentYear)
    {
        return 220 - getAge(currentYear);
    }

    void getTargetHeartRate(int currentYear)
    {
        int maxHeartRate = getMaximumHeartRate(currentYear);
        cout << "Target heart rate: " << (maxHeartRate * 0.50) << " - " << (maxHeartRate * 0.85) << endl;
    }
};

int main()
{
    string firstName, lastName;
    int birthYear, currentYear;

    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Enter birth year: ";
    cin >> birthYear;
    cout << "Enter current year: ";
    cin >> currentYear;
    cout << endl;

    HeartRates person(firstName, lastName, birthYear);

    cout << "First Name: " << person.getFirstName() << endl;
    cout << "Last Name: " << person.getLastName() << endl;
    cout << "Birth Year: " << person.getBirthYear() << endl;
    cout << "Age: " << person.getAge(currentYear) << endl;

    cout << "Maximum Heart Rate: " << person.getMaximumHeartRate(currentYear) << endl;

    person.getTargetHeartRate(currentYear);

    return 0;
}