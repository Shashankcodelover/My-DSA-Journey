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

    struct compare{
        bool operator()(ListNode* a, ListNode* b){
            return a->val > b->val ;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<ListNode*, vector<ListNode*>,compare> minheap;

        for(auto head:lists){
            if(head != nullptr){
                minheap.push(head);
            }
        }

        ListNode dummy(0);
        ListNode* cur=&dummy;

        while(!minheap.empty()){
            ListNode* smallest = minheap.top();
            minheap.pop();

            cur->next=smallest;
            cur=cur->next;

            if(smallest->next != nullptr){
                minheap.push(smallest->next);
            }
        }
        return dummy.next;
    }
};