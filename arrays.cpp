#include <iostream>
using namespace std;

int main()
{
    int ages[4];
    cout << "Please enter 4 ages"<<endl;
    for (int i=0; i<4; i++)
        cin >> ages[i];
    cout << "You entered: "<<endl;
    for (int i=0; i<4; i++)
        cout << ages[i]<<endl;
    return 0;
}

