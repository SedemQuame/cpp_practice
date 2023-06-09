// Bubble Sort

#include <iostream>

using namespace std;

void bubbleSort(int list[], int length);

int main()
{

    int list[] = {20, 36, 24, 65, 78, 45, 58, 90, 2, 15};
    bubbleSort(list, 10);

    cout << "After sorting, the list "
         << "elements are: " << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << list[i] << " ";
    }

    cout << endl;

    return 0;
}

void bubbleSort(int list[], int length)
{
    int temp;

    for (int iteration = 1; iteration < length; iteration++)
    {
        for (int index = 0; index < length - iteration; index++)
        {
            if (list[index] > list[index + 1])
            {
                temp = list[index];
                list[index] = list[index + 1];
                list[index + 1] = temp;
            }
        }
    }
}