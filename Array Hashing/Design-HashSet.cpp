class MyHashSet {
public:
    MyHashSet() {
        
    }
    vector<int> result;
    void add(int key) {
     if(!contains(key)){
        result.push_back(key);
     }
    }
    
    void remove(int key) {
      if(contains(key)){
        int pos;
       for(int i= 0;i<result.size();i++){
        if(result[i]==key){
            result.erase(result.begin()+i);
            break;
        }
       }
      }
    }
    
    bool contains(int key) {
        bool found = false;
        for(auto k :result){
            if(k  == key){
                found = true;
                break;
            }
        }
        return found;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */