#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.1415926
struct node
{
    int value;
    node* next;
};

node* make_link(void);
node* reverse(node*);
void display(node*);

int main()
{
    node* head = make_link();
    display(head);
    head = reverse(head);
    display(head);
    cout<<asin(0.86)<<endl;
    system("pause");
    return 0;
}

node* make_link()
{
    node* head = new node();
    node* cur = head;
    for(int i = 0; i < 10; ++i)
    {
        cur->value = rand()%10;
        cur->next = new node();
        cur = cur->next;
    }
    return head;
}

node* reverse(node* head)
{
    node* pre;
    node* post;
    node* cur;
    if(!head && !head->next)
        return head;
    pre = head;
    cur = head->next;
    while(cur)
    {
        post = cur->next;
        cur->next = pre;
        pre = cur;
        cur = post;
    }
    head->next = NULL;
    return pre;
}

void display(node* head)
{

    node*cur = head;
    while(cur)
    {
        std::cout<<cur->value<<" ";
        cur = cur->next;
    }
    std::cout<<std::endl;
}