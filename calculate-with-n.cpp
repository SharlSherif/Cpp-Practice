#include <iostream>
using namespace std;

int main()
{
    int sum=0, n;
    
    cout << "Enter the value of n"<<endl;
    cin >> n;
    for(int i=1;i<=n; i+=3){
      sum+=i;
    }

    cout << "Sum is " << sum;
    return 0;
}
