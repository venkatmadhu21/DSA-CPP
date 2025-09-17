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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Create a dummy node to help simplify the addition process
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy; // Pointer to build the new linked list
        int carry = 0; // Initialize carry to 0

        // Loop until both lists are processed
        while (l1 != nullptr || l2 != nullptr || carry) {
            // Get values from the current nodes, default to 0 if the node is null
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;

            // Calculate the sum and carry
            int sum = val1 + val2 + carry;
            carry = sum / 10; // Update carry for the next iteration
            current->next = new ListNode(sum % 10); // Create a new node for the result

            // Move to the next nodes
            current = current->next;
            if (l1 != nullptr) l1 = l1->next; // Advance l1
            if (l2 != nullptr) l2 = l2->next; // Advance l2
        }

        // The result is in the next of dummy node
        return dummy->next; 
    }
};
