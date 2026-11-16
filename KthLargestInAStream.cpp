class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> another;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(auto i:nums){
            another.push(i);
        }
        while(another.size()>k){
            another.pop();
        }
    
    }
    
    int add(int val) {
        another.push(val);
        if(another.size()>k){
        another.pop();}
        return another.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
