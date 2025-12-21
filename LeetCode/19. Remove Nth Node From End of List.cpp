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
        ListNode* temp = head;
        ListNode* temp1 = head;
        int t = 0;
        while(temp){
            temp = temp->next;
            t++;
        }
        if (t == 1){
            return nullptr;
        }
        int x = t-n;
        int y = 0;
        ListNode* prev = nullptr;
        while (y != x){
            prev = temp1;
            temp1 = temp1->next;
            y++;
        }

        ListNode* temp2 = temp1->next;
        if (temp2){
            temp1->val = temp2->val;
            temp1->next = temp2->next;
            delete temp2;
        }
        else if(temp1->next == nullptr){
            prev->next = nullptr;
            delete temp1;
        }

        return head;
    }
};