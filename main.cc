#include <iostream>

using namespace std;

// zadanie 1.34 - b
long int b_34(int n)
{
    if (n == 1) return 2;
    return 2*b_34(n-1);
}

// zadanie 1.34 - c
float c_34(int n)
{
    if (n == 1) return 0.2;
    return -3*c_34(n-1);
}

// zadanie 1.35 - a
int a_35(int n) {
    if (n == 1) return 2;
    return 3*a_35(n-1)+0.5;
}

// zadanie 1.35 - b
float b_35(int n)
{
    if (n == 1) return 0.5;
    else if (n == 2) return 1;
    return 3*a_35(n-2)+a_35(n-1);
}

int main()
{

    // Zadanie 1.34 - b
    cout << "Zadanie 1.34 - b  \n";
    for (int i = 1; i <= 7; i++)
        cout << b_34(i) << endl;
    cout << "=====================  \n";

     // Zadanie 1.34 - c
    cout << "Zadanie 1.34 - c  \n";
    for (int i = 1; i <= 7; i++)
        cout << c_34(i) << endl;
    cout << "=====================  \n";

    // Zadanie 1.35 - a
    cout << "Zadanie 1.35 - a  \n";
    for (int i = 1; i <= 7; i++)
        cout << a_35(i) << endl;
    cout << "=====================  \n";

    // Zadanie 1.35 - b
    cout << "Zadanie 1.35 - b \n";
    for (int i = 1; i <= 7; i++)
        cout << b_35(i) << endl;
    cout << "=====================  \n";
    return 0;
}
