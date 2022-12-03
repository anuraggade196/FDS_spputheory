#include<iostream>
using namespace std ;
 bool linearserach(int * arr ,int n ,int key){
    for(int i =0 ; i<n ; i++){
        if(arr[i]==key) 
         return 1 ;
        else 
         return 0 ;
    }
 }
int main(){
    int arr[6]={ 2,4,2,3,2,4} ;
    if(linearserach(arr,6,2)) 
     cout<<"element is present"<<endl ;
    else 
     cout<<"elemenet is not present"<<endl ;

    return 0;
}
