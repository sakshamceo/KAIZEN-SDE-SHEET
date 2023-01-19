
https://practice.geeksforgeeks.org/problems/index-of-an-extra-element/1#

class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
       int res;
       for(int i=0;i<n;i++)
       {
           if(a[i]!=b[i])
           {
               res=i;
               break;
           }
       }
       return res;
    }
};


complexity - O(n)
