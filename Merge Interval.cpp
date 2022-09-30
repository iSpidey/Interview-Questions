vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();++i){
            if(nums[i][0]==-1)
                continue;
            int temp=nums[i][1];
            for(int j=i+1;j<nums.size();++j){
                if(nums[j][0]==-1)
                    continue;
                if(temp>=nums[j][0]){
                     if(temp<nums[j][1])
                     temp=nums[j][1];
                     nums[j][0]=-1;
                } 
            }
            v.push_back({nums[i][0],temp});
        }
        return v;
    }
