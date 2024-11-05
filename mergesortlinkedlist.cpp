
#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Solution class for sorting the linked list
class Solution {
public:
    // Helper function to find the middle of the list
    ListNode* findmiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next; // Find the left middle
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // Helper function to merge two sorted linked lists
    ListNode* mergeTwoList(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);  // Dummy node to start the merged list
        ListNode* temp = dummy;

        while (list1 && list2) {
            if (list1->val <= list2->val) {
                temp->next = list1;
                list1 = list1->next;
            } else {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;  // Move the temp pointer to the next node
        }

        // If one list is exhausted, append the other
        if (list1 == nullptr) {
            temp->next = list2;
        } else {
            temp->next = list1;
        }

        ListNode* sortedHead = dummy->next;  // The sorted list starts after dummy
        delete dummy;  // Free the memory used by the dummy node
        return sortedHead;
    }

    // Function to sort the linked list using merge sort
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;  // Base case

        ListNode* first = head;
        ListNode* middle = findmiddle(head);  // Find the middle node
        ListNode* last = middle->next;  // Last will point to the second half
        middle->next = nullptr;  // Split the list into two halves

        first = sortList(first);  // Recursively sort the first half
        last = sortList(last);    // Recursively sort the second half

        return mergeTwoList(first, last);  // Merge the two sorted halves
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to insert a new node at the end of the list
void insertAtEnd(ListNode*& head, int value) {
    if (head == nullptr) {
        head = new ListNode(value);
    } else {
        ListNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new ListNode(value);
    }
}

int main() {
    ListNode* head = nullptr;

    // Inserting values into the linked list
    insertAtEnd(head, 4);
    insertAtEnd(head, 2);
    insertAtEnd(head, 1);
    insertAtEnd(head, 3);

    cout << "Original list: ";
    printList(head);

    // Sorting the linked list
    Solution solution;
    head = solution.sortList(head);

    cout << "Sorted list: ";
    printList(head);

    return 0;
}
