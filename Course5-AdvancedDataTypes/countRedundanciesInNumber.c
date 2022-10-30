/*
In this task you will again work with the linked list of digits we created during the lessons up to this point. 

You are provided with (but are not required to use) the functions and prototypes we have written so far.
You are also provided with a main() function to test your code. Please do not modify this main() function.

Your task is to write a new function countRedun() which takes as input a pointer that holds the 
address of the start of a linked list of digits. Your function should count how many redundancies can be observed 
in the number stored in this list and return this count of redundancies.
A redundancy is a digit which has previously already occurred in the number. 
For example, in the number 39534, the second '3' is a redundancy.

Examples

Input: 
5243

Output: 
The number 5243
contains 0 redundancies.

Input: 
5256202

Output: 
The number 5256202
contains 3 redundancies.

Input: 
7777

Output: 
The number 7777
contains 3 redundancies.
*/

#include <stdio.h>
#include <stdlib.h>

struct digit
{
    int num;
    struct digit *next;
};

struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *);
struct digit * readNumber(void); 
struct digit * searchNumber(struct digit * start, int number);
struct digit * insertAtFront(struct digit * start, struct digit * newptr);
struct digit * insertIntoSorted(struct digit *start, struct digit *newDig);
struct digit * sortedCopy(struct digit *);
int countRedun(struct digit * start);

int main(void) {
    struct digit *start;
    start = readNumber();
    printf("The number ");
    printNumber(start);
    printf("contains %d redundancies.\n", countRedun(start));
    freeNumber(start);
    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit * readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

struct digit * insertAtFront(struct digit * start, struct digit * newptr) {
    newptr->next = start;
    return(newptr);
}

struct digit * insertIntoSorted(struct digit *start, struct digit *newDig){
    struct digit * ptr = start;
    struct digit * prev = NULL;
    while ((ptr!=NULL) && (ptr->num < newDig->num)) {
        prev = ptr;
        ptr = ptr->next;
    }
    if (prev==NULL) {
        start = insertAtFront(start, newDig);
    } else {
        prev->next = newDig;
        newDig->next = ptr;
    }
    return(start);
}

struct digit * sortedCopy(struct digit * start){
    struct digit *ptr = start;
    struct digit *sortedStart=NULL;
    struct digit *newDigit;

    if (start!=NULL) {
        sortedStart = createDigit(start->num);
        ptr = start->next;
    }
    while (ptr != NULL) {
        newDigit = createDigit(ptr->num);
        sortedStart = insertIntoSorted(sortedStart, newDigit);
        ptr = ptr->next;
    }
    return(sortedStart);
}

int countRedun(struct digit * start) {
    struct digit *sorted = sortedCopy(start);
    struct digit *ptr = sorted;
    int redun = 0;
    int prev = -1;
    
    while (ptr != NULL) {
        if (ptr->num == prev) 
            redun++;
        else 
            prev = ptr->num;
        ptr = ptr->next;
    }
    freeNumber(sorted);
    return redun;
}