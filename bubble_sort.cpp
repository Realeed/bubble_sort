#include <iostream>

int array[7];
void make_arr()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int num6;
    int num7;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    std::cout << "Enter third number: ";
    std::cin >> num3;
    std::cout << "Enter forth number: ";
    std::cin >> num4;
    std::cout << "Enter fifth number: ";
    std::cin >> num5;
    std::cout << "Enter sixth number: ";
    std::cin >> num6;
    std::cout << "Enter seventh number: ";
    std::cin >> num7;
    array[0] = num1;
    array[1] = num2;
    array[2] = num3;
    array[3] = num4;
    array[4] = num5;
    array[5] = num6;
    array[6] = num7;
}
void bubble_sort()
{
    for (int i = 0; i < (sizeof(array) / sizeof(array[0])) - 1; i++)
    {
        for (int j = 0; j < (sizeof(array) / sizeof(array[0])) - 1; j++)
        {
            int num = array[j];
            if (array[j] > array[j + 1])
            {
                array[j] = array[j + 1];
                array[j + 1] = num;
            }
        }
    }
}
void cout_arr() 
{
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        std::cout << array[i] << " ";
    }
}
int main()
{
    make_arr();
    bubble_sort();
    cout_arr();
}
