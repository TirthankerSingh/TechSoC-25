/*#include<iostream>
#include<string>


using namespace std;
int main()
{


char ch='a';
cout << "value of a is "<< static_cast<int>(ch);
return 0;









} */
// Learning Static Cast 1

/*#include<iostream>
#include<string>


using namespace std;
int main()

{
string Str{}; int shift ;

cout << "Please enter message you wish to encrypt" << endl;
getline(cin>>ws,Str);
cout << " Enter the shift value " << endl;
cin >> shift;

for(int i=0;i<Str.length();i++)
{
     if (static_cast<int>Str[i]!=32)

{

   if(static_cast<int>Str[i]<=90 && static_cast<int>Str[i]>=65)
    {
         int D;
         D=static_cast<int>Str[i]+shift;

         if(D<=90 && D >=65)
        { Str[i] = static_cast<char>(D);}


        else if( D>90)
        {

           Str[i]=static_cast<char>(65+shift-1);

        }

        else_if(D<65)
        {

           Str[i]=static_cast<char>(90-shift+1);

        }

    }

 if(static_cast<int>Str[i]<=122 && static_cast<int>Str[i]>=97)
    {
         int D;
         D=static_cast<int>Str[i]+shift;

         if(D<=122 && D >=97)
        { Str[i] = static_cast<char>(D);}


        else if( D>122)
        {

           Str[i]=static_cast<char>(97+shift-1);

        }

        else if(D<97)
        {

           Str[i]=static_cast<char>(122-shift+1);

        }

    }





}}
cout << Str;
return 0;
}









}*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Str{};
    int shift;

    cout << "Please enter message you wish to encrypt/decrypt" << endl;
    getline(cin >> ws, Str);

    int Code;
    cout << " Enter the shift value " << endl;
    cin >> shift;
start:
    cout << " Press 1 to encode " << endl
         << "Press 2 to decode " << endl;
    double Code1, Code2;
    cin >> Code;
    // goto se hi ho paya While, for ,if se nahi ho pa raha tha its not good alternative

    if (Code != 1 && Code != 2)
    {

        goto start;
    }

    for (int i = 0; i < Str.length(); i++)
    {

        int D;
        if ((Code == 1 && shift > 0) || (Code == 2 && shift < 0))
        {
            D = static_cast<int>(Str[i]) + abs(shift);

            if (static_cast<int>(Str[i]) <= 90 && static_cast<int>(Str[i]) >= 65)
            {

                if (D <= 90 && D >= 65)
                {
                    Str[i] = static_cast<char>(D);
                }
                else if (D > 90)
                {
                    Str[i] = static_cast<char>(65 + (D - 91) % 26);
                }
                else if (D < 65)
                {
                    Str[i] = static_cast<char>(90 - (65 - D - 1) % 26);
                }
            }

            if (static_cast<int>(Str[i]) <= 122 && static_cast<int>(Str[i]) >= 97)
            {
                int D;
                D = static_cast<int>(Str[i]) + shift;

                if (D <= 122 && D >= 97)
                {
                    Str[i] = static_cast<char>(D);
                }
                else if (D > 122)
                {
                    Str[i] = static_cast<char>(97 + (D - 123) % 26);
                }
                else if (D < 97)
                {
                    Str[i] = static_cast<char>(122 - (97 - D - 1) % 26);
                }
            }
        }

        if ((Code == 1 && shift < 0) || (Code == 2 && shift > 0))

        {

            D = static_cast<int>(Str[i]) - abs(shift);

            if (static_cast<int>(Str[i]) <= 90 && static_cast<int>(Str[i]) >= 65)
            {

                if (D <= 90 && D >= 65)
                {
                    Str[i] = static_cast<char>(D);
                }
                else if (D < 65)
                {
                    Str[i] = static_cast<char>(65 + (91 - D) % 26);
                }
                else if (D > 90)
                {
                    Str[i] = static_cast<char>(90 - (65 - D - 1) % 26);
                }
            }

            if (static_cast<int>(Str[i]) <= 122 && static_cast<int>(Str[i]) >= 97)
            {
                int D;
                D = static_cast<int>(Str[i]) + shift;

                if (D <= 'z' && D >= 97)
                {
                    Str[i] = static_cast<char>(D);
                }
                else if (D < 97)
                {
                    Str[i] = static_cast<char>(97 + (123 - D) % 26);
                }
                else if (D > 122)
                {
                    Str[i] = static_cast<char>(122 - (97 - D - 1) % 26);
                }
            }
        }
    }

    cout << Str;
    return 0;
} 


// The mistake was i was using shift but it isnt wrapping properly

/*No duplication (uppercase/lowercase logic merged)

No goto (proper loop for menu)

No shadowed variables

One-time shift direction adjustment

Fast wrap-around math (modulus)

Better prompts + input validation

*/
/*
#include <iostream>
#include <string>
using namespace std;

int Shifter(int Shift)
{

    if (Shift <= 0)
    {
        Shift = -(abs(Shift) % 26);
    }

    else
    {
        Shift = abs(Shift) % 26;
    }
    
    int A = int Action();
    if (int Action() == 1)
    {
        return Shift;
    }

    else
    {
        return -Shift;
    }
}

int Action(int Input)
{

    cout << "Press 1 to encrypt" << endl
         << "Press 2 to decrypt" << endl;
    Input = floor(Input);
    return Input;
}

int main()
{

    string String;
    cout << "Enter the message you wish to encrypt or decrpyt ";
    cin >> String;

    int Input();
    while (Input != 1 || Input != 2)
    {

        int Input();
    }

    static char c;
    for (char c : String)
    {
        char b = char c + int Shifter()

                              if (('a' <= (char b) <= 'z') || ('A' <= (char b) <= 'Z'))
        {
            char c = char b;
        }
        else if ('a' <= (char c) <= 'z')
        {
            if ((char b) >= 'z')
            {

                char c = char 'a' + char b - char 'z';
            }
            else
            {

                char c = char 'z' - (char 'a' - char b);
            }
        }

        else if ('A' <= (char c) <= 'Z')
        {
            if ((char b) >= 'Z')
            {

                char c = char 'A' + char b - char 'Z';
            }
            else
            {

                char c = char 'Z' - (char 'A' - char b);
            }
        }
    }

    cout << String << endl;
    return 0;
}
*/


/*
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int Action(int Input) 
{
    cout << "Press 1 to encrypt" << endl
         << "Press 2 to decrypt" << endl;
    cin >> Input;
    return Input;
}

int Shifter(int Shift)
{
    if (Shift <= 0)
    {
        Shift = -(abs(Shift) % 26);
    }
    else
    {
        Shift = abs(Shift) % 26;
    }

    int act = Action(0); 
    if (act == 1)
    {
        return Shift;
    }
    else
    {
        return -Shift;
    }
}

int main()
{
    string String;
    cout << "Enter the message you wish to encrypt or decrypt: ";
    cin >> String;

    int shift;
    cout << "Enter shift value: ";
    cin >> shift;

    int sh = Shifter(shift);

    for (char &c : String)
    {
        char b = c + sh;

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            c = b;
        }
        else if (c >= 'a' && c <= 'z')
        {
            if (b > 'z')
                c = 'a' + (b - 'z' - 1);
            else
                c = 'z' - ('a' - b - 1);
        }
        else if (c >= 'A' && c <= 'Z')
        {
            if (b > 'Z')
                c = 'A' + (b - 'Z' - 1);
            else
                c = 'Z' - ('A' - b - 1);
        }
    }

    cout << String << endl;
    return 0;
}*/
