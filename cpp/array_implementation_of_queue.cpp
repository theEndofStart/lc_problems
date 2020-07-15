//head <-- front end pointer. When it's null  then queue is empty
//tail <-- rear end pointer. When their value is size-1, the queue is full
// adding/inserting elements is called enqueue
// remove/delete elements is called dequeue

//1. enqueue
//Check if the queue is full.
//If full, produce overflow error and exit.
//Else, increment ‘rear’.
//Add an element to the location pointed by ‘rear’.
//Return success.

//2.dequeue
//Check if the queue is empty.
//If empty, display an underflow error and exit.
//Else, the access element is pointed out by ‘front’.
//Increment the ‘front’ to point to the next accessible data.
//Return success.

//3.isEmpty
//4.isFull
//5.peek 

#include <iostream>
#define MAX_SIZE 5
using namespace std;

class Queue {}