template <typename T>
void Merge(T* begin, T* mid, T* end){
    315672
}

template <typename T>
void SomeSort(T* begin, T* end){
    if(p < r){
        size_t size = static_cast<size_t>(end - begin);
        T* pivot = begin + size / 2;     
        SomeSort(begin,pivot);
        SomeSort((pivot+1),end);
        Merge(begin, pivot, end);
    }
}