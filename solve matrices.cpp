#include <iostream>
#include <vector> 

using namespace std;

int TwoByTwoMatrixDet (vector<vector<int>> matrix) {
   int det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
   return det;
}

int ThreeByThreeMatrixDet (vector<vector<int>> matrix) {
  vector<int> first_row = matrix[0];
  vector<int> second_row = matrix[1];
  vector<int> third_row = matrix[2];
  
  int determinantResult = 0;
  
for(int i=0; i<first_row.size(); i++) {
      vector<vector<int>> matrix_2x2 {};
      vector<int> second_row_integers;
      vector<int> third_row_integers;
      
    if(i == 0) {
      for(int k=1; k<second_row.size(); k++){
        second_row_integers.push_back(second_row[k]);
        third_row_integers.push_back(third_row[k]);
      }

    } else if(i == 1){
        for(int k=0; k<second_row.size(); k++){
            // skip the middle integer in the row because we're focused on the two corners
         if(k == 1) continue;
         second_row_integers.push_back(second_row[k]);
         third_row_integers.push_back(third_row[k]);
      }
    }else if(i == 2) {
        for(int k=0; k<second_row.size(); k++){
            // skip the last integer in the row because we're focused on the left corner
         if(k == 2) continue;
         second_row_integers.push_back(second_row[k]);
         third_row_integers.push_back(third_row[k]);
      }
    }
          
  matrix_2x2.push_back(second_row_integers);
  matrix_2x2.push_back(third_row_integers);
  int det = first_row[i] * TwoByTwoMatrixDet(matrix_2x2);
  cout << "Determinant :" <<det <<endl;
  
  // |A| = a(ei − fh) − b(di − fg) + c(dh − eg)
  // we need to substract the second determinant of the first and then add to the third
  // for the second det, substract
  if(i == 1){
    determinantResult -= det;
  }else {
  // everything else, add
    determinantResult += det;
  }
}

return determinantResult;
}

int main()
{
    // vector<vector<int>> matrix_2x2 { {1,2}, {5,6} };
    vector<vector<int>> matrix_3x3 { {2,-3,1}, {2,0,-1}, {1,4,5} };

    // TwoByTwoMatrixDet(matrix_2x2);
    int det_3x3 = ThreeByThreeMatrixDet(matrix_3x3);
    cout << det_3x3 <<endl;
    
    
    return 0;
}

