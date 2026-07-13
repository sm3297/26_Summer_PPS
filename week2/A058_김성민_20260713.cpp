#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *reverseListIterative(ListNode *head) {
    ListNode *prev = nullptr;
    ListNode *curr = head;

    while (curr != nullptr) {
      ListNode *nextTemp = curr->next;
      curr->next = prev;
      prev = curr;
      curr = nextTemp;
    }

    return prev;
  }

  ListNode *reverseListRecursive(ListNode *head) {
    if (head == nullptr || head->next == nullptr) {
      return head;
    }
    ListNode *newHead = reverseListRecursive(head->next);

    head->next->next = head;
    head->next = nullptr;
    return newHead;
  }
};

void printList(ListNode *head) {
  cout << "[";
  while (head != nullptr) {
    cout << head->val;
    if (head->next != nullptr)
      cout << ",";
    head = head->next;
  }
  cout << "]" << endl;
}

void deleteList(ListNode *head) {
  while (head != nullptr) {
    ListNode *temp = head;
    head = head->next;
    delete temp;
  }
}

int main() {
  Solution solution;

  // ListNode* head1 = new ListNode(1, new ListNode(2, new ListNode(3, new
  // ListNode(4, new ListNode(5))))); cout << "Test 1 (Iterative)" << endl; cout
  // << "Input:  "; printList(head1); head1 =
  // solution.reverseListIterative(head1); cout << "Output: "; printList(head1);
  // deleteList(head1);

  // ListNode* head2 = new ListNode(1, new ListNode(2));
  // cout << "\nTest 2 (Recursive)" << endl;
  // cout << "Input:  "; printList(head2);
  // head2 = solution.reverseListRecursive(head2);
  // cout << "Output: "; printList(head2);
  // deleteList(head2);

  ListNode *head3 = nullptr;
  cout << "\nTest 3 (Empty list)" << endl;
  cout << "Input:  ";
  printList(head3);
  head3 = solution.reverseListIterative(head3);
  cout << "Output: ";
  printList(head3);

  return 0;
}