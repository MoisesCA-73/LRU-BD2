#ifndef _LRU_H_
#define _LRU_H_

#include <bits/stdc++.h>

class LRU
{
private:
    int buf_size;
    std::vector<char*> buffer_pool;
    std::list<char*> cache;
public:
    LRU(int);
    void request_page(char*);
    void add_page(char*);
    void evict_page(char*);

    void print_buf_pages();

};

#endif