#include<iostream>
using namespace std;

string longest7SegmentWord(string word[],int size);

main()
{
    int size;

    cout << "Enter the number of words: ";
    cin >> size;

    cout << "Enter the words, one by one: " << endl;
    string word[size];
    int i=0;
    while(i<size)
    {
        cin >> word[i];
        i++;
    }

    cout << "Longest 7-segment word: " << longest7SegmentWord(word,size);
}
string longest7SegmentWord(string word[],int size)
{
    string result="";
    int count[size];
    for(int i=0;i<size;i++)
    {
        count[i]=0;
        string words=word[i];
        int j=0;
        while(words[j]!='\0')
        {
            if(words[j]=='k' || words[j]=='m' || words[j]=='v' || words[j]=='w' || words[j]=='x')
            {
                word[i]="";
                count[i]=0;
                break;
            }
            count[i]=count[i]+1;
            j++;
        }
    }
    for(int k=0;k<size-1;k++)
    {
        if(count[k+1]>count[k])
        {
            result=word[k+1];
        }
    }
    return result;
}