class FirstUnique {
    vector<int> queue;
    unordered_map<int,int> mp;
public:
    FirstUnique(vector<int>& nums) {
        for(int i = 0; i< nums.size();i++){
            queue.push_back(nums[i]);
            mp[nums[i]]++;
        }
    }
    
    int showFirstUnique() {
        for(int i = 0; i<queue.size();i++){
            if(mp[queue[i]] == 1) return queue[i];
        }
        return -1;
    }
    
    void add(int value) {
        queue.push_back(value);
        mp[value]++;
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */
