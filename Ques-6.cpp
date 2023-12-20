// Q6: Write a function which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column.
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the Value of Rows : ";
    cin>>m;
    int arr[m][m];
    // Input
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter Elements : ";
           cin>>arr[i][j]; 
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==m/2 || j==m/2){
                cout<<arr[i][j]<<" ";
            }
            else
            cout<<" "<<" ";
        }cout<<endl;
    }
}