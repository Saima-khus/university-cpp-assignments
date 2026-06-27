#include<iostream>
using namespace std;
int main()
{
    int A[2][3], B[2][3], C[2][3];
    cout<<"Enter 6 numbers for Matrix A :";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    cout<<endl;
    cout<<"Enter 6 numbers for Matrix B :";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }
    cout<<"Matrix A-"<<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout<< A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Matrix B-"<<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout<< B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Matrix (A+b)-"<<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j]= A[i][j] + B[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}