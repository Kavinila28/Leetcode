class Solution {
public:
    bool hasCycle(ListNode *head) {
        // If the list is empty or has only one node, it cannot have a cycle
        if (!head || !head->next) {
            return false;
        }
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        // Traverse the list with two pointers at different speeds
        while (fast && fast->next) {
            slow = slow->next;          // Moves 1 step at a time
            fast = fast->next->next;    // Moves 2 steps at a time
            
            // If the fast pointer catches up to the slow pointer, there is a cycle
            if (slow == fast) {
                return true;
            }
        }
        
        // If the fast pointer reaches the end of the list, there is no cycle
        return false;
    }
};