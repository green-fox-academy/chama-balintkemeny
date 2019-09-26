//
// Created by Kemény Bálint on 2019. 09. 26..
//

#ifndef EX13_BLOG_BLOG_H
#define EX13_BLOG_BLOG_H

#include "BlogPost.h"
#include <vector>

class Blog {
public:
    Blog();
    void addPost (BlogPost* blogPostPtr);
    void deletePost (int index);
    void updatePost (int index, BlogPost* blogPostPtr);
private:
    std::vector<BlogPost*> _blogPostList;
};


#endif //EX13_BLOG_BLOG_H
