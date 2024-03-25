# Linked-Lists

In this problem you will implement a linearity test to check that a linked-list is linear
(that is, traversing next fields results no loops and eventually gets to a NULL node). Such a test
is important for checking the correctness of functions: any operations performed on a linked-list
should maintain the linearity of the linked-list.

Your function will take the head of a linked-list as input, and return true if the linked-list is linear
and return false if the linked-list is non-linear. By non-linear, we mean that as you loop through
the linked-list, eventually one of the nodes visited is a node that has already been visited before.

Hint 1: You can compare two variables of type pointer to check for equality. If the values of the
pointers (i.e. addresses contained in them) are the same, then the pointers really do contain the
same memory address and the == operator will return true.

Hint 2: A straightforward algorithm to check linearity compares each node to all of the nodes
preceding it. There is also a less straightforward but more efficient algorithm in which two pointers
both traverse the list, one pointer traversing the list twice as fast as the other pointer. If either
pointer ever reaches the end of the list then the list is linear. If the two pointers ever end up on
the same node, then the list is not linear.

Use a linked-list to implement a queue (an ordinary queue, not a priority queue). In
a bit more detail, you will implement the following:

•qnode structure: an individual element in the queue. Note that this struct has already
been implemented for you.

•queue structure: a structure with a qnode field that represents the linked-list that repre-
sents the queue, along with any other fields you need.

•create function: initialize a new queue.

•is empty function: check whether the queue is empty.

•enqueue function: add an element to the back of queue. Your function should take constant
time.

•dequeue function: remove an element from the front of the queue. Your function should
take constant time.

•as array function: fill an array with the contents of the queue.

•size function: return the size of the queue. 

•print function: print all of the elements in the queue.
