class LRUCache {
public:
    class Node{
        public:
            int key;
            int val;
            Node* next;
            Node* prev;
            Node(int key,int val){
                this->key=key;
                this->val=val;
                next=NULL;
                prev=NULL;
            }
        
    };
    unordered_map<int,Node*>mp;
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);
    
    int cap;
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    void deleteNode(Node* node){
        Node* prev=node->prev;
        Node* next= node->next;
        prev->next=next;
        next->prev=prev;
    }
    void addNode(Node* node){
        node->next=head->next;
        head->next=node;
        node->prev=head;
        node->next->prev=node;
    }
    int get(int key) {
        if(mp.find(key)==mp.end())return -1;
        Node* node=mp[key];
        deleteNode(node);
        addNode(node);
        mp[key]=node;
        return node->val;
        

    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            Node*curr=mp[key];
            mp.erase(key);
            deleteNode(curr);
        }
        if(mp.size()==cap){
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        Node* newNode=new Node(key,value);
        addNode(newNode);
        mp[key]=newNode;

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
