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
        ListNode* c1=l1;
        ListNode* c2=l2;
        int carry=0,sum=0;
        ListNode demo(0);
        ListNode* cur=&demo;

        while(c1!=nullptr || c2!=nullptr || carry>0){
            sum=carry;
            if(c1!=nullptr){
                sum+=c1->val;
                c1=c1->next;
            }
            if(c2!=nullptr){
                sum+=c2->val;
                c2=c2->next;
            }
            carry=sum/10;
            cur->next= new ListNode(sum%10);
            cur=cur->next;
        }
        
        return demo.next;
    }
};