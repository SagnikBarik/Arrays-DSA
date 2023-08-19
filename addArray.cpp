#include <bits/stdc++.h>

void reverseVector(vector<int>&arr){
	int n=arr.size();
	int start=0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i = n-1;
	int j = m-1;
	vector<int> ans;
	int carry = 0;

	while(i>=0 && j>=0){
		int sum = a[i] + b[j] + carry;
		carry = sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
		j--;
	}

	while(i>=0){
		int sum = a[i] + carry;
		carry = sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
	}

	while(j>=0){
		int sum = b[j] + carry;
		carry = sum/10;
		sum=sum%10;
		ans.push_back(sum);
		j--;
	}

	while(carry != 0) {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }

	reverseVector(ans);

	return ans;
}
