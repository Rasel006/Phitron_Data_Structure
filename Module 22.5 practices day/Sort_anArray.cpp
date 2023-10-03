class Solution {
public:
    void insert(vector<int>& v, int x){
        v.push_back(x);
        int cur_idx = v.size() - 1;
        while(cur_idx != 0){
            int parent = (cur_idx - 1) / 2;
            if(v[parent] > v[cur_idx])
                swap(v[parent] , v[cur_idx]);
            else 
                break;
            cur_idx = parent;
        }
    }
    void deleteHeap(vector<int>& v, vector<int>& r){
        r.push_back(v[0]);
        v[0] = v[v.size() -1];
        v.pop_back();
        int cur = 0;
        while(true){
            int left_idx = cur * 2 + 1;
            int right_idx = cur * 2 + 2;
            int last_idx = v.size() -1 ;
            if(left_idx <= last_idx && right_idx <= last_idx){
                if(v[left_idx] <= v[right_idx] && v[left_idx] < v[cur])
                {
                    swap(v[left_idx], v[cur]);
                    cur = left_idx;
                }
                else if(v[right_idx] <= v[left_idx] && v[right_idx] < v[cur]){
                    swap(v[right_idx], v[cur]);
                    cur = right_idx;
                }
                else
                    break;
            }
            else if(left_idx <= last_idx){
                if(v[left_idx] < v[cur]){
                    swap(v[left_idx] , v[cur]);
                    cur = left_idx;
                }
                else{
                    break;
                }
            }
            else if(right_idx <= last_idx){
                if(v[right_idx] < v[cur]){
                    swap(v[right_idx] , v[cur]);
                    cur = right_idx;
                }
                else{
                    break;
                }
            }
            else{
                break;
            }
        }
    }   
    vector<int> sortArray(vector<int>& nums) {
        int x = nums.size();
        vector<int> heap;
        vector<int> result;
        while(!nums.empty()){
            insert(heap, nums[nums.size() - 1]);
            nums.pop_back();
        }
        for(int i = 0; i < x; i++){
            deleteHeap(heap, result);
        }
        return result;
    }
};