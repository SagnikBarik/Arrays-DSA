int findUnique(int *arr, int size)
{
    int ans = 0;
    for (int i=0; i<size; i++){
        //XOR all elements in the array to cancel duplicates
        ans = ans^arr[i];
    }
    return ans;
}
