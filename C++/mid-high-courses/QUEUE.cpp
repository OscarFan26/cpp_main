#include <iostream>

template <class T>
class Queue {
    private: 
        struct node {
            T data;
            node *next;
        };
        node *head = NULL;
        node *tail = NULL;
    
    public:
        Queue();
        ~Queue();
        void enqueue(T);
        T dequeue();
        bool isEmpty();


        // constructor

        Queue() {
            head = NULL;
            tail = NULL;
        }

        // destructor

        ~Queue() {
            node *temp = head;
            while (temp != NULL) {
                node *next = temp->next;
                delete temp;
                temp = next;
            }
        }

        /**
         * @brief     Adds an element to the queue.
         * @param     data:  The data to be added.
         * 
         */
        void enqueue(T data) {
            node *temp = new node;
            temp->data = data;
            temp->next = NULL;
            if (head == NULL) {
                head = temp;
                tail = temp;
            } else {
                tail->next = temp;
                tail = tail->next;
            }
        }
        /**
         * @brief    Removes the last element from the queue.
         * @return   The data of the removed element.
         */
        T dequeue() {
            node *temp = head;
            T data = temp->data;
            head = head->next;
            delete temp;
            return data;
        }

        /**
         * @brief    Checks if the queue is empty.
         * @return   True if empty, false otherwise.
         */
        bool isEmpty() {
            return head == NULL;
        }
};

