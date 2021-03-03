// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
//
// Stack
//
#include "Stack.h"

#define DEFAULT_RESIZE 5

// Dr. Ryan: We need to leverage our Array here - Composition.

template <typename T>
Stack <T>::Stack (void) : data_(), top_(-1), size_(0)
{

}

//
// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack) : data_(stack.data_), top_(stack.top_), size_(stack.size())
{
	
}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void)
{
	
}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
	if(top_<=(data_.size()-1))
	{
		top_++;
		size_++;
		data_[top]=element;
	}
	else
	{
		data_.resize(data_.size()+=DEFAULT_RESIZE);
		top_++;
		size_++;
		data_[top]=element;
	}
}

//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{
	if(this->is_Empty())
	{
		throw empty_exception();
	}
	else
	{
		data_[top]=NULL;
		top_--;
		size_--:
	}
}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
	if(this!= &rhs)
	{
		data_=rhs.data_;
		top_=rhs.top_;
		size_=rhs.size();
	}
}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
	data_.resize(0);
	top_=-1;
	size_=0;
}
