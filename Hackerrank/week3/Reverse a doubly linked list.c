

/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts INTEGER_DOUBLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode* curr=llist;
    DoublyLinkedListNode* t=NULL;
    while(curr!=NULL){
        t=curr->prev;
        curr->pre
v=curr->next;
        curr->next=t;
        
        llist=curr;
        curr=curr->prev;
    }
    return llist;
}

