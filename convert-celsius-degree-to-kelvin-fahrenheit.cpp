#include <iostream>
using namespace std;

int main()
{
    int c, k, f;
    cout << "Enter a celsius degree " << endl;
    cin >> c;
    k = c+273;
    f = c*5/9+32;
    
    cout << "Fahrenheit degree is " << f<<" deg"<<endl;
    cout << "Kelvin degree is " << k<< " deg"<<endl;
    return 0;
}

