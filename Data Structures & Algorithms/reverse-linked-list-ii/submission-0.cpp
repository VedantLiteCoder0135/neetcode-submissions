/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr)
        {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        for(int i=0;i<left-1;i++)
        {
            prev = prev->next;
        }
        ListNode* subHead = prev->next;
        ListNode* subTail = subHead;
        for(int i=0;i<right-left;i++)
        {
            subTail = subTail->next;
        }
        ListNode* nextNode = subTail->next;
        subTail->next = NULL;
        prev->next = reverse(subHead);
        subHead->next = nextNode;
        return dummy->next;
    }
};