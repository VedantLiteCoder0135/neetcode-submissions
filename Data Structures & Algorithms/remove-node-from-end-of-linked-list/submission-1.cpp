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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k=0;
        ListNode* curr = head;
        if(head->next == NULL)
        {
            return NULL;
        }
        while(curr)
        {
            k++;
            curr = curr->next;
        }
        if(k==n)
        {
            return head->next;
        }
        ListNode* remove = head;
        ListNode* prev = new ListNode(0);
        prev->next = head;
        for(int i=0;i<k-n;i++)
        {
            remove = remove->next;
            prev = prev->next;
        }
        prev->next = remove->next;
        remove->next = NULL;
        return head;
    }
};
