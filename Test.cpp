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
  std::cout<< "Test 7: Enqueue 21, enqueue 25, dequeue, and then peekFront returns 21: ";
  enqueueMultipleDequeuePeek();
  std::cout<<"Test 8: Create Queue, dequeue throws runtime error:";
  dequeueEmpty();
  std::cout<<"Test 9: Peekfront on empty queue returns runtime error: ";
  PeekfrontEmpty();
  std::cout<<"Test 10: Enqueue 21, dequeue, peekFront returns runtime error: ";
  EnqueuedequeuePeekFront();
  std::cout<<"Test 11: Make sure after enqueueing 21 and then enqueueing multiple values, 21 is always at the front: ";
  PeekfrontMultipleenqueue();
  std::cout<<"Test 12: Dequeue multiple values from the queue until it is empty. isEmpty returns true: ";
  enqueueDequeueAllIsEmpty();
  std::cout<<"Test 13: Enqueue, 21, 25, and 27, and then dequeue 27, and 21 is returned when peekFront is called: ";
  enqueueMultipleDequeuePeekV2();
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

  try
    {
      q.enqueue('p');
      std::cout << "FAILED\n";
    }
    catch(std::runtime_error& rte)
    {
      std::cout << "PASSED\n";
    }
}
void Test::enqueueMultipleDequeuePeek()
{
  Queue q;
  q.enqueue(21);
  q.enqueue(25);
  q.dequeue();
  if(q.peekFront() == 21)
  {
    std::cout<<"PASSED \n";
  }
  else
  {
    std::cout<<"FAILED \n";
  }
}

void Test::dequeueEmpty()
{
  Queue q;
  try
    {
      q.dequeue();
      std::cout << "FAILED\n";
    }
    catch(std::runtime_error& rte)
    {
      std::cout << "PASSED\n";
    }
}

void Test::PeekfrontEmpty()
{
  Queue q;
  try
    {
      int test = q.peekFront();
      std::cout << "FAILED\n";
    }
    catch(std::runtime_error& rte)
    {
      std::cout << "PASSED\n";
    }
}

void Test::EnqueuedequeuePeekFront()
{
  Queue q;
  q.enqueue(21);
  q.dequeue();
  try
    {
      int test = q.peekFront();
      std::cout << "FAILED\n";
    }
    catch(std::runtime_error& rte)
    {
      std::cout << "PASSED\n";
    }
}

void Test::PeekfrontMultipleenqueue()
{
  Queue q;
  q.enqueue(21);
  if(q.peekFront() != 21){
  std::cout<<"FAILED \n";
  return;
}
  for(int i = 0; i < 4; i++)
  {
    q.enqueue(i);
    if(q.peekFront() != 21)
    {
    std::cout<<"FAILED \n";
    return;
    }
  }
  std::cout<<"PASSED \n";
}

void Test::enqueueDequeueAllIsEmpty()
{
  Queue q;
  for(int i = 0; i < 9; i++)
  {
    q.enqueue(i);
  }
  for(int i = 0; i < 9; i++)
  {
    q.dequeue();
  }
  if(q.isEmpty())
  {
    std::cout<<"PASSED \n";
  }
  else
  {
    std::cout<<"FAILED \n";
  }
}

void Test::enqueueMultipleDequeuePeekV2()
{
  Queue q;
  q.enqueue(21);
  q.enqueue(25);
  q.enqueue(27);
  q.dequeue();
  if(q.peekFront() != 21)
  {
    std::cout<<"FAILED \n";
  }
  else
  {
    std::cout<<"PASSED \n";
  }
}
