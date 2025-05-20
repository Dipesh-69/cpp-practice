// wap a program to enter 5 number and print the sum

#include<iostream>
using namespace std;

int main() 
{
    int *a ;
    a= new int[5];  // DMA: allocate memory for 5 integers
    cout << "Enter any five numbers:" << endl;

    // Input values
    for(int i = 0; i < 5; i++)
    {
        cin >> a[i];  //cin>>(a+i)
    }

    // Calculate sum
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        sum =sum+ a[i]; // *sum=*sum + *(a+i)
    }

    cout << "Sum = " << sum << endl;

    // Free allocated memory
    delete[] a;

    return 0;
}
