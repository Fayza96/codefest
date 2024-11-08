  void deleteFromBeginning() {
        if (!head) return;
        Node* temp = head;
        if (head == tail) {
            head = tail = nullptr;
        } else {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
    }

 void deleteFromEnd() {
        if (!tail) return;
        Node* temp = tail;
        if (head == tail) {
            head = tail = nullptr;
        } else {
            tail = tail->prev;
            tail->next = nullptr;
        }
        delete temp;
    }

    void deleteFromPosition(int pos) {
        if (pos <= 1) {
            deleteFromBeginning();
            return;
        }
        Node* temp = head;
        int count = 1;
        while (temp && count < pos) {
            temp = temp->next;
            count++;
        }
        if (!temp) return;  // Position out of bounds
        if (temp->next) temp->next->prev = temp->prev;
        if (temp->prev) temp->prev->next = temp->next;
        if (temp == head) head = temp->next;
        if (temp == tail) tail = temp->prev;
        delete temp;
    }