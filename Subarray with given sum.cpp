vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int j=0;
        long long sum=0;
        if(s==sum) return {-1};
        for(int i=0;i<n;i++){
           sum+=arr[i];
           while(sum>s){
               sum-=arr[j];
               j++;
           }
           if(sum==s){
               return {j+1,i+1};
           }
        }
        return {-1};
    }