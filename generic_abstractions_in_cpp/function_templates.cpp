void swap(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

// using generic function templates
template <class T>
void swap(T &x, T &y)
{
    T tmp = x;
    x = y;
    y = tmp;
}

/*Things to note about C++ Function Templates.
* For each type variable at least on function argument must
  must depend on the type variable.
*/

template <class T>
void sort(int count, T *A[count])
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count - 1; j++)
        {
            if (A[j] < A[i])
            {
                swap(A[i], A[j]);
            }
        }
    }
}
