#include <vector>

template <typename T>
void Merge(T* begin, T* mid, T* end){
    if((begin == mid) && (*begin > *end)){
        T tmp = *begin;
        *begin = *end;
        *end = tmp;
    }
    else{
        T* rightTapePtr = mid +1;
        T* leftTapePtr = begin;
        std::vector<T> firtsTape;
        while (rightTapePtr <= end)
        {
            firtsTape.push_back(*rightTapePtr);
            rightTapePtr++;
        }

        std::vector<T> secondTape;
        while (leftTapePtr <= mid)
        {
            secondTape.push_back(*leftTapePtr);
            leftTapePtr++;
        }

        while(!firtsTape.empty() || !secondTape.empty()){
            if(firtsTape.empty()){
                *begin = secondTape.front();
                secondTape.erase(secondTape.begin()); 
                begin++;
                continue;
            }

            if(secondTape.empty()){
                *begin = firtsTape.front();
                firtsTape.erase(firtsTape.begin()); 
                begin++;
                continue;
            }
            T leftValue = firtsTape.front();
            T rightValue = secondTape.front();

            if(leftValue < rightValue){
                *begin = firtsTape.front();
                firtsTape.erase(firtsTape.begin()); 
                begin++;
            }
            else{
                *begin = secondTape.front();
                secondTape.erase(secondTape.begin()); 
                begin++;
            }
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