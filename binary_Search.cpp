#include <bits/stdc++.h>

using namespace std;

int binarysearch(int arr[], int n, int k) {
    int low = 0, high = n-1;
    int mid;
    
    while(high - low > 1){
        mid = low + ((high - low) / 2);
        
        if(arr[mid] < k){
            low = mid+1;
        }
        
        else{
            high = mid;
        }
    }
    
    if(arr[low] == k){
        return low;
    }

    else if(arr[high] == k){
        return high;
    }

    else{
        return -1;    
    }    
}

int main(){
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int ans = binarysearch(a, n, 6);

    cout << ans << endl;

    return 0;
}

