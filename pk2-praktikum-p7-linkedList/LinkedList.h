#ifndef LinkedList_H
#define LinkedList_H

class LinkedList
{
private:
  struct element
  {
    const char *data;
    struct element *next;
  };

  struct element *head;
  struct element *tail;

public:
  LinkedList();
  LinkedList(const LinkedList &obj);
  ~LinkedList();
  int append(const char *text);
  int insert(const char *text, int p);
  int remove(int p);
  const char *get(int p);
  int index_of(const char *text);
  const char *first();
  const char *last();
  void visit_all(void (*work)(const char *t));
};

#endif