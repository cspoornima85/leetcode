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
    bool hasCycle(ListNode *head) {
	
		// Return false if head is NULL
        if(!head)
            return false;
        
        // Floyd’s Cycle-Finding Algorithm- fast and slow approach
		// Create two pointers fast and slow and assign them to head
        ListNode *fast = head;
        ListNode *slow = head;
        
		while(fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            			
			// if fast and slow points to same address means linked list has a cycle in it.
            if(fast == slow)
                return true;
        }
        
		// if traversal reaches to NULL this means no cycle.
        return false;
    }
};