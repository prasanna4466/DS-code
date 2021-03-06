#include <bits/stdc++.h>

using namespace std;
 
// function to find the sum of 
// minimum absolute difference

int sumOfMinAbsDifferences(int arr[], int n)
{

    // sort the given array

    sort(arr, arr+n);

     

    // initialize sum

    int sum = 0;

     

    // min absolute difference for

    // the 1st array element

    sum += abs(arr[0] - arr[1]);

     

    // min absolute difference for

    // the last array element

    sum += abs(arr[n-1] - arr[n-2]);

     

    // find min absolute difference for rest of the

    // array elements and add them to sum

    for (int i=1; i<n-1; i++)

        sum += min(abs(arr[i] - arr[i-1]), abs(arr[i] - arr[i+1]));

         

    // required sum    

    return sum;    
}
 
// Driver program to test above

int main()
{

    int arr[] = {5, 10, 1, 4, 8, 7};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum = "

         << sumOfMinAbsDifferences(arr, n);
}