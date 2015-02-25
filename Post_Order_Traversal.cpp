template<typename Object>
void Binary_tree_node<Object>::h() {
  if ( left() != 0 ) {
      left()->h(); 
      }
  if ( right() != 0 ) {
      right()->h(); 
      }
  std::cout << retrieve() << std::endl; 
  }
