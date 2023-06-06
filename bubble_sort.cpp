#include <iostream>

void bubble(int arr[], int size);
int main()
{

    int my_arr[] = {4, 2, 10, 5, 6, 9, 8, 1, 7, 3};
    int size = sizeof(my_arr) / sizeof(my_arr[0]);
    bubble(my_arr, size);

    for (int num : my_arr)
    {
        std::cout << num << '\n';
    }
    return 0;
}

void bubble(int arr[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}