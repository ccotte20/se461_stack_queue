// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
//
// Dynamic_Array
//
template <typename T>
Dynamic_Array <T, N>::Dynamic_Array (void) : Array<T>()
{

}

//
// Dynamic_Array
//
template <typename T>
Dynamic_Array <T, N>::Dynamic_Array (const Dynamic_Array <T, N> & arr) : Array<T>(arr)
{
	
}

//
// Dynamic_Array
//
template <typename T>
Dynamic_Array <T, N>::Dynamic_Array (T fill) : Array<T>()
{
	this->fill(fill);
}

//
// ~Dynamic_Array
//
template <typename T, size_t N>
Dynamic_Array <T, N>::~Dynamic_Array (void)
{
	
}
//
// resize
//
template <typename T>
void Array <T>::resize (size_t new_size)
{
	if (new_size == this->cur_size_)
	{
		return;
	}
	else if (new_size > this->cur_size_)
	{
		if ( new_size > this->max_size_)
		{
			T * temp = new T[new_size];
			
			for (int i=0; i < this->cur_size_; i++)
			{
				temp[i] = this->data_[i];
			}
			
			std::swap(temp, this->data_);
			
			this->cur_size_ = new_size;
			this->max_size_ = new_size;
			
			delete [] temp;
		}
		else
		{
			this->cur_size_ = new_size;
		}
	}
	else
	{
		this->cur_size_ = new_size;
	}
}