#include <array>

template<typename T,size_t StackSize>
class StaticAllocator: public std::allocator<T>{
private: 
    using pointer = T*;
    
public: 
    pointer allocate(size_t n){ 
        return &container[0];
    }

    void deallocate(pointer ptr, size_t n){
        return;
    }
    
private:
    std::array<T,StackSize> container{};
    
};
