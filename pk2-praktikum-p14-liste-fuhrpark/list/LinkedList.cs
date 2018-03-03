public class LinkedList<T> {
public class Element {
public T Data {
        get; set;
}
public Element Next {
        get; set;
}
}
private Element head;
private Element tail;

public void Add(T Data){
        if(head == null) { // Liste leer
                head = new Element();
                head.Data = Data;
                tail = head;
        }else{
                Element e = head;
                while(e.Next != null)
                        e = e.Next;
                Element newEl = new Element();
                newEl.Data = Data;
                e.Next = newEl;
                tail = newEl;
        }
}

public void Remove(int i){
        if(i == 0) { // remove first Element
                head = head.Next;
        }else{
                Element e = head;
                for(int j = 0; j < (i-1); j++) { // ends at predecessor of Element
                        e = e.Next;
                }
                e.Next = e.Next.Next;
        }
}

public Iterator<T> Iterator(){
        return new ListIterator(head);
}

class ListIterator : Iterator<T>{
private Element e;

public ListIterator(Element head) {
        e = head;
}

public bool HasNext(){
        return e != null;
}

public T Next(){
        T Data = e.Data;
        e = e.Next;
        return Data;
}
}
}
