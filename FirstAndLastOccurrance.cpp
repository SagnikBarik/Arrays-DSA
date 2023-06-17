#include <bits/stdc++.h>

int FirstPosition(vector<int>& arr, int n, int k){
    int ans = -1;
    int start=0, end=n-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==k){
            ans = mid;
            end = mid - 1;
        } else if(arr[mid]<k){
            start = mid + 1;
        } else if(arr[mid]>k){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int LastPosition(vector<int>& arr, int n, int k){
    int ans = -1;
    int start=0, end=n-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==k){
            ans = mid;
            start = mid + 1;
        } else if(arr[mid]<k){
            start = mid + 1;
        } else if(arr[mid]>k){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = FirstPosition(arr,n,k);
    p.second = LastPosition(arr,n,k);
    return p;
}
