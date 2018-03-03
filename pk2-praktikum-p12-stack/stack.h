#ifndef STACK_H_
#define STACK_H_

#include "empty_stack_exception.h"

template <typename T>
class Stack{
 private:
  struct Element{
    T key;
    Element* next;
	
  Element(T key, Element* next) : key {key}, next {next} {}
  };
  Element* top;

 public:
  Stack() {
    top = nullptr;
  }

  // Aufgabe: Bitte eine schnelle Version programmieren
  Stack(const Stack& orig){
    top = nullptr;
    Stack<T> temp {};
    Element* p = orig.top;
    while(p != nullptr){
      temp.push(p->key);
      p = p->next;
    }
    T tempkey;
	bool stackLeer = false;
    while(!stackLeer){
		try{
			tempkey = temp.pop();
			push(tempkey);
		}
		catch(empty_stack_exception& e){
			stackLeer = true;
		}
    }
  }
 
  ~Stack(){
	bool stackLeer = false;
    while (!stackLeer){
		try{
			pop();
		}
		catch(empty_stack_exception& e){
			stackLeer = true;
		}
	}
  }
  int push(T key);
  T pop();
};

template <typename T>
int Stack<T>::push(T key){
  Element *neu = new Element(key, top);
  if (neu != nullptr){
    top = neu;
    return 1;
  }
  return 0;
}

template <typename T>
T Stack<T>::pop(){
  T key;
  if (top == nullptr){
	  throw empty_stack_exception();
  }
  else{
    key = top->key;
    Element *next = top->next;
    delete top;
    top = next;
  }
  return key;
}

#endif
