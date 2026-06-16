#include<iostream>
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
ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) return true;
        ListNode* slow=head;
        ListNode* fast =head;
        while (fast->next!=NULL && fast->next->next!=NULL) {
            slow = slow->next;
            fast =fast->next->next;

        }
        ListNode* newhead = reverse(slow->next);
        ListNode* first = head ; 
        ListNode* sec =newhead ;
        while( sec!=NULL) {
            if(first->val!=sec->val) {
                reverse(newhead);
                return false;
            }
            first=first->next;
            sec=sec->next;
        }
        reverse(newhead);
        return true;
        
    }
};