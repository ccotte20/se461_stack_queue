// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#include "Queue.h"

template <typename T>
Queue <T>::Queue (void) : data_(), front_(-1), rear_(data_.size()-1), size_(0)
{

}

//
// Queue
//
template <typename T>
Queue <T>::Queue (const Queue & queue) : data_(queue.data_), front_(queue.front_), rear_(queue.rear_), size_(queue.size())
{
	
}

//
// ~Queue
//
template <typename T>
Queue <T>::~Queue (void)
{
	
}

//
// enqueue
//
template <typename T>
void Queue <T>::enqueue (T element)
{
	rear_=`(rear_+1) % data_.size();
	data_[rear_]=element;
	size_++;
}

//
// dequeue
//
template <typename T>
T Queue <T>::dequeue (void)
{
	if(this->is_Empty())
	{
		throw empty_exception();
	}
	else
	{
		T temp = data_[front_];
		data_[front_] = NULL;
		front_ = (front_+1) % data_.size();
		size_--;
	}
}

//
// operator =
//
template <typename T>
const Queue <T> & Queue <T>::operator = (const Queue & rhs)
{
	if(this != &rhs)
	{
		data_=rhs.data_;
		front_=rhs.front_;
		rear_=rhs.rear_;
		size_=rhs.size();
	}
}

//
// clear
//
template <typename T>
void Queue <T>::clear (void)
{
	for(int i=0; i<data_.size(); i++)
	{
		data_[i]=NULL;
	}
	front_=-1;
	size_=0;
}