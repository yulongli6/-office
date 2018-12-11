/*
 * struct ListNode {
 *  int val;
 *  struct ListNode *next;
 *  ListNode(int x) :
 *      val(x), next(NULL) {}
 };*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(pListHead == NULL || k == 0)
            return NULL;
        ListNode* pre = pListHead;
        ListNode* back = pListHead;
        int n = (int)k;
        while(--n)
        {
            if(pre->next == NULL)
                return NULL;
            pre = pre->next;

        }

        while(pre->next != NULL)
        {
            pre = pre->next;
            back = back->next;

        }

        return back;

    }

};
