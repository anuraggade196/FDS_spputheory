#include<iostream>
using namespace std ;
int partition(int arr[],int s ,int e){
  // pahila ele ko pivot element select kr rahu h
    int pivot = arr[s] ;
    int cnt = 0 ;
  // finding less element than the pivot element
    for(int i = s+1 ; i< e ;i++){
        if(arr[i]<= pivot)
          cnt ++ ;
    } 
  // right position for pivot ele
    int pivotindex = s + cnt ;
    swap(arr[pivotindex] ,arr[s]) ;
   
    int i =s  , j =e ;
    while(i<pivotindex && j>pivotindex){
        while(arr[i] < pivot){
            i++ ;
        }
        while(arr[j] > pivot){
            j-- ;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++] ,arr[j--]) ;
        }
            


    }
    return pivotindex ;
}
void quicksort(int arr[] ,int s ,int e ){
    if(s>=e)
     return ;
    
    int p = partition(arr,s ,e) ;
    // for left part
    quicksort(arr ,s,p-1) ;

    // for right part 
    quicksort(arr ,p+1 ,e) ;

}
int main(){
    int arr[10] ={ 1,45,76,334,64,23,45,90,12,54} ;
    int n =  10 ;
    quicksort(arr ,0,n-1) ;

    for(int i = 0 ;i<n-1 ; i++){
        cout<<arr[i]<<" " ;
    }cout<<endl ;
    
    return 0;
}
