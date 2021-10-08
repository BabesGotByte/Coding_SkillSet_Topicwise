ass Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
     #define ll long long

ll merge(ll arr[], ll lo, ll mi, ll hi){
    ll n1 = mi - lo + 1;
    ll n2 = hi - mi;
    
    ll a[n1], b[n2];
    
    for(ll i = 0; i < n1; i++)
        a[i] = arr[lo + i];

    for(ll i = 0; i < n2; i++)
        b[i] = arr[mi + 1 + i];

    
    ll i = 0, j = 0, k = lo;
    ll in = 0;
    
    while(i < n1 && j < n2){
        if(a[i] <= b[j])
            arr[k++] = a[i++];
        
        else{
            arr[k++] = b[j++];
            in += n1 - i;  /* inversion count */
        }
    }
    
    while(i < n1) 
        arr[k++] = a[i++];
    
    while(j < n2)
        arr[k++] = b[j++];
    
    
    return in;
}
ll mergeSort(ll arr[], ll lo, ll hi){
    ll in = 0;
    
    if(lo >= hi)
        return 0;
    
    ll mi = (lo + hi)/2;
    
    in += mergeSort(arr, lo, mi);
    in += mergeSort(arr, mi + 1, hi);
    in += merge(arr, lo, mi, hi);
    
    
    return in;
}

ll inversionCount(ll A[], ll n){
    
    return mergeSort(A, 0, n-1);
}

};
