#ifndef TEST_H
#define TEST_H

#include <iostream>
#include "Queue.h"

class Test
{
private:
//bool recentTest
void isEmptyAfterCreation();
void enqueueIsEmpty();
void enqueueOnEmptyPeekFront();
void enqueueMultiplePeekFront();
void enqueueDequeueIsEmpty();
void enqueueChar();
void enqueueMultipleDequeuePeek();
void dequeueEmpty();
void PeekfrontEmpty();
void EnqueuedequeuePeekFront();
void PeekfrontMultipleenqueue();
void enqueueDequeueAllIsEmpty();
void enqueueMultipleDequeuePeekV2();

public:
  void run();
};

#endif
