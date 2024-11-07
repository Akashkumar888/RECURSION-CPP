
#include<iostream>
using namespace std;

// Definition of a node in a singly linked list
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// Helper function to print the linked list
void printList(struct Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Solution class with QuickSort implementation
class Solution {
public:
    // Partition function for linked list
    struct Node* partition(struct Node* head, struct Node* last){
      struct Node* pos = head;
      struct Node* temp = head->next;
      while(temp!=last){
          if(temp->data < head->data){
              pos=pos->next;
              swap(pos->data,temp->data);
          }
          temp=temp->next;
      }
      swap(pos->data,head->data);
      return pos;
  }
    // Recursive QuickSort function for linked list
    void Quick_Sort(struct Node* head, struct Node* last) {
        if (head == last || head->next == last) {
            return;  // Base case: if the list is empty or has only one element
        }

        // Partition the list and recursively sort the left and right parts
        struct Node* p = partition(head, last);
        Quick_Sort(head, p);        // Sort the left part of the pivot
        Quick_Sort(p->next, last);  // Sort the right part of the pivot
    }

    // Main function to call QuickSort on the list
    struct Node* quickSort(struct Node* head) {
        Quick_Sort(head, nullptr);  // Call recursive quicksort with nullptr as end
        return head;  // Return the sorted list
    }
};

// Helper function to insert a new node at the end of the list
void insert(Node** headRef, int data) {
    Node* newNode = new Node(data);  // Create a new node
    if (*headRef == nullptr) {
        *headRef = newNode;  // Set the new node as the head if the list is empty
    } else {
        Node* temp = *headRef;
        while (temp->next != nullptr)
            temp = temp->next;  // Traverse to the end of the list
        temp->next = newNode;   // Add the new node at the end
    }
}

int main() {
    Node* head = nullptr;

    // Insert values into the linked list
    insert(&head, 9);
    insert(&head, 7);
    insert(&head, 8);
    insert(&head, 3);
    insert(&head, 6);
    insert(&head, 4);
    insert(&head, 5);
    insert(&head, 2);
    insert(&head, 1);
    insert(&head, 10);

    cout << "Original list: ";
    printList(head);

    // Perform QuickSort on the linked list
    Solution obj;
    head = obj.quickSort(head);

    cout << "Sorted list: ";
    printList(head);

    return 0;
}

