// Insertion Sort

#include <iostream>

using namespace std;

void insertionSort(int list[], int length);

int main()
{
    int list[] = {20, 36, 24, 65, 78, 45, 58, 90, 2, 15};
    insertionSort(list, 10);

    cout << "After sorting, the list "
         << "elements are: " << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << list[i] << " ";
    }

    cout << endl;

    return 0;
}

void insertionSort(int list[], int listLength)
{
    int firstOutOfOrder, location;
    int temp;

    for (int firstOutOfOrder = 1; firstOutOfOrder < listLength; firstOutOfOrder++)
    {
        if (list[firstOutOfOrder] < list[firstOutOfOrder - 1])
        {
            temp = list[firstOutOfOrder];
            location = firstOutOfOrder;

            do
            {
                /* code */
                list[location] = list[location - 1];
                location--;
            } while (location > 0 && list[location - 1] > temp);

            list[location] = temp;
        }
    }
}