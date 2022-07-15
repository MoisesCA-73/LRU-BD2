#include "LRU.h"

LRU::LRU(int buf_size)
{
    this->buf_size = buf_size;
}

void LRU::request_page(char * x)
{
    for (std::list<char*>::iterator it = cache.begin(); it != cache.end() && *it != nullptr ; it++)
    {
        if(*it == x)
        {
            // Ya esta en memoria
            cache.erase(it);
            cache.push_back(x);
            return;
        }
    }
    if (this->cache.size() < buf_size)
    {
        this->cache.push_back(x);
        this->buffer_pool.push_back(x);
    }
    else add_page(x);

}


void LRU::add_page(char * x)
{
    for (int i = 0; i < this->buf_size; i++)
    {
        if (buffer_pool[i] == *cache.begin())
        {
            buffer_pool[i] = x;
            break;
        }
    }
    cache.erase(cache.begin());
    cache.push_back(x);

}

void LRU::print_buf_pages()
{
    for (int i = 0; i < this->buf_size; i++)
    {
        if (buffer_pool[i] != nullptr) std::cout << *buffer_pool[i] << '\n';
    }
}
