bool isPossible(vector<int> &stalls, int k, int distance){
    int n=stalls.size();
    int cowCount=1, lastCow=stalls[0];
    for(int i=1; i<n; i++){
        if(stalls[i]-lastCow>=distance){
            cowCount++;
            lastCow=stalls[i];
        }
        if(cowCount>=k) return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k){
    int ans=-1;
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int low=1, high=stalls[n-1]-stalls[0];
    while(low<=high){
        int mid=low+(high-low)/2;
        if(isPossible(stalls,k,mid)){
            low=mid+1;
            ans=mid;
        } else{
            high=mid-1;
        }
    }
    return ans;
}
