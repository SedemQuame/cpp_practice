// Program: Weekly wages

# include <iostream>
# include <iomanip>

using namespace std;

int main(){
    double wages, rate, hours;

    cout << fixed << showpoint << setprecision(2);
    cout << "Line 8: Enter working hours and rate: ";
    cin >> hours >> rate;

    if (hours > 40.0)
    {
        /* code */
        wages = 40.0 * rate + 1.5 * rate * (hours - 40.0);
    }else
    {
        /* code */
        wages = hours * rate;
    }

    cout << endl;
    cout << "Line 15: The wages are $" << wages << endl;

    return 0;
    
}