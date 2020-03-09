#include<iostream>
using namespace std;

//将整个链表逆序 



struct ListNode
{
	int val;
	ListNode *next;
}; 
ListNode *reserseList(ListNode *head)
{
	ListNode *p = head;
	ListNode *p1,*new_head = NULL;
	while(p)
	{
		p1=p->next;
		p->next=new_head;
		new_head=p;
		p=p1;	
	}
	return new_head;
}
int main()
{
	return 0;
 } 
