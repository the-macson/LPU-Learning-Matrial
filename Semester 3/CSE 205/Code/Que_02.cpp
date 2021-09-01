#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0;
    cout << "Enter size of Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Array : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (arr[i] >= 10 && arr[i] <= 99){
           sum += arr[i]; 
        }
    }
    cout << "Sum of all two digits numbers is  " << sum;
}