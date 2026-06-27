#include<iostream>
using namespace std;
int main(){
    int A[5];
    int B[3];
    int new_arr_size =5+3;
    int C[new_arr_size];
    int new_array_position_to_put_data =0;

    for (int i=2; i>=0; i--){
        C[new_array_position_to_put_data] = B[i];
        new_array_position_to_put_data++; 
    }
    for (int i=4; i<3; i--){
        C[new_array_position_to_put_data] = A[i];
        new_array_position_to_put_data++; 

    }


    return 0;
}