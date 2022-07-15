#include <bits/stdc++.h>
#include "LRU.h"

int main()
{
    LRU my_buffer(3);
    char page_a_in_disk = 'a';
    char * pointer_a = &page_a_in_disk;
    char page_b_in_disk = 'b';
    char * pointer_b = &page_b_in_disk;
    char page_c_in_disk = 'c';
    char * pointer_c = &page_c_in_disk;
    char page_d_in_disk = 'd';
    char * pointer_d = &page_d_in_disk;
    char page_e_in_disk = 'e';
    char * pointer_e = &page_e_in_disk;


    my_buffer.request_page(pointer_a);
    my_buffer.request_page(pointer_b);
    my_buffer.request_page(pointer_a);
    my_buffer.request_page(pointer_c);
    my_buffer.request_page(pointer_d);
    my_buffer.request_page(pointer_e);
    my_buffer.request_page(pointer_a);
    my_buffer.request_page(pointer_b);
    my_buffer.request_page(pointer_c);
    my_buffer.request_page(pointer_a);

    /*
    a a a a a e e e c
      b b b d d d b b
          c c c a a a
    */

    my_buffer.print_buf_pages();

    return 0;
}