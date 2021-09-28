#ifndef DList_H
#define DList_H

template <class T> class DList;

template <class T>
class DLink {
    private:
        DLink(T);
        DLink(T, DLink<T>*, DLink<T>*);
        DLink(const DLink<T>&);

        T value;
        DLink<T> *previous;
        DLink<T> *next;

        friend class DList<T>;
};

template <class T>
DLink<T>::DLink(T val) : value(val), next(0), previous(0){}

template <class T>
DLink<T>::DLink(T val, DLink *prev, DLink* nxt) {}

template <class T>
DLink<T>::DLink(const DLink<T> &source) {}









template <class T>
class DList {
    public:
        DList();

        void insertion(T);
        int search(T) const;
        void update(int, T);
        T deleteAt(int);

        std::string toStringForward() const;
        std::string toStringBackward() const;

    private:
        DLink<T> *head;
        DLink<T> *tail;
        int size;

};

template <class T>
DList<T>::DList() : head(0), tail(0), size(0) {}

template <class T>
std::string DList<T>::toStringForward() const {
    std::stringstream aux;
    DLink<T> *p;

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
std::string DList<T>::toStringBackward() const {
    std::stringstream aux;
    DLink<T> *p;

    p = tail;
    aux << "[";
    while (p != 0) {
        aux << p->value;
        if (p->previous != 0) {
            aux << ", ";
        }
        p = p->previous;
    }
    aux << "]";
    return aux.str();
}

template <class T>
void DList<T>::insertion(T val) {
    DLink<T> *newDLink;
    newDLink = new DLink<T>(val);

    if (size == 0) {
        tail = newDLink;
        head = newDLink;
    } else {
        tail -> next = newDLink;
        newDLink -> previous = tail;
        tail = newDLink;
    }
    size ++;
}

template <class T>
int DList<T>::search(T val) const {
    DLink<T> *p;
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
void DList<T>::update(int pos, T val) {
    DLink<T> *p;
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
T DList<T>::deleteAt(int pos) {
    if (pos == 0) {
        T res;
        DLink<T> *p;

        p = head;
        head = p -> next;
        head -> previous = 0;
        delete p;
        size --;
        return res;
    } else {
        T res;
        int i = 1;
        DLink<T> *prev = head;
        DLink<T> *current = head -> next;
        while (i < pos){
            prev = current;
            current = current -> next;
        }
        res = current -> value;
        prev -> next = current -> next;
        current -> next -> previous = prev;
        delete current;
        size--;
        return res;
    }
}



#endif