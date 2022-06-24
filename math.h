#pragma once
#include <vector>
using namespace std;


template<typename T>
class Storage
{
    vector<T> content;
    Storage()   {};
    Storage(const Storage &);
    Storage & operator=(const Storage &);
public:
    void AddTo(T value)
    {
        content.push_back(value);
    }

    void DeleteFrom(T value){
        for (typename vector<T>::iterator i =content.begin(); i!=content.end(); i++)
        {
            if (content[i]==value)
                content.erase(i);
        }
    }

    static Storage & Instance()
    {
        static Storage obj;
        return obj;
    }
};

bool isPowTwo(uint64_t value);

