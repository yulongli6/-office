/*struct ListNode {
  int val;
  struct ListNode *next;
  ListNode(int x) :
  val(x), next(NULL) {

  }

  };
  */


class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead == NULL || pHead->next == NULL)
            return pHead;
        ListNode* p1 = pHead;
        ListNode* p2 = pHead->next;
        ListNode* p3 = pHead->next->next;

        while(p2 != NULL)
        {
            p2->next = p1;
            p1 = p2;
            p2 = p3;
            if(p3 != NULL)
                p3 = p3->next;

        }
        pHead->next = NULL;
        return p1;

    }

};
