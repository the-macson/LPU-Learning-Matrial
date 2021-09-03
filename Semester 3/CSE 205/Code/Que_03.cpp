#include <bits/stdc++.h>
using namespace std;
void insertion(int arr[], int n){
    int insert, pos;
    cout << "Enter element for Insertion ";
    cin >> insert;
    cout << "Enter position for Insertion ";
    cin >> pos;
    if (n >= pos)
    {
        for (int i = n-1; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = insert;
        cout <<"Array after Performing opertion of Insertion : ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] <<" ";
        }
        cout <<endl;
    }
    else
    {
        cout << "Wrong position" << endl;
    }
}
void Deletion(int arr[],int n){
    int pos1;
    cout << "Enter position for Deletion : ";
    cin >> pos1;
    if (n +1 >= pos1)
    {
        for (int i = pos1 - 1; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
        cout << "Array after Performing opertion of Deletion : ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }else{
        cout << "Wrong position" << endl;
    }
   
}
int main()
{
    int n, sum = 0;
    char ask;
    cout << "Enter size of Array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (true)
    {
        cout << "if you want Insert element then press y otherwise n (y/n) :";
        cin >> ask;
        if (ask == 'y')
        {
            n++;
            insertion(arr, n);
        }else{
            break;
        }
    }
    while (true){
        cout << "if you want Delete element then press y otherwise n (y/n) :";
        cin >> ask;
        if (ask == 'y')
        {
            n--;
            Deletion(arr, n);
        }
        else
        {
            break;
        }
    }
    cout << "Final Result Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    
}