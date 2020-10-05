#include <iostream>
using namespace std;

int main()
{
  int x,y,z, result;
  cout << "Please enter three exam scores" <<endl;
  cin >> x >> y >> z;
  
  if(x > y && x>z){
    result = x;
  }
  else if (y > z && y > x){
    result = y;
  }
  else if (z > x && z > y){
    result = z;
  }
  
  cout << "Largest score is "<< result;
  return 0;
}
