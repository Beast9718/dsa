class Solution {
public:
    bool hasAlternatingBits(int n) {
        int temp=n%2;
        n/=2;
        int current=0;
        while(n>0){
            current=n%2;
            if(temp==current)return false;
            n/=2;
            temp=current;
        }
        return true;
    }
};