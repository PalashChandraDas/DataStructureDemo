#include <stdio.h>
#include<stdlib.h

typedef struct Node node; //struct Node এর নতুন নামকরণ করা হয়েছে node। যেটা এখন সব জায়গায় node নামক datatype হিসেবে ব্যবহার করা যাবে।
struct Node {
    int data;
    node *next;
};
node *head, *second, *third;

//traversing nodes
void printItem() {
    node *temp;
    temp = head;
    while(temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {

    head = (node*)malloc(sizeof(node)); // ১ম নোডের জন্য মেমোরি বরাদ্দ করলাম, যার ফলে একটা মেমোরি এড্রেস তৈরি হলো, যেটা রেখে দিলাম head নামক pointer এড্রেসে।

    head->data = 10; // এটা ১ম নোডের ১ম পার্ট, যেখানে একটা Item রাখা যায়।
    second = (node*)malloc(sizeof(node)); //একইভাবে, ১ম নোডের মতো ২য় নোডের জন্য মেমোরি বরাদ্দ করলাম, যার ফলে একটা মেমোরি এড্রেস তৈরি হলো, যেটা রেখে দিলাম second নামক pointer এড্রেসে।
    head->next = second; //এটা ১ম নোডের ২য় পার্ট, যেখানে পরবর্তী নোড অর্থাৎ ২য় নোডের মেমোরি এড্রেসকে store করে রাখে বা point করে।

    second->data = 15; //একইভাবে, এটা ২য় নোডের ১ম পার্ট, যেখানে একটা Item রাখা হয়েছে।
    third = (node*)malloc(sizeof(node));
    second->next = third; //একইভাবে, এটা ২য় নোডের ২য় পার্ট, যেখানে পরবর্তী নোড অর্থাৎ ৩য় নোডের মেমোরি এড্রেসকে store করে রাখে বা point করে।

    third->data = 21;
    third->next = NULL; //পরবর্তী কোনো node না থাকায় এখানে NULL স্টোর করা হয়েছে।

    // এভাবে আমরা আমাদের ইচ্ছামতো অনেকগুলো নোড তৈরি করতে পারি এবং এভাবে implement করতে পারি।

    printItem();//calling function
    return 0;
}
