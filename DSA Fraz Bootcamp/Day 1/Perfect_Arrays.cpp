#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool IsPerfect(int a[],int n)
    {
        // Complete the function
        int i = 0;
        int j = n-1;
        
        while (i <= j) {
            if(a[i++] == a[j--]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};