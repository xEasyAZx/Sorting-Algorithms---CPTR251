#include <iostream>
#include <string>

using namespace std;


int main() {
    //Declare Variables
    int arr[5] = {30, 20, 10, 50, 30};
    int size = sizeof(arr)/sizeof(arr[0]); //Calculates the size of the array

    //Selection Sort - Ascending
    for (int i = 0; i < size -1; i++){
        int min = i;
        for (int j = i + 1; j < size; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        //Switch Elements In The Array
        if (min != i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }


    //Print Elements In The Array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
