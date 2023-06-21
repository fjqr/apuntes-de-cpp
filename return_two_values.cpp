#include <iostream>

void minMax(int arr[], int size, int *min, int *max)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}

int main()
{
    int my_nums[5] = {45, 654, 234, -65, 76456};
    int size = sizeof(my_nums) / sizeof(my_nums[0]);
    int min = my_nums[0];
    int max = my_nums[0];

    minMax(my_nums, size, &min, &max);

    std::cout << "Min: " << min << '\n';
    std::cout << "Max: " << max << '\n';

    return 0;
}

/*
Los valores de min y max son pasados como referencia a la función
minMax(), luego, son alterados y esos cambios son reflejados en las
variables originales.

*/