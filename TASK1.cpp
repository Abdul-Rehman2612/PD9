#include<iostream>
using namespace std;

bool isLengthEven(string word);

main()
{
    string word;

    cout << "Enter a String: ";
    getline(cin,word);

    bool result = isLengthEven(word);
    cout << result;
}
bool isLengthEven(string word)
{
    string Word=word;
    int i=0;
    char letter;
    while(Word[i]!='\0')
    {
        i++;
    }
    
    if(i%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}