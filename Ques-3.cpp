// Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
// rectangle from (l1,r1) to (l2, r2).
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Number of Rows : ";
    cin>>m;
    int n;
    cout<<"Enter Number of Columns : ";
    cin>>n;
    int arr[m][n];
        // Taking Input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // Taking Dimnesions
    int x1,x2,y1,y2;
    cout<<"Enter 1st Dimension : ";
    cin>>x1>>y1;
    cout<<"Enter 2nd Dimension : ";
    cin>>x2>>y2;
    // Output
    int sum=0;
    for(int i=x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++){
            sum=sum+arr[i][j];
        }
    }cout<<sum;
}
