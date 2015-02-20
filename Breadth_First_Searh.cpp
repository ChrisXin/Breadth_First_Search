template<typename Object> 
void Binary_tree<Object>::k() {

// Created a queue
queue< Binary_tree_node<Object> * > que;

// push the root onth the queue 
que.enqueue( root );
