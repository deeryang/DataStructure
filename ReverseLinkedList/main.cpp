#include <iostream>

using namespace std;

struct ListNode {
    int value;
    ListNode *next;
};

ListNode* CreateLinkedList(int n);
ListNode* ReverseLinkedList(ListNode *head);

void PrintLinkedList(ListNode *head);
void DeleteLinkedList(ListNode *head);

int main() {
    int n;
    cout << "Please input the length of the linked list: " << endl;
    cin >> n;

    ListNode *a = CreateLinkedList(n);
    cout << "Print linked list : " << endl;
    PrintLinkedList(a);
    cout << endl;

    ListNode *b = ReverseLinkedList(a);
    cout << "Print reversed linked list : " << endl;
    PrintLinkedList(b);
    DeleteLinkedList(b);

    return 0;
}

ListNode* CreateLinkedList(int n) {
    if (n == 0) {
        return NULL;
    }

    ListNode *head = new ListNode();
    int ch;
    cin >> ch;
    head->value = ch;
    ListNode *curListNode = head;
    for (int i = 1; i < n; i ++) {
        curListNode->next = new ListNode();
        curListNode = curListNode->next;
        cin >> ch;
        curListNode->value = ch;
    }
    return head;
}

ListNode* ReverseLinkedList(ListNode *head) {
    ListNode *cur = head;
    ListNode *pre = NULL;
    while (cur != NULL) {
        ListNode *next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }

    return pre;
}

void PrintLinkedList(ListNode *head) {
    ListNode *p = head;
    while (p != NULL) {
        cout << p->value << "->";
        p = p->next;
    }
    cout << "NULL";

    return;
}

void DeleteLinkedList(ListNode *head) {
    ListNode *curListNode = head;
    while (curListNode != NULL) {
        ListNode *delListNode = curListNode;
        curListNode = curListNode->next;
        delete delListNode;
    }

    return;
}
