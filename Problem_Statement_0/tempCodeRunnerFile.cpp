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
    int Code1, Code2;
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
