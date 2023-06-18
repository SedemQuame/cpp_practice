//  Binary Search
#include <iostream>

using namespace std;

int binarySearch(const int list[], int listLength, int searchItem);

int main()
{
    int list[] = {4, 8, 19, 25, 34, 39, 45, 48, 66, 75, 89, 95};
    int searchItem = 75;
    int searchItemIndx = binarySearch(list, 12, searchItem);
    cout << "Search item " << searchItem << " is at position " << searchItemIndx << endl;
    return 0;
}

int binarySearch(const int list[], int listLength, int searchItem)
{
    int first = 0;
    int last = listLength - 1;
    int mid;

    bool found = false;
    while (first <= last && !found)
    {
        mid = (first + last) / 2;
        if (list[mid] == searchItem)
        {
            found = true;
        }
        else if (list[mid] > searchItem)
        {
            last = mid - 1;
        }
        else
            first = mid + 1;
    }

    if (found)
    {
        return mid;
    }
    else
    {
        return -1;
    }
}
