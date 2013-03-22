/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (head == NULL)
            return NULL;
            
        ListNode *prev = head;
        ListNode *index = head->next;
        while (index)
        {
            if (index->val == prev->val)
            {
                prev->next = index->next;
            }
            else
            {
                prev = index;
            }
            index = index->next;
        }
        return head;
    }
};
