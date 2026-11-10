class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int lo=0;
        int ans=INT_MIN;
        unordered_map<int,int>mp;
        for(int hi=0;hi<fruits.size();hi++){
            mp[fruits[hi]]++;
            while(mp.size()>2){
                mp[fruits[lo]]--;
                if(mp[fruits[lo]]==0)mp.erase(fruits[lo]);
                lo++;
            }
            if(mp.size()<=2){
                int len=hi-lo+1;
                ans=max(ans,len);
                
            }
            
        }
        return ans==INT_MIN?-1:ans;
    }
};