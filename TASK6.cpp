#include<iostream>
using namespace std;

int coloringTimes(string color[],int size);

main()
{
    int size;
    
    
    cout << "Enter the size of Array: ";
    cin >> size;

    int i=0;
    string color[size];
    while(i<size)
    {
        cout << "Enter Element " << i+1 << ": ";
        cin >> color[i];
        i++;
    }

    int time = coloringTimes(color,size);
    cout << "Time to color: " << time << " seconds";
}
int coloringTimes(string color[],int size)
{
    int colorTime=2*size;
    int switchingTime=0;
    for(int i=0;i<size-1;i++)
    {
        if(color[i]!=color[i+1])
        {
            switchingTime++;
        }
    }
    int totalTime=colorTime+switchingTime;
    return totalTime;
}