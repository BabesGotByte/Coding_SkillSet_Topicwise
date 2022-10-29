/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
#define ni NestedInteger
class NestedIterator {
public:
    vector<int> v;
    int i=0;
    void flatten(ni n){
        if(n.isInteger()){
            v.push_back(n.getInteger());
            return;
        }
        
        vector<ni> tmp=n.getList();
        for(int i=0;i<tmp.size();i++){
            flatten(tmp[i]);    
        }
    }
    NestedIterator(vector<NestedInteger> &nestedList) {
        v.clear();
        for(int i=0;i<nestedList.size();i++){
            flatten(nestedList[i]);
        }
    }
    
    int next() {
        int ans=v[i];
        i++;
        return ans;
    }
    
    bool hasNext() {
        return (i<v.size());
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
