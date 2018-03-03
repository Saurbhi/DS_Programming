#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<vector<int> > arr(6,vector<int>(6));
    int sum = 0,count = 0, maxsum=-INT_MAX, i=0;
 
    for(int arr_i = 0; arr_i < 6; arr_i++) {
       for(int arr_j = 0;arr_j < 6;arr_j++) {  
          cin >> arr[arr_i][arr_j];
       }
    }
 
    for(int arr_i = 0; arr_i < 4; arr_i++){
       for(int arr_j = 0; arr_j < 4; arr_j++){
          sum = 0;
          count = 0;
          for(i = arr_i; i < arr_i + 3; i++)
          {
          	if (count==1) {
          		sum += arr[i][arr_j+1];
				cout << sum << " ";	
			}
          	else {
			 	sum += arr[i][arr_j] + arr[i][arr_j+1] + arr[i][arr_j+2];
			 	cout << sum << " ";
			  }
          	count++;
		  }
		  cout << sum << endl;
		  if (maxsum < sum) {
		  	maxsum = sum;
		  }
       }
    }
    
    cout << maxsum;
    return 0;
}
