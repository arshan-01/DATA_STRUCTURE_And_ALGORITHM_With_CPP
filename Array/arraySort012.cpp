#include <iostream>
using namespace std;
int sort012(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <=high)  
    {
         if (arr[mid] == 0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if ( arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[high],arr[mid]);
           high--;
        }
        
        
       
    }
    cout << "sort order is : ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}
int main()
{
    int myArray[13] = {0, 2, 1, 2, 1,0, 2, 1, 0, 1, 2,1,0}; 
    sort012(myArray, 13);
    return 0;
}