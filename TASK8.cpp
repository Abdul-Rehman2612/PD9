#include<iostream>
using namespace std;

string brokenLetters(string correctPhrase,string actualPhrase);

main()
{
    string correctPhrase,actualPhrase;

    cout << "Enter the correct phrase: ";
    getline(cin,correctPhrase);

    cout << "Enter what you actually typed: ";
    getline(cin,actualPhrase);

   cout << "Broken keys: " << brokenLetters(correctPhrase,actualPhrase);

}
string brokenLetters(string correctPhrase,string actualPhrase)
{
    string brokenKeys[correctPhrase.length()];
    string words="";
    int i=0;
    while(correctPhrase[i]!='\0')
    {
        if(correctPhrase[i]!=actualPhrase[i])
        {
            brokenKeys[i]=correctPhrase[i];
            if(i==0)
            {
                words=words+brokenKeys[i];
            }
            for(int j=0;j<i;j++)
            {
                if(brokenKeys[i]==brokenKeys[j] && j!=i-1)
                {
                    break;
                }
                else if(brokenKeys[i]!=brokenKeys[j] && j==i-1)
                {
                    words=words+brokenKeys[i];
                    break;
                }
            }
        }
        i++;
    }
    return words;
}