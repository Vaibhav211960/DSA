#include<iostream>

using namespace std;

int main(){

    // initializing :

    int n = 5;
    int array[n] = {1,2,3,4,5};

    // traversing :

    for(int i=0 ; i!=n ; i++){
        cout<<array[i]<<" ";
    }

    // insert at end

   // array[n++] = 10;

     cout<<endl;
    // for(int i=0 ; i!=n ; i++){
       // cout<<array[i]<<" ";
    //}

    // insert at first index
    // for(int i = n ; i!=0 ; i--){
       // array[i] = array[i - 1];
        // cout<<array[i];
    //}

   // array[0] = 100;
     //cout<<endl;
 //    for(int i=0 ; i!=n+1 ; i++){
   //     cout<<array[i]<<" ";
    //}

    // insert anywhere

    int pos = 4;
    array[pos - 1] = 100;

    for(int i=0 ; i!=n ; i++){
       cout<<array[i]<<" ";
    }
    return 0;
}
