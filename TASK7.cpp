#include<iostream>
using namespace std;

void convertPINToDance(string pin);

main()
{
    string pin;

    cout << "Enter your PIN (4 digits): ";
    cin >> pin;

    convertPINToDance(pin);
}
void convertPINToDance(string pin)
{
    string MOVES[10]={"Shimmy","Shake","Pirouette","Slide","Box Step","Headspin","Dosado","Pop","Lock","Arabesque"};
    int i=0;
    char character[4];
    int ascii[4];
    while(pin[i]!='\0')
    {
        character[i]=pin[i];
        if(character[i]>='0' && character[i]<='9')
        {
            i++;
        }
        else
        {
            break;
        }
    }
    if(i==4)
    {
        int j=0;
        int k=10;
        while(j<i)
        {   
            character[j]=character[j]+j;
            int code=character[j];
            code=code-48;
            if(code>9)
            {
                code=code-10;
            }
            cout << MOVES[code];
            if(j<3)
            {
                cout << ", ";
            }
            j++;
        } 
    }
    else
    {
        cout << "Invalid input.";
    }
}