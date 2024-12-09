#include <iostream>
using namespace std;

//1
/*struct Node
{
    int data;       
    Node* next;    
    Node(int val) : data(val), next(nullptr) {}
};


class LinkedList 
{
private:
    Node* head;    

public:
   
    LinkedList() : head(nullptr) {}

    ~LinkedList() 
    {
        clear();
    }

    void append(int value) 
    {
        if (!head) 
        {
            head = new Node(value);
        }
        else 
        {
            Node* current = head;
            while (current->next) 
            {
                current = current->next;
            }
            current->next = new Node(value);
        }
    }

    LinkedList(const LinkedList& other) : head(nullptr) 
    {
        if (other.head) 
        {
            head = new Node(other.head->data);
            Node* current = head;
            Node* otherCurrent = other.head->next;

            while (otherCurrent) 
            {
                current->next = new Node(otherCurrent->data);
                current = current->next;
                otherCurrent = otherCurrent->next;
            }
        }
    }

    LinkedList& operator=(const LinkedList& other) 
    {
        if (this == &other) 
        {
            return *this;
        }

        clear();

        if (other.head)
        {
            head = new Node(other.head->data);
            Node* current = head;
            Node* otherCurrent = other.head->next;

            while (otherCurrent) 
            {
                current->next = new Node(otherCurrent->data);
                current = current->next;
                otherCurrent = otherCurrent->next;
            }
        }

        return *this;
    }

    void clear() 
    {
        while (head) 
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void print() const 
    {
        Node* current = head;
        while (current) 
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() 
{
    LinkedList list1;
    list1.append(1);
    list1.append(2);
    list1.append(3);

    cout << "Original list: " << endl;
    list1.print();

    LinkedList list2 = list1;

    cout << "Copied list: " << endl;
    list2.print();

    list1.append(4);

    cout << "After modifying the original list: " << endl;
    cout << "Original list: " << endl;
    list1.print();
    cout << "Copied list: " << endl;
    list2.print();
}*/

//2
/*struct Node
{
    int data;  
    Node* next; 

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList 
{
private:
    Node* head; 

public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() 
    {
        clear();
    }

    void append(int value) 
    {
        if (!head) 
        {
            head = new Node(value);
        }
        else {
            Node* current = head;
            while (current->next)
            {
                current = current->next;
            }
            current->next = new Node(value);
        }
    }

    LinkedList(const LinkedList& other) : head(nullptr) 
    {
        if (other.head) 
        {
            head = new Node(other.head->data);
            Node* current = head;
            Node* otherCurrent = other.head->next;

            while (otherCurrent) 
            {
                current->next = new Node(otherCurrent->data);
                current = current->next;
                otherCurrent = otherCurrent->next;
            }
        }
    }

    LinkedList& operator=(const LinkedList& other) 
    {
        if (this == &other) 
        {
            return *this;
        }

        clear(); 

        if (other.head) 
        {
            head = new Node(other.head->data);
            Node* current = head;
            Node* otherCurrent = other.head->next;

            while (otherCurrent) 
            {
                current->next = new Node(otherCurrent->data);
                current = current->next;
                otherCurrent = otherCurrent->next;
            }
        }

        return *this;
    }

    void clear() 
    {
        while (head) 
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void print() const 
    {
        Node* current = head;
        while (current) 
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() 
{
    LinkedList list1;
    list1.append(1);
    list1.append(2);
    list1.append(3);

    cout << "Original list: " << endl;
    list1.print();

    LinkedList list2;
    list2 = list1;

    cout << "Copied list using operator= : " << endl;
    list2.print();

    list1.append(4);

    cout << "After modifying the original list: " << endl;
    cout << "Original list: " << endl;
    list1.print();
    cout << "Copied list: " << endl;
    list2.print();
}*/