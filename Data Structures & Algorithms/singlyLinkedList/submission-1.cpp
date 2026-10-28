class LinkedList {
   public:
    int value;
    LinkedList* next;
    LinkedList *head;
    LinkedList() { head = nullptr; next = nullptr; }

    int get(int index) {
        LinkedList* current = head;
        for (int i = 0; i < index; ++i) {
            if (current == nullptr) {
                return -1;
            }
            current = current->next;
        }
        if (current == nullptr) {
            return -1;
        }
        return current->value;
    }

    void insertHead(int val) {
        LinkedList* newNode = new LinkedList;
        newNode->value = val;
        newNode->next = head;
        head = newNode;
    }

    void insertTail(int val) {
        LinkedList* newNode = new LinkedList;
        newNode->value = val;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
        } else {
            LinkedList* tmp = head;
            while (tmp->next != nullptr) {
                tmp = tmp->next;
            }
            tmp->next = newNode;
        }
    }

    bool remove(int index) {
        if (head == nullptr) return false;
        if (index == 0) {
            LinkedList* toDelete = head;
            head = head->next;
            delete toDelete;
            return true;
        }
        LinkedList *current = head;
        for (int i = 0; i < index - 1; ++i) {
            if (current == nullptr || current->next == nullptr) return false;
            current = current->next;
        }
        if (current->next == nullptr) return false;
        LinkedList* toDelete = current->next;
        current->next = current->next->next;
        delete toDelete;
        return true;
    }

    vector<int> getValues() {
        LinkedList *current = head;
        vector<int>arr;
        while(current != nullptr)
        {
            arr.push_back(current->value);
            current = current->next;
        }
        return arr;
    }
};