

/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* newNode=malloc(sizeof(SinglyLinkedListNode));
    newNode->data=data;
    newNode->next=NULL;
    
    if(position==0){
        newNode->next=llist;
        return newNode;
    }
    SinglyLinkedListNode* temp=llist;
    for(int k=0;k<position-1;k++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    return llist;
}

