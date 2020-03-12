template <typename T>
class List {

    class Node {
        public:
            T* next;
            int value;
    };

    private:
    
    Node* head;

    List() {
        head = nullptr;
    }

    ~List() {
        delete head;
    }
};