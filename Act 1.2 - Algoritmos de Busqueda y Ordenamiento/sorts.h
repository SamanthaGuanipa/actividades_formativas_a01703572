#ifndef sorts_h
#define sorts_h

#include <vector>
#include <iostream>
#include <list>

template <class T>
class Sorts{
    public:
        void ordenaSeleccion(std::vector<T> &vector);
        void ordenaBurbuja(std::vector<T> &vector);
        void ordenaMerge(std::vector<T> &vector);
        int busqSecuencial(std::vector<T> &vector, int val);
        int busqBinaria(std::vector<T> &vector, int val);
    private:
        void copyArray(std::vector<T> &A, std::vector<T> &B, int low, int high);
        void mergeArray(std::vector<T> &A, std::vector<T> &B, int low, int mid, int high);
        void mergeSplit(std::vector<T> &A, std::vector<T> &B, int low, int high);
        void swap(std::vector<T> &v, int i, int j);
};

template <class T>
void Sorts<T>::swap(std::vector<T> &v, int i, int j) {
    T aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

template <class T>
void Sorts<T>::ordenaSeleccion(std::vector<T> &vector){
    int pos;
    for(int i = vector.size() - 1; i > 0; i--){
        pos = 0;
        for(int j = 1; j <= i; j++) {
            if (vector[j] > vector[pos]) {
                pos = j;
            }
        }
        if(pos != i){
            swap(vector, i, pos);
        }
    }
}

template <class T>
void Sorts<T>::ordenaBurbuja(std::vector<T> &vector){
    for(int i = vector.size() - 1; i > 0; i--){
        for(int j = 0; j < i; j++) {
            if (vector[j] > vector[j+1]){
                swap(vector, j, j + 1);
            }
        }
    }
}

template <class T>
void Sorts<T>::copyArray(std::vector<T> &A, std::vector<T> &B, int low, int high){
    for(int i = low; i <= high; i++){
        A[i] = B[i];
    }
}

template <class T>
void Sorts<T>::mergeArray(std::vector<T> &A, std::vector<T> &B, int low, int mid, int high){
    int i = low, j = mid + 1, k = low;

    while(i <= mid && j <= high){
        if(A[i] < A[j]){
            B[k] = A[i];
            i++;
        } else {
            B[k] = A[j];
            j++;
        }
        k++;
    }
    if(i > mid){
        for (; j<= high; j++){
            B[k++] = A[j];
        }
    } else {
        for(; i <= mid; i++){
            B[k++] = A[i];
        }
    }
}

template <class T>
void Sorts<T>::mergeSplit(std::vector<T> &A, std::vector<T> &B, int low, int high){
    int mid;
    
    if( (high - low) < 1 ){
        return;
    }
    mid = (high + low) / 2;
    mergeSplit(A, B, low, mid);
    mergeSplit(A, B, mid + 1, high);
    mergeArray(A, B, low, mid, high);
    copyArray(A, B, low, high);
}

template <class T>
void Sorts<T>::ordenaMerge(std::vector<T> &vector){
    std::vector<T> tmp(vector.size());
    mergeSplit(vector, tmp, 0, vector.size() - 1);
}

template <class T>
int Sorts<T>::busqSecuencial(std::vector<T> &vector, int val){
    for(int i = 0; i < vector.size(); i++){
        if(vector[i] == val){
            return i;
        } 
    }
    return -1;
}

template <class T>
int Sorts<T>::busqBinaria(std::vector<T> &vector, int val){
    
    ordenaSeleccion(vector);

    int mid;
    int low = 0;
    int high = vector.size() - 1;

    while (high > low) {
        mid = (high + low) / 2;
        if (val == vector[mid]) {
            return mid;
        } else if (val < vector[mid]) {
            high = mid - 1;
        } else if (val > vector[mid]) {
            low = mid + 1;
        }
    }
    return -1;  
}

#endif