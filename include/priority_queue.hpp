#pragma once
#include <vector>

namespace itis {



  class PriorityQueue {
   public:
    std::vector<int> heap_vector_;

    int size() const {
      return size_;
    }

    PriorityQueue();


    void push(int value);

    int pop();

    int peek();

    void print();

   private:
    int size_{0};

    void swapUp(int i){
      while ((i / 2) > 0){
        if (heap_vector_[i] < heap_vector_[i / 2]){
          int tmp = heap_vector_[i / 2];
          heap_vector_[i/2] = heap_vector_[i];
          heap_vector_[i] = tmp;
        }
        i = i/2;
      }
    }

    void swapDown(int i){
      while (i*2 <= size_){
       int min_child = minChild(i);
        if (heap_vector_[i] > heap_vector_[min_child]){
          int tmp = heap_vector_[i];
          heap_vector_[i] = heap_vector_[min_child];
          heap_vector_[min_child] = tmp;
        }
        i = min_child;
      }
    }

    int minChild(int i){
      if (((i*2)+1) > (size_)){
        return i * 2;
      }
      if (heap_vector_[i*2] < heap_vector_[(i*2)+1]){
          return i * 2;
      }
      return (i * 2) + 1;
    }

  };

}  // namespace itis