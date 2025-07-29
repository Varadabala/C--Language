//#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
   struct Node *next;
};

struct Node *front = NULL,*rear = NULL;

int main() {
   struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    
    temp->data = 10;
    temp->next = NULL;

    if(front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else{
        temp->next = front;
        front = temp;
        free(temp);
    }

   // struct Node *ptr = front;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
  
     return 0;
}
