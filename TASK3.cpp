#include<iostream>
using namespace std;

bool areAllElementsIdentical(string elements[],int size);

main()
{
    int size;
    
    
    cout << "Enter the size of Array: ";
    cin >> size;

    int i=0;
    string elements[size];
    while(i<size)
    {
        cout << "Enter Element " << i+1 << ": ";
        cin >> elements[i];
        i++;
    }

    bool result = areAllElementsIdentical(elements,size);
    cout << result;
}
bool areAllElementsIdentical(string elements[],int size)
{
    bool x;
    for(int i=0;i<size-1;i++)
    {
        if(elements[i]==elements[i+1])
        {
            x=true;
            continue;
        }
        else
        {
            x=false;
            break;
        }
    }
    return x;
}