class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        storage = vector<int>(1000001, -1);
    }
    
    void add(int key) {
        storage[key] = 1;
    }
    
    void remove(int key) {
        storage[key] = -1;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        if(storage[key] != -1)
            return true;
        return false;
    }
    private:
        vector<int> storage;

};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */