#pragma once
#include <vector>
using namespace std;


template<typename T>
class storage
{
    static vector<T> content;
    storage()   {};
    storage(storage const &);
    storage & operator=(storage const &);
public:
    void addTo(T value)
    {
        content.push_back(value);
    }

    void deleteFrom(T value){
        for (typename vector<T>::iterator i =content.begin(); i!=content.end(); i++)
        {
            if (content[i]==value) content.erase(i);
        }
    }

    static storage & Instance()
    {
        static storage OnlyOneObj;
        return OnlyOneObj;
    }
};

bool isPowTwo(uint64_t value);
