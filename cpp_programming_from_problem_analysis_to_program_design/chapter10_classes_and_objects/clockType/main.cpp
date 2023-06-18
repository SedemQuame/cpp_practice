#include <iostream>
using namespace std;

class clockType
{
private:
    int hr;
    int min;
    int sec;

public:
    void setTime(int, int, int);
    void getTime(int &, int &, int &) const;
    void printTime() const;
    void incrementSeconds();
    void incrementMinute();
    void incrementHours();
    bool equalTime(const clockType &) const;
    clockType(int, int, int); // constructor with parameters
    clockType();              // default constructor
};

int main()
{
    clockType myClock;
    clockType yourClock;

    int hours, minutes, seconds;

    // Set the time of myClock
    myClock.setTime(5, 4, 30);

    cout << "Line 9: myClock: ";
    myClock.printTime(); // print the time of myClock
    cout << endl;

    cout << "Line 12: yourClock: ";
    yourClock.printTime(); // print the time of myClock
    cout << endl;

    // Set the time of yourClock
    yourClock.setTime(5, 45, 16);
    cout << "Line 16: After setting, yourClock: ";
    yourClock.printTime(); // print the time of myClock
    cout << endl;

    // Compare myClock and yourClock
    if (myClock.equalTime(yourClock))
    {
        cout << "Line 20: Both times are equal."
             << endl;
    }
    else
    {
        cout << "Line 22: The two times are not equal."
             << endl;
    }

    cout << "Line 23: Enter the hours, minutes and seconds: ";
    cin >> hours >> minutes >> seconds;
    cout << endl;

    // Set the time of myClock using the value of the
    // variables hours, minutes and seconds
    myClock.setTime(hours, minutes, seconds);

    cout << "Line 27: New myClock: ";
    myClock.printTime();
    cout << endl;

    // Increment the time of myClock by one second.
    myClock.incrementSeconds();

    cout << "Line 31: After incrementing myClock by "
         << "one second, myClock: ";
    myClock.printTime();
    cout << endl;

    // Retrieve the hours, minutes and seconds of the object myClock
    myClock.getTime(hours, minutes, seconds);

    // Output the value of hours, minutes and seconds
    cout << "Line 35: hours = " << hours << ", minutes = " << minutes << ", seconds = " << seconds << endl;

    return 0;
}

clockType::clockType(int hours, int minutes, int seconds)
{
    if (0 <= hours && hours < 24)
    {
        hr = hours;
    }
    else
    {
        hr = 0;
    }

    if (0 <= minutes && minutes < 60)
    {
        min = minutes;
    }
    else
    {
        min = 0;
    }

    if (0 <= seconds && seconds < 60)
    {
        sec = seconds;
    }
    else
    {
        sec = 0;
    }
}

clockType::clockType()
{
    hr = 0;
    min = 0;
    sec = 0;
}

void clockType::setTime(int hours, int minutes, int seconds)
{
    if (0 <= hours && hours < 24)
    {
        hr = hours;
    }
    else
    {
        hr = 0;
    }

    if (0 <= minutes && minutes < 60)
    {
        min = minutes;
    }
    else
    {
        min = 0;
    }

    if (0 <= seconds && seconds < 60)
    {
        sec = seconds;
    }
    else
    {
        sec = 0;
    }
}

void clockType::printTime() const
{
    if (hr < 10)
    {
        cout << "0";
    }
    cout << hr << ":";

    if (min < 10)
    {
        cout << "0";
    }
    cout << min << ":";

    if (sec < 10)
    {
        cout << "0";
    }
    cout << sec;
}

void clockType::incrementHours()
{
    hr++;
    if (hr > 23)
    {
        hr = 0;
    }
}

void clockType::incrementMinute()
{
    min++;
    if (min > 59)
    {
        min = 0;
        incrementHours();
    }
}

void clockType::incrementSeconds()
{
    sec++;
    if (sec > 59)
    {
        sec = 0;
        incrementMinute();
    }
}

bool clockType::equalTime(const clockType &otherClock) const
{
    return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
}

void clockType::getTime(int &hours, int &minutes, int &seconds) const
{
    hours = hr;
    minutes = min;
    seconds = sec;
}