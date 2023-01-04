#include <iostream>

using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    ListNode *head;
    LinkedList()
    {
        this->head = NULL;
    }

    void insert(int data)
    {
        ListNode *newListNode = new ListNode(data);
        if (head == NULL)
        {
            head = newListNode;
            return;
        }
        ListNode *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newListNode;
    }

    void print()
    {
        ListNode *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void rotateList(int k)
    {
        if (head == 0 || k == 0)
        {
            return;
        }

        ListNode *tail = head;
        ListNode *curr = head;
        ListNode *newHead;

        int length = 1, count = 1;

        while (tail->next != 0)
        {
            tail = tail->next;
            length++;
        }

        k = k % length;

        if (k == 0)
        {
            return;
        }

        while (count <= (length - k - 1))
        {
            curr = curr->next;
            count++;
        }

        newHead = curr->next;
        curr->next = NULL;
        tail->next = head;
        head = newHead;

        cout << "Head : " << head->data << endl;
        cout << "tail : " << curr->data << endl;
    }
};

int main()
{
    LinkedList *list = new LinkedList();
    list->insert(1);
    list->insert(2);
    list->insert(3);
    list->insert(4);
    list->insert(5);

    list->rotateList(10);
    list->print();
}
