#include <stdio.h>

struct ListNode
{
	int m_nValue;
	ListNode *m_pNext;
};

void AddToTail(ListNode** pHead, int value)
{
	ListNode *pNew = new ListNode();
	pNew->m_nValue = value;
	pNew->m_pNext = NULL;

	if (*pHead == NULL)
	{
		*pHead = pNew;
	}
	else
	{
		ListNode* pNode = *pHead;

		while (pNode->m_pNext != NULL)
		{
			pNode = pNode->m_pNext;
		}
		pNode->m_pNext = pNew;
	}
}

void PrintListNode(ListNode *pHead)
{
	ListNode *pNode = pHead;
	while (pNode != NULL)
	{
		printf("%d ", pNode->m_nValue);
		pNode = pNode->m_pNext;
	}
}

ListNode* CreateListNode(int value)
{
	ListNode* pNode = new ListNode();
	pNode->m_nValue = value;
	pNode->m_pNext = nullptr;

	return pNode;
}

//===========≤‚ ‘=========
//---------Œ≤≤øÃÌº”≤‚ ‘-----------
void TestListNode(void)
{
	struct ListNode *TestList;
	int i;
	void AddToTail(ListNode **pHead, int value);
	void PrintListNode(ListNode *pHead);
	PrintListNode;

	for (i = 0; i < 1; i++)
	{
		AddToTail(&TestList, i);
	}

	PrintListNode(TestList);
}
