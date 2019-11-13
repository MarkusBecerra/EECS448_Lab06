#include "Test.h"

void Test::run()
{
  std::cout<<"Test 1: Newly created Queue is empty: ";
  isEmptyAfterCreation();
  std::cout<<"Test 2: Enqueuing a value makes the Queue not empty: ";
  enqueueIsEmpty();
  std::cout<<"Test 3: Enqueue 21 on empty queue then peekFront returns 21: ";
  enqueueOnEmptyPeekFront();
  std::cout<<"Test 4: Enqueue 21 and then 25 on empty queue and then peekFront returns 21: ";
  enqueueMultiplePeekFront();
  std::cout<<"Test 5: Enqueue 21, dequeue, and then see if the queue is empty: ";
  enqueueDequeueIsEmpty();
  std::cout<< "Test 6: A Char cannot be Queued: ";
  enqueueChar();
}

void Test::isEmptyAfterCreation()
{
  Queue q;
  if(q.isEmpty())
  {
    std::cout<<"PASSED \n";
  }
  else
  {
    std::cout<<"FAILED \n";
  }
}

void Test::enqueueIsEmpty()
{
  Queue q;
  q.enqueue(21);
  if(q.isEmpty())
  {
    std::cout<<"FAILED \n";
  }
  else
  {
    std::cout<<"PASSED \n";
  }
}

void Test::enqueueOnEmptyPeekFront()
{
  Queue q;
  q.enqueue(21);
  if(q.peekFront() == 21)
  {
    std::cout<<"PASSED \n";
  }
  else
  {
    std::cout<<"FAILED \n";
  }
}

void Test::enqueueMultiplePeekFront()
{
  Queue q;
  q.enqueue(21);
  q.enqueue(25);
  if(q.peekFront() == 21)
  {
    std::cout<<"PASSED \n";
  }
  else
  {
    std::cout<<"FAILED \n";
  }
}

void Test::enqueueDequeueIsEmpty()
{
  Queue q;
  q.enqueue(21);
  q.dequeue();
  if(q.isEmpty())
  {
    std::cout<<"PASSED \n";
  }
  else
  {
    std::cout<<"FAILED \n";
  }
}

void Test::enqueueChar()
{
  Queue q;
  q.enqueue('p');
  if(q.isEmpty())
  {
    std::cout<<"PASSED \n";
  }
  else
  {
    std::cout<<"FAILED \n";
  }
}
