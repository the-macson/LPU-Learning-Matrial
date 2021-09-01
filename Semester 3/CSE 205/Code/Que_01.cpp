#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, cont = 0;
    cout << "Enter size of Array : ";
    cin >> n;
    int arr[n];
    cout <<"Enter the Array : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i] ;
    }
    for (int i = 0; i < n; i++){
        if(arr[i] > 25){
            cont++;
        }
    }
    cout <<"Number of elements are greater than 25 is " << cont;    
}