class MyHashMap {
public:
    MyHashMap() {
        static const int size=10007;
        vector<pair<int,int>> hashTable[size];
    }
    
    void put(int key, int value) {
        int idx=key % size;
        for(auto& it : hashTable[idx]){
        	if(it.first==key)
        	{
        		it.second=value;
        		return;
			}			
		}
		hashTable[idx].push_back({key,value});
    }
    
    
    int get(int key) {
    	int idx=key%size;
    	for(auto& it:hashTable[idx]){
    		if(it.first==key)
    		{
    			return it.second;
			}
		}
		return -1;
    }
    
    void remove(int key) {
    	int idx=key%size;
    	for(auto& it =hashTable[idx].begin;it!=hashTable[idx].end;it++){
    		hashTable[idx].erase(it);
    		return;
		}
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
