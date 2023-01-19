#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
public:
    int count = 0;
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    void AddItem(int val)
    {
        Node *new_node = new Node;
        new_node->data = val;
        new_node->next = NULL;
        if (head == NULL)
        {
            head = new_node;
        }
        // else, make the new_node the head and its next, the previous
        // head
        else
        {
            new_node->data = head;
            head = new_node;
        }
    }

    // loop over the list. return true if element found
    bool IsInList(int val)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == val)
                return true;
            temp = temp->data;
        }
        return false;
    }

    int GetItem(int val)
    {
        // If the head is to be deleted
        if (head->data == val)
        {
            delete head;
            head = head->next;
            return val;
        }

        // If there is only one element in the list
        if (head->next == NULL)
        {
            // If the head is to be deleted. Assign null to the head
            if (head->data == val)
            {
                delete head;
                head = NULL;
                return val;
            }
            // else print, value not found
            int *ptr = NULL;
            return *ptr;
        }

        // Else loop over the list and search for the node to delete
        Node *temp = head;
        while (temp->next != NULL)
        {
            // When node is found, delete the node and modify the pointers
            if (temp->next->data == val)
            {
                Node *temp_ptr = temp->next->next;
                delete temp->next;
                temp->next = temp_ptr;
                return val;
            }
            temp = temp->next;
        }
        int *ptr = NULL;
        return *ptr;
    }

    bool IsEmpty()
    {
        if (Size() == 0)
        {
            return true;
        }
        return false;
    }

    int Size()
    {
        int count = 0;
        Node *cur = head;
        while (cur != NULL)
        {
            count += 1;
            cur = cur->next;
        }
        return count;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

void test()
{
    cout << "1. Add item \n2. Get Student \n3. Is In List \n4. Check if empty \n5. Size \n6. See next \n7. See at \n8. Reset" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    if (choice == 1)
    {
    }
    else if (choice == 2)
    {
    }
    else if (choice == 3)
    {
    }
    else if (choice == 4)
    {
    }
    else if (choice == 5)
    {
    }
    else if (choice == 6)
    {
    }
    else if (choice == 7)
    {
    }
    else if (choice == 8)
    {
    }
    else
    {
        cout << "Enter a valid choice";
    }
}

int main()
{
    test();
    return 0;
}
