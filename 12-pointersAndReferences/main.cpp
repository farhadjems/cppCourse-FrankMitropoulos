#include <iostream>

using namespace std;

void printArray(int array[], int size)
{
    cout << "[  ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "  ";
    }
    cout << "]" << '\n';
}

int *apply_all(int array1[], int size1, int array2[], int size2)
{
    int size = size1 * size2;
    int *results = new int[size];
    for (int i = 0; i < size2; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            results[i * size1 + j] = array2[i] * array1[j];
        }
    }

    return results;
}

int main()
{
    int array1[]{1, 2, 3, 4, 5};
    int array2[]{10, 20, 30};

    printArray(array1, 5);
    printArray(array2, 3);

    int *results = apply_all(array1, 5, array2, 3);
    printArray(results, 15);
}