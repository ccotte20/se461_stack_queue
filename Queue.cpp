// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#define DEFAULT_RESIZE 5
// Dr. Ryan: We need to include what data_ is here - the Dynamic_Array?
// Fixed: initialized Dynamic_Array
template <typename T>
Queue <T>::Queue (void) : data_(Dynamic_Array<T>()), front_(0), rear_((data_.size()-1)), size_(0)
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
	if((size_+1)>data_.size())
	{
		data_.resize(data_.size()+DEFAULT_RESIZE);
	}
	rear_=(rear_+1) % data_.size();
	data_[rear_]=element;
	size_++;
}

//
// dequeue
//
template <typename T>
T Queue <T>::dequeue (void)
{
	if(this->is_empty())
	{
		throw empty_exception();
	}
	else
	{
		T temp = data_[front_];
		front_ = (front_+1) % data_.size();
		size_--;
		return temp;
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
	data_.resize(0);
	front_=0;
	rear_=-1;
	size_=0;
}