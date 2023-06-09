#include <iostream>
using namespace std;

int largest(const int list[], int lowerIndex, int upperIndex);

int main()
{
    int intArray[10] = {23, 43, 35, 38, 67, 12, 76, 10, 34, 8};
    cout << "The largest element in intArray: "
         << largest(intArray, 0, 9);
    return 0;
}

int largest(const int list[], int lowerIndex, int upperIndex)
{
    int max;
    if (lowerIndex == upperIndex)
    {
        return list[upperIndex];
    }
    else
    {
        max = largest(list, lowerIndex + 1, upperIndex);
        return list[lowerIndex] >= max ? list[lowerIndex] : max;
    }
}
