#include <iostream>
using namespace std;

//election logic
int election(int cordinator){
    for(int i=cordinator;i<7;i++){
        if(f[i]==0){
            cordinator=i;
        }
    }
    return cordinator;
}

//logic for failure of a process with  random failure chances

int fail(int arr , start , end){

    

}

int main(){

    //init 

    int p[7] = {0,0,0,0,0,0,0}; 
    int c[7] = {0,0,0,0,0,0,1}; //coordinator array default coordinator highest 
    int f[7] = {0,0,0,0,0,0,0}; //failed process array


    

}