#pragma once

#include <vector>

/// Provides an indexed free list with constant-time removals from anywhere
/// in the list without invalidating indices. T must be trivially constructible
/// and destructible.
template <class T>
class FreeList
{
  public:
    FreeList() : first_free(-1) {}

    int insert(const T& element)
    {
        if (first_free != -1)
        {
            const int index     = first_free;
            first_free          = data[first_free].next;
            data[index].element = element;
            return index;
        }
        else
        {
            FreeElement fe;
            fe.element = element;
            data.push_back(fe);
            return static_cast<int>(data.size() - 1);
        }
    }

    void erase(int n)
    {
        data[n].next = first_free;
        first_free   = n;
    }

    void clear()
    {
        data.clear();
        first_free = -1;
    }

    int range() const { return static_cast<int>(data.size()); }

    T& operator[](const int n) { return data[n].element; }

    const T& operator[](const int n) const { return data[n].element; }

    void reserve(size_t size) { data.reserve(size); }

    void swap(FreeList<T> target) { data.swap(target.data); }

  private:
    union FreeElement {
        T   element;
        int next;
    };
    std::vector<FreeElement> data;
    int                      first_free;
};
