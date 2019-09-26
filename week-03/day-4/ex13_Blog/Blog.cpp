//
// Created by Kemény Bálint on 2019. 09. 26..
//

#include "Blog.h"

Blog::Blog() = default;

void Blog::addPost(BlogPost* blogPostPtr) {
    _blogPostList.push_back(blogPostPtr);
}

void Blog::deletePost(int index) {
    _blogPostList.erase(_blogPostList.begin() + index);
}

void Blog::updatePost(int index, BlogPost* blogPostPtr) {
    _blogPostList[index]->setText(blogPostPtr->getText());
    _blogPostList[index]->setAuthorName(blogPostPtr->getAuthorName());
    _blogPostList[index]->setPublicationDate(blogPostPtr->getPublicationDate());
    _blogPostList[index]->setTitle(blogPostPtr->getTitle());
}
