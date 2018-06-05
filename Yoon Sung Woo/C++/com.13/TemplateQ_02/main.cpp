#include <iostream>

template<class T>
T SumArray(T arr[], int len)
{
    T sum = 0;
    for(int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int bo = 0;
    int arr[5];
    
    double dbo = 0;
    double drr[5];

    for(int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
        drr[i] = i + 1.5;
    }

    bo  = SumArray(arr, 5);
    dbo = SumArray(drr, 5);
    

    std::cout << bo << std::endl;
    std::cout << dbo << std::endl;
}