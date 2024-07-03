class LRUCache 
{
public:

    int capacity;
    vector<int> keys;           
    unordered_map<int, int> cache;     


    LRUCache(int capacity) 
    {
        this->capacity = capacity;
    }
    
    int get(int key)
    {
        if (cache.find(key) == cache.end()) 
        {
            return -1; 
        } 
        else 
        {
            keys.erase(remove(keys.begin(), keys.end(), key), keys.end());
            keys.push_back(key);
            return cache[key];
        }
    }
    
    void put(int key, int value)
  {
        if (cache.find(key) != cache.end()) 
        {
            // Key already exists, update the value and move to the front
            cache[key] = value;
            keys.erase(remove(keys.begin(), keys.end(), key), keys.end()); // Remove the key from its current position
            keys.push_back(key);
        } 

        else
        {

            if (keys.size() == capacity) 
            {
                // Cache is full, remove the least recently used item (first item in keys)
                int lruKey = keys.front();
                keys.erase(keys.begin());
                cache.erase(lruKey);
            }
            // Insert new key-value pair
            keys.push_back(key);
            cache[key] = value;
        }
    }
};
