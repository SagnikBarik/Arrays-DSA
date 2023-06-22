int GetPivot(vector<int>& arr, int n){
    int start = 0, end = n-1, mid;
    while (start<end){
        mid = start + (end-start)/2;
        if(arr[mid]>=arr[0]){
            start = mid+1;
        } else {
            end = mid;
        }
    }
    return start;
}

int BianarySearch(vector<int>& arr, int s, int e, int k){
    int start = s, end = e, mid;
    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid]==k){
            return mid;
        }else if(arr[mid]<k){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int pivot = GetPivot(arr, n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return BianarySearch(arr, pivot, n-1, k);
    }else{
        return BianarySearch(arr, 0, pivot-1, k);
    }
}
