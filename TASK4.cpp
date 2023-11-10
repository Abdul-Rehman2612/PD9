#include<iostream>
using namespace std;

void evenOddTransformation(int numbers[],int size,int n);

main()
{
    int size,n;
    
    cout << "Enter the size of Array: ";
    cin >> size;

    int i=0;
    int numbers[size];
    while(i<size)
    {
        cout << "Enter Element " << i+1 << ": ";
        cin >> numbers[i];
        i++;
    }

    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> n;

    evenOddTransformation(numbers,size,n);
}
void evenOddTransformation(int numbers[],int size,int n)
{
    int evOdTr=2*n; 
    for(int i=0;i<size;i++)
    {
        if(numbers[i]%2==0)
        {
            numbers[i]=numbers[i]-evOdTr;
        }
        else
        {
            numbers[i]=numbers[i]+evOdTr;
        }
    }
    cout << "[";
    for(int j=0;j<size;j++)
    {
        if(j==size-1)
        {
            cout << numbers[j];
            break;
        }
        cout <<  numbers[j] << ", ";
    }
    cout << "]";
}