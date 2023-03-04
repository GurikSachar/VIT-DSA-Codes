#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;  // value stored in node
    int key;    // key value to identify the node
    Node *next; // pointer to next node in the linked list
    Node()
    {
        value = 0;
        key = 0;
        next = NULL;
    }
    Node(int val, int k)
    {
        key = k;
        value = val;
    }
};

class SinglyLinkedList
{
public:
    Node *head; // pointer to head of the linked list
    SinglyLinkedList()
    {
        head = NULL;
    }
    SinglyLinkedList(Node *n)
    {
        head = n;
    }
    Node *checkIfNodeExists(int k) // function to check if a node exists in the linked list
    {
        Node *temp = NULL; // temporary pointer
        Node *ptr = head;
        while (ptr != NULL) // traversing linked list
        {
            if (ptr->key == k)
            {
                temp = ptr;
                return temp;
            }
            ptr = ptr->next;
        }
        return temp;
    }
    // 1. Prepending node in linked list
    void prependNode(Node *n)
    {
        if (head == NULL) // If linked list is empty, node is added as head
        {
            head = n;
            cout << "Linked list was empty, head has been added" << endl;
        }
        else
        {
            if (checkIfNodeExists(n->key) != NULL)
                cout << "Node with same key already exists in linked list, prepend a node with different key" << endl;
            else
            {
                n->next = head;
                head = n;
                cout << "Node has been prepended" << endl;
            }
        }
    }
    // 2. Insert node in the middle of linked list
    void insertInMiddle(Node *n, int k)
    {
        Node *ptr = checkIfNodeExists(k);
        if (ptr == NULL)
            cout << "Node with this key value does not exist in the linked list" << endl;
        else
        {
            if (checkIfNodeExists(n->key) != NULL)
                cout << "Node with same key already exists in linked list, insert a node with different key" << endl;
            else
            {
                n->next = ptr->next;
                ptr->next = n;
                cout << "Node has been inserted" << endl;
            }
        }
    }
    // 3. Append node
    void appendNode(Node *n)
    {
        if (checkIfNodeExists(n->key) != NULL)
            cout << "Node with same key already exists in linked list, append a node with different key" << endl;
        else
        {
            if (head == NULL) // If linked list is empty, node is added as head
            {
                head = n;
                cout << "Linked list was empty, head has been added\n";
            }
            else // travrsing to the end of the list
            {
                Node *ptr = head;
                while (ptr->next != NULL)
                    ptr = ptr->next;
                ptr->next = n;
                cout << "Node has been appended" << endl;
            }
        }
    }
    // 4. Deleting a node
    void deleteNode(int k)
    {
        if (head == NULL) // checking if linked list is empty
        {
            cout << "Linked list is empty, cannot delete any nodes" << endl;
        }
        else
        {
            if (checkIfNodeExists(k) == NULL) // checking if the node to delte exists
            {
                cout << "Node does not exist, cannot be deleted" << endl;
            }
            else
            {
                if (head->key == k) // deleting head
                {
                    head = head->next;
                    cout << "Node has been deleted" << endl;
                }
                else
                {
                    Node *prevptr = head;          // pointer to the previous node
                    Node *currentptr = head->next; // pointer to the next node
                    while (currentptr != NULL)
                    {
                        if (currentptr->key == k)
                        {
                            prevptr->next = currentptr->next;
                            currentptr = NULL;
                            cout << "Node has been deleted" << endl;
                        }
                        else
                        {
                            prevptr = prevptr->next;
                            currentptr = currentptr->next;
                        }
                    }
                }
            }
        }
    }
    // 5. Displaying elements of the linked list
    void printList()
    {
        if (head == NULL)
        {
            cout << "No nodes in Singly Linked List" << endl;
        }
        else
        {
            cout << endl
                 << "Singly Linked List values: " << endl;
            Node *ptr = head;
            while (ptr != NULL)
            {
                cout << "(" << ptr->key << "," << ptr->value << ") --> ";
                ptr = ptr->next;
            }
        }
    }
};

int main()
{
    SinglyLinkedList s;
    int option;
    int key1, k1, data1;
    do
    {
        cout << "\nWhat operation do you want to perform? Select option number. Enter 0 to exit. " << endl;
        cout << "0. To exit the program" << endl;
        cout << "1. Prepend a node" << endl;
        cout << "2. Insert a node in the middle" << endl;
        cout << "3. Append a node" << endl;
        cout << "4. Delete a node" << endl;
        cout << "5. Display the elements of linked list" << endl;
        cout << "6. Clear Screen" << endl;

        cin >> option;
        Node *n1 = new Node(); //creating a node object and storing it in the heap memory
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Prepend node operation \nEnter key and data of the node to be appended: " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->value = data1;
            s.prependNode(n1);
            break;
        case 2:
            cout << "Insert a node in the middle operation \nEnter key and data of the node to be prepended: " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->value = data1;
            s.insertInMiddle(n1,k1);
            break;
        case 3:
            cout << "Append node operation \nEnter key of existing node after which you want to insert this new node : " << endl;
            cin >> k1;
            cout << "Enter key and data of the new node: " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->value = data1;
            s.appendNode(n1);
            break;
        case 4:
            cout << "Delete Node operation \nEnter key of the node to be deleted: " << endl;
            cin >> k1;
            s.deleteNode(k1);
            break;
        case 5:
            cout << "Display elements of the linked list operation" << endl;
            s.printList();
            break;
        case 6:
            s.printList();
            break;
        default:
            cout << "Enter proper option number " << endl;
            break;
        }
    } while (option != 0);
    return 0;
}