double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> med;
        double res;
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
        while(i<n && j<m)
        {
            if(nums1[i]>=nums2[j])
            {
                med.push_back(nums2[j]);
                j++;
            }
            else
            {
                med.push_back(nums1[i]);
                i++;
            }
        }
        while(i<n)
        {
            med.push_back(nums1[i]);
            i++;
        }
        while(j<m)
        {
            med.push_back(nums2[j]);
            j++;
        }
        int p=med.size();
        
        if(p%2!=0)
        {
            res=med[p/2];
        }
        else if(p%2==0)
        {   p--;
          
            double x=med[p/2];
         
            int z=(p/2)+1;
            double y=med[z];
           
            
             res=(x+y)/2;
                        
       }
        
        return res;
        
    }
