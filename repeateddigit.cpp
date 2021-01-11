#include <bits/stdc++.h> 
using namespace std; 
  
// Function that returns the count of 
// repeating digits of the given number 
int countRepeatingDigits(int N) 
{ 
    // Initialize a variable to store 
    // count of Repeating digits 
    int res = 0; 
  
    // Initialize cnt array to 
    // store digit count 
  
    int cnt[10] = { 0 }; 
  
    // Iterate through the digits of N 
    while (N > 0) { 
  
        // Retrieve the last digit of N 
        int rem = N % 10; 
  
        // Increase the count of digit 
        cnt[rem]++; 
  
        // Remove the last digit of N 
        N = N / 10; 
    } 
  
    // Iterate through the cnt array 
    for (int i = 0; i < 10; i++) { 
  
        // If frequency of digit 
        // is greater than 1 
        if (cnt[i] > 1) { 
  
            // Increment the count 
            // of Repeating digits 
            res++; 
        } 
    } 
  
    // Return count of repeating digit 
    return res; 
} 
  
// Driver Code 
int main() 
{ 
    // Given array arr[] 
    int N = 123355789; 
  
    // Function Call 
    cout << countRepeatingDigits(N); 
    return 0; 
}