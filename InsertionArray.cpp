#include<iostream>
using namespace std ;

int main(){
    int array[100] ,n ,position ,value ;
    cin>>n ;
    for(int i =0 ; i< n ; i++){
        cin>>array[i] ;
    }
    cout<<"Enter position and value "<<endl ;
    cin>>position ;
    cin>>value ;
    for(int i = n-1 ; i>=position -1 ; i--){
        array[i+1] = array[i] ;
        array[position -1] = value ;
    }
    cout<<"Printing new array"<<endl ;
    for (int i = 0; i <= n; i++){
       cout<< array[i]<<" ";
    }

    return 0;
}
