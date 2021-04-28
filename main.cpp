#include <iostream>
#include <queue>
#include "priority_queue.hpp"
using namespace std;

int main(int argc, char *argv[]) {

  auto *pq = new itis::PriorityQueue();
  pq->push(3);
  pq->push(9);
  pq->push(5);
  pq->push(6);
  pq->push(2);
  pq->print();
  cout << "------------" << endl;
  cout << pq->peek() << endl;
  cout << pq->peek() << endl;
  cout << pq->peek() << endl;
  cout << pq->pop() << endl;
  cout << pq->pop() << endl;
  cout << pq->pop() << endl;
  cout << pq->pop() << endl;
  cout << pq->pop() << endl;
  return 0;
}