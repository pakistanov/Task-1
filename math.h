#pragma once
#include <vector>


template<typename T>
class storage
{
    std::vector<T> content;
    storage()   {};
    storage(storage const &);
    storage & operator=(storage const &);
public:
    void addTo(T value){
        static storage OnlyOneObj;
        content.push_back(value);
    }
    void deleteFrom(T value){
        for (int i = 0; i < content.size(); i++)
        {
            if (content[i]==value) content.erase(i);
        }
    }
};

bool isPowTwo(uint64_t value);
