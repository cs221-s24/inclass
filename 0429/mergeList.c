typedef struct node {
    char* key;
    char* value;
    struct node* next;
} node;

node* mergeList(node* head1, node* head2) {

    node* n = head1;

    if (n==NULL) {
        return head2;
    }
    while (n->next!=NULL) {
        n = n->next;
    }
    n->next = head2; 

    return n;
}
