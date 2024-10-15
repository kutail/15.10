#include <iostream>
#include <Windows.h>

void Mass(char arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

void Mass(double arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

void Mass(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}




int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);   

    const int size = 5;
    int arr[size]{3, 2 ,1 ,2 ,3};
    char arr[size]{ 'g', 'a', 'd', 'f', 'x'};
    double arr[size]{3.12, 4.12, 5.24, 12.23, 2.12};

    Mass(arr, size);

    return 0;
}
