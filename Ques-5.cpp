// Q5: Write a program to print the row number having the maximum sum in a given matrix.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter the Value of Rows : ";
    cin>>m;
    int n;
    cout<<"Enter the Value of Columns : ";
    cin>>n;
    int arr[m][n];
    // Input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter Elements : ";
           cin>>arr[i][j]; 
        }
    }
    // Sum of Rows
    int MaxSum=INT_MIN;
    int MaxRow=-1;
    int sum=0;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum=sum+arr[i][j];           
            if(sum>MaxSum){
                MaxSum = sum;
                MaxRow = i;
            }
        }
    }cout<<"Maximum Sum is "<<MaxSum<<endl;
    cout<<"Row Number : "<<MaxRow;
}