#include <iostream>
#include "Blog.h"

int main() {
    BlogPost post1;
    post1.setTitle("Lorem Ipsum");
    post1.setAuthorName("John Doe");
    post1.setPublicationDate("2000.05.04.");
    post1.setText("Lorem ipsum dolor sit amet.");

    BlogPost post2;
    post2.setTitle("Wait but why");
    post2.setAuthorName("Tim Urban");
    post2.setPublicationDate("2010.10.10.");
    post2.setText("A popular long-form, stick-figure-illustrated blog about almost everything.");

    BlogPost post3;
    post3.setTitle("One Engineer Is Trying to Get IBM to Reckon With Trump");
    post3.setAuthorName("William Turton");
    post3.setPublicationDate("2017.03.28.");
    post3.setText("Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention."
                  " When I asked to take his picture outside one of IBM’s New York City offices, he told me that he "
                  "wasn’t really into the whole organizer profile thing.");


    Blog testBlog;
    testBlog.addPost(&post1);
    testBlog.addPost(&post2);
    testBlog.addPost(&post3);

    testBlog.updatePost(1, &post3);
    testBlog.deletePost(2);

    return 0;
}