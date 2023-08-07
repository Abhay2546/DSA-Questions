 vector<int> removeDuplicate(int A[], int N) {
         unordered_map<int,int>s;
         vector<int>ans;
       for(int i=0; i<N; i++)
       {
           s[A[i]]++;
           if(s[A[i]]>1){
               continue;
           }
           else ans.push_back(A[i]);
        }
       return ans;
    }

