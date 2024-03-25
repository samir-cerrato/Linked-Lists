/*Samir Cerrato 
 *COMP 211, Fall 2022
 * Homework 8
 *
 * Queues
 */

#include <assert.h>
#include <stdlib.h>

#include "comp211.h"
#include "hw8.h"

/*  Replace each function body with your definitions.
 */

bool is_linear(qnode *hd){
  qnode* slow = hd;
  qnode* fast = hd;
  while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
    if(slow == fast){
      return false;
    }
  }
  return true;
}


queue create(){
    queue q;
    q.head = NULL;
    q.tail = NULL;
    q.size = 0;
    return q;
}

bool is_empty(queue *q) {
  if(q->size == 0){
    return true;
  }
  return false;
}


void enqueue(queue *q, char c) {
  qnode* node = (qnode*)malloc(sizeof(qnode));
  node->key = c;
  node->next = NULL;
  if(is_empty(q)){
    q->head = node;
    q->tail = node;
  }else{
    q->tail->next = node;
    q->tail = node;
  }
  q->size++;
}

char dequeue(queue *q) {
  if(is_empty(q)){
    return -1;
  }
  char c = q->head->key;
  qnode *temp = q->head;
  q->head = q->head->next;
  free(temp);
  if(is_empty(q)){
    q->tail = NULL;
  }
  q->size--;
  return c;
}

int size(queue* q) {
  return q->size;
}

void as_array(queue* q, char A[]) {
  if(is_empty(q)){
    A[0]= '\0' ;
  }
  qnode *node = q->head;
  int i=0;
  while(node != NULL){
    A[i]= node->key;
    i++;
    node = node->next;
  }
  A[i] = '\0';
}

void print(queue *q) {
  if(is_empty(q)){
    return;
  }
  qnode *node = q->head;
  printf("Q: ");
  while(node != NULL){
    printf("%c ", node->key);
    node = node->next;
  }
  printf("\n");
}
