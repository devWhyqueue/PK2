#include <iostream>
#include "stack.h"
// Test

int main(){
  Stack<int> s {};
 
  int i;
  for(i=1; i <= 10; i++){
    s.push(i);
  }

  Stack<int> t = s;
  
  for(i=0; i < 10; i++){
    std::cout << t.pop() << std::endl;
  }

  std::cout << "Jetzt kommt S" << std::endl;
  
  for(i=0; i < 10; i++){
    std::cout << s.pop() << std::endl;
  }
  
  // Exception-Test
  try{
  s.pop();
  }
  catch(empty_stack_exception& e){
	  std::cout << e.what() << std::endl;
  }
  
  return 0;
};
