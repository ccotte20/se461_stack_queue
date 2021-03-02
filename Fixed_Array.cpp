// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
//
// Fixed_Array
//

template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (void) : data_(new T[N]), cur_size_(N), max_size_(N)
{

}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, N> & arr) : data_(new T[N]), cur_size_(N), max_size_(N)
{
	for(int i=0; i<this->cur_size_; i++)
	{
		this->data_[i]=arr[i];
	}
}

//
// Fixed_Array
//
template <typename T, size_t N>
template <size_t M>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, M> & arr) : data_(new T[M]), cur_size_(M), max_size_(M)
{
	N=M;
}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (T fill)
{
	if(N > 0)
	{
		this->data_ = new T[N];
		this->cur_size_ = N;
		this->max_size_ = N;
		this->fill(fill);
	}
}

//
// ~Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::~Fixed_Array (void)
{
	delete [] data_;
}

//
// operator =
//
template <typename T, size_t N>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, N> & rhs)
{
	if(this!= &rhs)
	{
		delete [] data_;
		this->data_ = new T[N];
		for(int i=0; i<this->cur_size_; i++)
		{
			this->data_[i]=rhs[i];
		}
	}
}

//
// operator =
//
template <typename T, size_t N>
template <size_t M>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, M> & rhs)
{
if(this!= &rhs)
	{
		delete [] data_;
		N=M;
		this->cur_size_ = N
		this->max_size_ = N
		this->data_ = new T[N];
		for(int i=0; i<this->cur_size_; i++)
		{
			this->data_[i]=rhs[i];
		}
	}
}
