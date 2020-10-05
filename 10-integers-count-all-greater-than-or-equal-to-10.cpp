#include <iostream>
using namespace std;

int main()
{
    int arr[10], sum, avg, c, size=10;
    cout << "Enter 10 integers "<<endl;
    
    for (int k=0; k<size; k++){
        cout << "Index : "<<k<<endl;
        cin >> arr[k];
    }
    
    
    for (int x=0; x< size; x++){
        if(arr[x] >=10) {
            sum+=arr[x];
            c+=1;
        }
    }
    avg = sum/c;
    cout << "the sum is : "<<sum<<endl;
    cout << "the avg is : "<<avg<<endl;

    return 0;
}



