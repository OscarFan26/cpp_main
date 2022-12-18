/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
// #include <QUEUE.cpp>
using namespace std;

template <class T, int n>
class Queue
{
private:
    struct node
    {
        T data;
        node *next;
    };
    node *head = NULL;
    node *tail = NULL;

public:
    // constructor

    Queue()
    {
        head = NULL;
        tail = NULL;
    }

    // destructor

    ~Queue()
    {
        node *temp = head;
        while (temp != NULL)
        {
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
    void enqueue(T data)
    {   
        // what if the queue is full?
        if (isFull()) {
            raise(SIGINT);
            return;
        }
        node *temp = new node;
        temp->data = data;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = tail->next;
        }
    }

    /**
     * @brief    Removes the last element from the queue.
     * @return   The data of the removed element.
     */
    T dequeue()
    {
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
    bool isEmpty()
    {
        return head == NULL;
    }

    /**
     * @brief    Show the total number of the elements.
     * @return   The number of the elements.
     */
    int elementCount() {
        int count = 0;
        node *temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    /**
     * @brief   Checks if the queue is full.
     * @return   True if full, false otherwise.
     */
    bool isFull() {
        return elementCount() >= n;
    }
};

int main(){
    Queue<int, 5> q;
    for (int i = 0; i < 100; i++) {
        q.enqueue(i);
    }
    cout << q.isEmpty() << endl;
    for (int i = 0; i < 100; i++) {
        cout << q.dequeue() << endl;
    }
    cout << q.isEmpty() << " " << q.elementCount() << endl;
    return 0;
}
