template<typename Object> 
void Binary_tree<Object>::k() {

// Created a queue
queue< Binary_tree_node<Object> * > que;

// push the root onth the queue 
que.enqueue( root );

// Push all of its children of the front node onto the queue
while ( !que.empty() ) {
     Binary_tree_node<Object> *ptr = que.dequeue(); if ( left() != 0 ) {
     que.enqueue( left() ); 
     }
     if ( right() != 0 ) {
     que.enqueue( right() );
     }

// print it out
  std::cout << ptr->retrieve() << std::endl; }
}
