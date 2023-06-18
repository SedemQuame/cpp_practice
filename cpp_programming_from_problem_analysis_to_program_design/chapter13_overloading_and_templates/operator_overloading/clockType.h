class clockType
{
public:
    void setTime(int hours, int minutes, int seconds);
    void printTime() const;

    bool operator==(const clockType &otherClock) const;
    // overload the operator ==

    clockType(int = 0, int = 0, int = 0);

private:
    int hr;
    int min;
    int sec;
};

bool clockType::operator==(const clockType &otherClock) const
{
    return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
}

void clockType::printTime() const
{
    if (hr < 10)
    {
        std::cout << "0";
    }
    std::cout << hr << ":";

    if (min < 10)
    {
        std::cout << "0";
    }
    std::cout << min << ":";

    if (sec < 10)
    {
        std::cout << "0";
    }
    std::cout << sec;
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
