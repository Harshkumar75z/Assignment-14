// Q2: Write a program to add two matrices and save the result in one of the given matrices.
#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int brr[3][3]={4,5,8,0,0,8,1,2,0};  
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            brr[i][j] += arr[i][j];
            cout<<brr[i][j]<<" ";
        }cout<<endl;
    }
    
}
