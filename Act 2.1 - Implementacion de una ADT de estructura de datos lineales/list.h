#ifndef LIST_H
#define LIST_H


template <class T> class List;
template <class T> class ListIterator;

template <class T>
class Link {
    private:
        Link(T);
        Link(T, Link<T>*);
        Link(const Link<T>&);

        T       value;
        Link<T> *next;

        friend class List<T>;
        friend class ListIterator<T>;
};

template <class T>
Link<T>::Link(T val) : value(val), next(0) {}

template <class T>
Link<T>::Link(T val, Link* nxt) : value(val), next(nxt) {}

template <class T>
Link<T>::Link(const Link<T> &source) : value(source.value), next(source.next) {}

template <class T>
class List {
    public:
        List();
        List(const List<T>&);

        std::string toString() const;
        void insertion(T);
        T search(T) const;
        void update(int, T);
        T deleteAt(int);

    private:
        Link<T> *head;
        int size;

        friend class ListIterator<T>;

};

template <class T>
List<T>::List() : head(0), size(0) {}

template <class T>
std::string List<T>::toString() const {
	std::stringstream aux;
	Link<T> *p;

	p = head;
	aux << "[";
	while (p != 0) {
		aux << p->value;
		if (p->next != 0) {
			aux << ", ";
		}
		p = p->next;
	}
	aux << "]";
	return aux.str();
}

template <class T>
void List<T>::insertion(T val){
    Link<T> *newLink, *p;

    newLink = new Link<T>(val);
    
    if (size < 1) {
        newLink -> next = head;
        head = newLink;
        size++;
    } else {
        p = head;
        while (p -> next != 0) {
            p = p-> next;
        }
        newLink -> next = 0;
        p -> next = newLink;
        size ++;
    }
}

template <class T>
T List<T>::search(T val) const {
    Link<T> *p;
    int i = 0;

    p = head;
    while (p != 0) {
        if (p -> value == val) {
            return i;
        }
        p = p -> next;
        i++;
    }
    return -1;
}

template <class T>
void List<T>::update(int pos, T val){
    Link<T> *p;
    int i = 0;

    p = head;
    while (p != 0) {
        if (i == pos) {
            p -> value = val;
            return;
        }
        p = p -> next;
        i++;
    }
}

template <class T>
T List<T>::deleteAt(int pos){
    if (pos == 0){
        T res;
        Link<T> *p;

        p = head; 
        head = p->next;
        res = p -> value;
        delete p; size --;
        return res;
    } else {
        T res;
        int i = 1;
        Link<T> *prev = head;
        Link<T> *current = head -> next;
        while (i < pos){
            prev = current;
            current = current -> next;
        }
        res = current -> value;
        prev -> next = current -> next;
        delete current;
        size--;
        return res;
    }
}

#endif