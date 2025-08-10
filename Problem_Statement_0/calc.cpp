/*#include <iostream>
using namespace std;

int main() {
    cout << "LEVEL 1 CALCULATOR" << endl;
    cout << "Enter the expression you wish to solve7:" << endl;

    double a, b;
    char op;
    cin >> a >> op >> b;

    switch (op) {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            if (b == 0)
                cout << "Error: Division by zero!";
            else
                cout << a / b;
            break;
        default:
            cout << "Enter a valid operator from among + - * /";
    }

    return 0;
}
*/

/*#include <iostream>

using namespace std;

int main()
 {
string expression ;
cout << "Enter the expression" << endl;
 cin >> expression ;
  int m = expression.size();
 cout << m;
}*/
// the issue with this it doesnt reads how many parts there are but that suppose like 1+23 , you want 3 but you will get 4

// #include <iostream>
// #include<string>
// #include <array>
// using namespace std;

// int main()
// {
//     string str;
//     int count=0;
//  cout << " enter the string " ;
//   cin >> str;
//   for ( int i=0;i<str.length();i++)
//    {
// if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/' )
// {
//     count++;

//    }

// }
// char Exp[(2*count)+1];
// double B= (2*count)+1;
// double A{};
// for(int j=1;j<B;j++)
// {
//  if (Exp[j]=='+')

//  {
//  A = stoll(Exp[j-1]) + stoll(Exp[j+1]);

// Exp[j+1]=to_string(A);
//  }
//  if (Exp[j]=='-')

//  {
//  A = stoll(Exp[j-1]) - stoll(Exp[j+1]);

// Exp[j+1]=to_string(A);
//  }

//  if (Exp[j]=='*')

//  {
//  A = stoll(Exp[j-1]) * stoll(Exp[j+1]);

// Exp[j+1]=to_string(A);
//  }
//  if (Exp[j]=='/')

//  {
//  A = stoll(Exp[j-1]) / stoll(Exp[j+1]);

// Exp[j+1]=to_string(A);
//  }

// }

// cout << " result is " << Exp[B];

// return 0;
// }

/*#include <iostream>

#include <string>

#include <array>

using namespace std;

int Length(string D)

{

    int B = D.length();

    // cout << "Length of expression is - " << B ;

    int count = 0;
    double A;

    for (int i = 0; i < B; i++)

    {
        if (D[i] == '+' || D[i] == '/' || D[i] == '*' || D[i] == '-')

        {
            count++;
        }
    }

    int b = 2 * count + 1;

    return b;
}

int main()

{
    string Str;

    cout << "enter the expression" << endl;
    cin >> Str;
    string C=Str;
    int Shift = 0;
    int g;
    

   while(Length(C)!=1){
    int l = Length(C);

    for (int j = 0; j < l; j++)
    {

         C="";
        string exp1;
        string exp2;
        if (Shift <= 1)
        {
            if (Shift == 0 && !(C[j] == '+' || C[j] == '-' || C[j] == '*' || C[j] == '/'))
            {

                exp1 += C[j];
            }

            if (Shift = 0 && (C[j] == '+' || C[j] == '-' || C[j] == '*' || C[j] == '/'))
            {
                g = j;
            }

            if (Shift == 1 && !(C[j] == '+' || C[j] == '-' || C[j] == '*' || C[j] == '/'))

            {
                exp2 += C[j];
            }

            else
            {   double A;
                Shift++;

                if (C[g] == '/')

                {
                    A = stoll(exp1) / stoll(exp2);
                }
                if (C[g] == '+')

                {
                    A = stoll(exp1) + stoll(exp2);
                }
                if (C[g] == '-')

                {
                    A = stoll(exp1) - stoll(exp2);
                }
                if (C[g] == '*')
                {
                    A = stoll(exp1) * stoll(exp2);
                }
                string E = to_string(A);
                C= E + C[j];
            }
        }

        return 0;
    }
}
}*/


