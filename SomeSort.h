#include <vector>

template <typename T>
void Merge(T* begin, T* mid, T* end){
    if((begin == mid) && (*begin > *end)){
        T tmp = *begin;
        begin = *end;
        end = tmp;
    }
    else{
        T* rightTapePtr = mid +1;
        T* leftTapePtr = begin;
        std::vector<T> firtsTape;
        while (rightTapePtr <= mid)
        {
            firtsTape.push_back(*rightTapePtr);
            rightTapePtr++;
        }

        std::vector<T> secondTape;
        while (leftTapePtr <= end)
        {
            secondTape.push_back(*leftTapePtr);
            leftTapePtr++;
        }

        while(!firtsTape.empty() || !secondTape.empty()){
            
        }

        
    }
}

template <typename T>
void SomeSort(T* begin, T* end){
    if(begin < end){
        size_t size = static_cast<size_t>(end - begin);
        T* pivot = begin + size / 2;     
        SomeSort(begin,pivot);
        SomeSort((pivot+1),end);
        Merge(begin, pivot, end);
    }
}