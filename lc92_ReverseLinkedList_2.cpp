#include<iostream>
using namespace std;
//将链表从位置m到n逆序
struct ListNode
{
	int val;
	ListNode *next;
}; 
ListNode *reserseBetween(ListNode *head,int n,int m)
{
	ListNode *result=head,*p=head,*pre_p=NULL,*modify_list_tail;
	int changeLen=n-m+1;
	m=m-1;
	while(p&&m)
	{
		pre_p=p;
		p=p->next;
		m--;
	}
	modify_list_tail=p;
	ListNode *next_p,*new_p=NULL;
	
	while(p&&changeLen)
	{
		next_p=p->next;
		new_p=p;
		p=next_p;
		changeLen--;
	}
	modify_list_tail=p;
	if(pre_p)
		pre_p=new_p;
	else
		result=new_p;
	return result;
}
int main()
{
	return 0;
 } 