/*#include <iostream>
#include <string>
#include <array>
using namespace std;

int Length(string D)
{
    int B = D.length();
    int count = 0;

    for (int i = 0; i < B; i++) // fixed <= to <
    {
        if (D[i] == '+' || D[i] == '/' || D[i] == '*' || D[i] == '-')
        {
            count++;
        }
    }

    int b = 2 * count + 1;
    return b;
}

int main() 
{
    string Str;
    cout << "enter the expression" << endl;
    cin >> Str;

    string C = Str;
    int Shift = 0;
    int g;

    while (Length(C) != 1) 
    {
        int l = Length(C);

        for (int j = 0; j < l; j++)
        {
            C = ""; 
            string exp1;
            string exp2;

            if (Shift <= 1)
            {
                if (Shift == 0 && !(Str[j] == '+' || Str[j] == '-' || Str[j] == '*' || Str[j] == '/'))
                {
                    exp1 += Str[j];
                }

                if (Shift == 0 && (Str[j] == '+' || Str[j] == '-' || Str[j] == '*' || Str[j] == '/'))
                {
                    g = j;
                }

                if (Shift == 1 && !(Str[j] == '+' || Str[j] == '-' || Str[j] == '*' || Str[j] == '/'))
                {
                    exp2 += Str[j];
                }
                else
                {
                    double A;
                    Shift++;

                    if (Str[g] == '/')
                    {
                        A = stoll(exp1) / stoll(exp2);
                    }
                    if (Str[g] == '+')
                    {
                        A = stoll(exp1) + stoll(exp2);
                    }
                    if (Str[g] == '-')
                    {
                        A = stoll(exp1) - stoll(exp2);
                    }
                    if (Str[g] == '*')
                    {
                        A = stoll(exp1) * stoll(exp2);
                    }
                    string E = to_string(A);
                    C = E + Str[j];
                }
            }
        }
    }

    cout << C;
    return 0; 
}
*/


#include <iostream>
#include <string>
#include <array>
using namespace std;

int Length(string D)
{
    int B = D.length();
    int count = 0;

    for (int i = 0; i < B; i++)
    {
        if (D[i] == '+' || D[i] == '/' || D[i] == '*' || D[i] == '-')
        {
            count++;
        }
    }

    int b = 2 * count + 1;
    return b;
}

int main()
{
    string Str;
    cout << "enter the expression" << endl;
    cin >> Str;

    string C = Str;
    int g;

    while (Length(C) != 1)
    {
        int l = C.length(); 
        string exp1 = "";
        string exp2 = "";
        int Shift = 0;

        for (int j = 0; j < l; j++)
        {
            if (Shift == 0 && !(C[j] == '+' || C[j] == '-' || C[j] == '*' || C[j] == '/'))
            {
                exp1 += C[j];
            }
            else if (Shift == 0 && (C[j] == '+' || C[j] == '-' || C[j] == '*' || C[j] == '/'))
            {
                g = j;
                Shift = 1;
            }
            else if (Shift == 1 && !(C[j] == '+' || C[j] == '-' || C[j] == '*' || C[j] == '/'))
            {
                exp2 += C[j];
            }
            else if (Shift == 1 && (C[j] == '+' || C[j] == '-' || C[j] == '*' || C[j] == '/'))
            {
                
                double A;
                if (C[g] == '/')
                    A = stoll(exp1) / stoll(exp2);
                if (C[g] == '+')
                    A = stoll(exp1) + stoll(exp2);
                if (C[g] == '-')
                    A = stoll(exp1) - stoll(exp2);
                if (C[g] == '*')
                    A = stoll(exp1) * stoll(exp2);

                string E = to_string(A);
                
                C = E + C.substr(j);
                break;
            }

            
            if (j == l - 1 && Shift == 1)
            {
                double A;
                if (C[g] == '/')
                    A = stoll(exp1) / stoll(exp2);
                if (C[g] == '+')
                    A = stoll(exp1) + stoll(exp2);
                if (C[g] == '-')
                    A = stoll(exp1) - stoll(exp2);
                if (C[g] == '*')
                    A = stoll(exp1) * stoll(exp2);

                C = to_string(A);
            }
        }
    }

    cout << C << endl;
    return 0;
}
