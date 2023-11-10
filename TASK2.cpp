#include<iostream>
using namespace std;

string containsSeven(int numbers[],int size);

main()
{
    int size;
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

    string result = containsSeven(numbers,size);
    cout << result;
}
string containsSeven(int numbers[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        int j=numbers[i];
        while(j!=0)
        {
            int a=j%10;
            if(a==7)
            {
                count++;
                break;
            }
            j=j/10;
        }
        if(count>0)
        {
            break;
        }
    }
    if(count>0)
    {
        return "Boom!";
    }
    else
    {
        return "there is no 7 in the array";
    }
}