//ս���ܲ�������֮�У����˲�Ϣ���������ۣ�����ƽ�ء�

struct ListNode {     
	int val;
    	ListNode *next;
	ListNode *arb;
	ListNode(int x) : val(x), next(NULL), arb(NULL) {}
};



ListNode* cloneList(ListNode* head)
{
	if(head == NULL)
		return NULL;
	ListNode* current = head;
	while(current != NULL)
	{
		ListNode* newNode = new ListNode(current->val);
		newNode->next = current->next;
		current->next = newNode;
		current = current->next->next;
	}
	current = head;
	while(current != NULL)
	{
		current->next->arb = current->arb->next;
		current = current->next->next;
	}
	ListNode* p = head;
	ListNode* q = head->next;
	while(p != NULL)
	{
		p->next = q->next;
		p = p->next;
		if(p != NULL)
		{
			q->next = p->next;
			q = q->next;
		}
	}
	return head->next;



}
