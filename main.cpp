#include <bits/stdc++.h>
using namespace std;

//election logic
int election(int cordinator ,int* f){
    
    int cr = cordinator;
    cout<<"Election Started by"<<cr<<endl;

    for(int i=cr+1;i<7;i++){
        if(f[i]==0){
            cr=i;
        }
    }
    cout<<cr<<" won the election\n";
    return cr;
}

//logic for failure of a process with  random failure chances

void fail(int* arr ,int start ,int end){

    int temp = rand() % end + start;
    if(arr[temp]==0){
        arr[temp] = 1;
        cout<<"process "<<temp<<" failed\n";
        }
}

int main(){

    //init 
 
    int c = 6; //coordinator -- default coordinator highest 
    int p[7] = {0,0,0,0,0,0,0}; //fProcess and their failure status denoted by 1
    int elem[7] = {0,0,0,0,0,0,0};

    cout<<"Election algorithm";
    cout<<count(p,p+7,0)<<" process alive\n";
    while(count(p,p+7,0)!=1){
        //failing a process
        fail(p,0,7);
        for(int j = 0 ;j<7;j++){
            if(elem[j]!=1)
            {
            for(int k = j+1 ;k<7;k++){
                if(elem[k]==0){
                    cout<<j<<" sending message to "<<k<<" coordinator "<<c<<endl;
                    if( p[k] == 1 ){
                        cout<<k<<" failure detected\n";
                        elem[k] = 1;
                        c = election(j ,p);

                }
                }
            }
            }
        }
    }
    

}