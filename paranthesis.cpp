#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

int printparenthesis(int i){
    if (i == 1){
        cout << "(";
    }
    else{
        cout << ")";
    }
    return 1;
}
int printnumber(int i){
    if (i == 1){
        cout << 1;
    }
    else{
        cout << -1;
    }
    return 1;
}


int f_y_a(int n) {
  int arr[ (2*n) + 1], arr1[(n*2) + 1], index_arr[(n*2) + 1], my_arr[(2*n)+1], been_changed[(2*n)+1];
  int index;
  for (int i = 0; i < n; i++)
  arr[i] = 1;
  for (int i = n; i < ((2*n) +1); i++)
  arr[i] = -1;
   
  for (int i = 0; i < ((2*n)+1); i++)
  index_arr[i] = 0;
  
  for (int i = 0; i < ((2*n)+1); i++)
  been_changed[i] = 0;


  for (int i = 0; i < ((2*n)+1); i++) {
      do {
         index = rand() % ((2*n)+1);
      }
      while (index_arr[index] != 0);
      index_arr[index] = 1;
      arr1[i] = arr[index];
      my_arr[i] = arr[index];
  }
  
  
  int prev_index = 0, lowest_sum = 0, sum = 0;
  for (int i = 0; i < ((2 * n) + 1); i++){
      sum += arr1[i];
      if (sum < lowest_sum) {
          lowest_sum = sum;
          prev_index = i;
      }
  }
  int left = prev_index;
  for (int i = 0; i < prev_index + 1; i++){
      my_arr[(2*n)-left] = arr1[i];
      left = left - 1;
  }
  int start_at_zero = 0;
  for (int i = prev_index+1; i < (2*n) + 1; i++){
      my_arr[start_at_zero] = arr1[i];
      start_at_zero++;
  }
  for (int i = 0; i < (2*n); i++){
          printparenthesis(my_arr[i]);
        //   cout << arr1[i] << " ";
      }
        cout << endl;
        //   cout << endl;
        //     cout << endl;
  
  return 1;
  
}
int main(){
    int n;
    cout << "Enter the array size: "<<endl;
    cin >> n;
    int hmt;
    cout << "Enter the amount of lines you want: "<<endl;
    cin >> hmt;
    int finished =0;
    while (finished < hmt){
        int f = f_y_a(n);
        if (f == 1){
            finished = finished + 1;
        }
    }
    return 1;
     
    
}

