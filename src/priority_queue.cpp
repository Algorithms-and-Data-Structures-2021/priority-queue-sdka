#include "priority_queue.hpp"
#include <vector>
#include <iosfwd>
#include <sstream>
#include <iostream>
// файл с определениями

namespace itis {

  PriorityQueue::PriorityQueue() {
    std::vector<int> vector;
    vector.push_back(0);
    heap_vector_ = vector;
  }

  void PriorityQueue::push(int value) {
    heap_vector_.push_back(value);
    size_ = size_ + 1;
    swapUp(size_);
  }

  int PriorityQueue::pop() {
    if(size_ == 0){
      std::stringstream ss("no elements");
      throw std::out_of_range(ss.str());
    }
    int root = heap_vector_[1];
    heap_vector_[1] = heap_vector_[size_];
    size_ = size_ - 1;
    heap_vector_.pop_back();
    swapDown(1);
    return root;
  }

  int PriorityQueue::peek() {
    return heap_vector_[1];
  }

  void PriorityQueue::print() {
    for (int i = 1; i < heap_vector_.size(); ++i) {
      std::cout << heap_vector_[i];
      std::cout << " ";
    }
    std::cout << std::endl;
  }

}  // namespace itis