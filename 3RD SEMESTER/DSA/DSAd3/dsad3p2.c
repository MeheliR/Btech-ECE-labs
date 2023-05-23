#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *head, *tail = NULL;
void pushfront(int val)
{
 struct node *new_node = (struct node *)malloc(sizeof(struct node));
 new_node->data = val;
 new_node->next = NULL;
 if (head == NULL)
 {
 head = new_node;
 tail = new_node;
 }
 else
 {
 new_node->next = head;
 head = new_node;
 }
}
void pushback(int val)
{
 struct node *new_node = (struct node *)malloc(sizeof(struct node));
 new_node->data = val;
 new_node->next = NULL;
 if (tail == NULL)
 {
 head = new_node;
 tail = new_node;
 }
 else
 {
 tail->next = new_node;
 tail = new_node;
 }
}
void insertafter(int val, int val1)
{
 struct node *curr = head;
 if (head == NULL)
 printf("The linked list is empty\n");
 else
 {
 while (curr != NULL && curr->data != val)
 {
 curr = curr->next;
 }
 struct node *new_node = (struct node *)malloc(sizeof(struct node));
 new_node->data = val1;
 new_node->next = NULL;
 new_node->next = curr->next;
 curr->next = new_node;
 }
}
void insertbefore(int val, int val1)
{
 struct node *curr = head;
 if (head == NULL)
 {
 printf("The link is empty");
 }
 else
 {
 struct node *prev;
 while (curr != NULL && curr->data != val)
 {
 prev = curr;
 curr = curr->next;
 }
 struct node *new_node = (struct node *)malloc(sizeof(struct node));
 new_node->data = val1;
 new_node->next = NULL;
 new_node->next = prev->next;
 prev->next = new_node;
 }
}
void delete_from_begening()
{
 if (head == NULL)
 {
 printf("The linked list is empty\n");
 }
 else
 {
 struct node *temp = head;
 head = head->next;
 free(temp);
 }
}
void delete_from_end()
{
 if (head == NULL)
 {
 printf("The linked list is empty\n");
 }
 else
 {
 struct node *curr = head;
 struct node *prev = NULL;
 while (curr->next != NULL)
 {
 prev = curr;
 curr = curr->next;
 }
 struct node *ptr = curr;
 prev->next = NULL;
 tail = prev;
 free(ptr);
 }
}
void delete_after(int val)
{
 struct node *curr = head;
 if (head == NULL)
 {
 printf("The linked list is empty\n");
 }
 else
 {
 while (curr->data != val && curr != NULL)
 {
 curr = curr->next;
 }
 if (curr->next != NULL)
 {
 struct node *temp = curr->next;
 curr->next = temp->next;
 free(temp);
 }
 }
}
void delete_before(int val)
{
 struct node *curr = head;
 if (head == NULL)
 {
 printf("The linked list is empty\n");
 }
 else
 {
 struct node *prev = NULL;
 while (curr->next->data != val && curr != NULL)
 {
 prev = curr;
 curr = curr->next;
 }
 struct node *temp = prev->next;
 prev->next = temp->next;
 free(temp);
 }
}
void delete_specific(int val)
{
 if (head == NULL)
 {
 printf("The linked list is empty\n");
 }
 else
 {
 if (head->data == val)
 {
 struct node *temp = head;
 head = head->next;
 free(temp);
 }
 else
 {
 struct node *curr = head;
 struct node *prev = NULL;
 while (curr->data != val)
 {
 prev = curr;
 curr = curr->next;
 }
 struct node *temp = curr;
 prev->next = curr->next;
 free(temp);
 }
 }
}
void display()
{
 struct node *curr = head;
 while (curr != NULL)
 {
 printf("%d ", curr->data);
 curr = curr->next;
 }
}
int main()
{
 // Pushing elements in the front
 pushfront(4);
 pushfront(3);
 pushfront(2);
 pushfront(1);
 // Pushing elements in the back
// pushback(10);
// pushback(12);
// // insert node after a given node
// insertafter(10, 11);
// // Insert before a given node
// insertbefore(11, 14);
// // Delete an element from the begening
// delete_from_begening();
// // Delete an element from the end
// delete_from_end();
// // Delete node after a node of given value
// delete_after(10);
// // Delete a node before a node of given value
// delete_before(10);
// // Delete a node with a specific value
// delete_specific(3);
// //Display the given linked list
 display();
 return 0;
}
