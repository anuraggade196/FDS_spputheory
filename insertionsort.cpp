#include <iostream>
using namespace std;
/*void inserationsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        // for(; j>=0 ;j--){

        //     if(arr[j] > temp){
        //         arr[j+1] = arr[j] ;
        //     }
        //     else{
        //         break ;
        //     }
        // }
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}
*/
void insertionsort(int *arr ,int n){
    for(int i =1 ; i<n ;i++){
        int j = i - 1 ;
        int temp = arr[i] ;
        while( j>= 0 && arr[j] > temp){
            arr[j+1] = arr[j] ;
            j = j -1 ;
        }
        arr[j + 1] = temp ;
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()

{
    int arr1[5] = {34, 67, 56, 45, 9};
    insertionsort(arr1, 5);
    cout << "printed array is" << endl;
    printarray(arr1, 5);

    return 0;
}

