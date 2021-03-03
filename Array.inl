// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
//
// size
//
template <typename T>
inline
size_t Array <T>::size (void) const
{
	return cur_size_;
}

// Dr. Ryan: We don't want a Max Size on our Base Array class.

//
// max_size
//
template <typename T>
inline
size_t Array <T>::max_size (void) const
{
	return max_size_;
}
