class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int even=0;
        int odd=0;
        for(auto i:position){
            if(i%2==0)even+=1;
            if(i%2!=0)odd+=1;

        }

        return min(even,odd);
    }
};