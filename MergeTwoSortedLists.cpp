
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *sol = nullptr;
        ListNode *merge = nullptr;
        ListNode *i=list1, *j=list2;
        while(i!=nullptr && j!=nullptr){

            if(i->val<=j->val){
                if(sol==nullptr)
                    merge = sol = new ListNode(i->val);
                else{
                    sol->next = new ListNode(i->val);
                    sol = sol->next;
                }
                i=i->next;
            }

            else{
                if(sol==nullptr)
                    merge = sol = new ListNode(j->val);
                else{
                    sol->next = new ListNode(j->val);
                    sol = sol->next;
                }
                j=j->next;
            }
        }

        if(i!=nullptr){
            while(i!=nullptr){
                if(sol==nullptr)
                    merge = sol = new ListNode(i->val);
                else{
                    sol->next = new ListNode(i->val);
                    sol = sol->next;
                }
                i=i->next;
            }
        }

        else if(j!=nullptr){
            while(j!=nullptr){
                if(sol==nullptr)
                    merge = sol = new ListNode(j->val);

                else{
                    sol->next = new ListNode(j->val);
                    sol = sol->next;
                }
                j=j->next;
            }
        }
        return merge;
    }

};
