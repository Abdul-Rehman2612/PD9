#include<iostream>
using namespace std;

int commonLetters(string word[]);

main()
{
    string word[2];

    cout << "Enter the first string: ";
    cin >> word[0];

    cout << "Enter the second string: ";
    cin >> word[1];

    int result = commonLetters(word);

    cout << "Number of common characters: " << result;
}
int commonLetters(string word[])
{
    string word1=word[0];
    string word2=word[1];
    int i=0;
    int count=0;
    int k[i];
    while(word1[i]!='\0')
    {
        int j=0;
        while(word2[j]!='\0')
        {
            if(word1[i]==word2[j])
            {
                count++;
                word2[j]='*';
                j++;
                break;
            }
            j++;
        }
        i++;
    }
    return count;
}