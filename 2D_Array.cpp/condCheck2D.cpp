#include<iostream>
using namespace std;
int main()
{
    int arr[3][4];
    cout<<"Enter 12 numbers :";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    cout<<"The matrix is--"<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int max = arr[0][0];
    for(int j=0; j<4; j++){
        if(arr[0][j]>max){
            max= arr[0][j];
        }
    }
    cout<<"The largest number from 1st row is :"<<max<<endl;
    int min = arr[1][0];
    for(int j=1; j<4; j++){
        if(arr[1][j]<min){
            min= arr[1][j];
        }
    }
    cout<<"The smallest number from 2nd row is :"<<min<<endl;
    int neg = arr[2][0];
    for(int j=2; j<4; j++){
        if(arr[2][j]<0){
            neg= arr[2][j];
        }
    }
    cout<<"The negative number from 3rd row is :"<<neg<<endl;
    
    return 0;
}