// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#include "Array.h"
#include "Fixed_Array.h"
#include "Dynamic_Array.h"
#include "Stack.h"
#include "Queue.h"



//
// main
//
int main (int argc, char * argv [])
{
	Stack<int> s;
	s.push(1);
	
	Stack<int> s2;
	s2.push(2);
	
	s=s2;
	
	std::cout<<s.top()<<std::endl;
	
	Queue<int> q;
	q.enqueue(1);
	
	Queue<int> q2;
	q2.enqueue(2);
	
	q=q2;
	
	std::cout<<q.dequeue()<<std::endl;
	
	Stack<int> s3;
	for(int i=1; i<12; i++)
	{
		s3.push(i);
	}		
	std::cout<<s3.top()<<std::endl;
	
	s3.clear();
	s3.push(7);
	std::cout<<s3.top()<<std::endl;
	
	Queue<int> q3;
	for(int i=1; i<12; i++)
	{
		q3.enqueue(i);
	}	
	std::cout<<q3.dequeue()<<std::endl;
	
	q3.clear();
	q3.enqueue(7);
	std::cout<<q3.dequeue()<<std::endl;
	
	Stack<int> s4;
	s4.push(1);
	s4.push(2);
	s4.pop();
	std::cout<<s4.top()<<std::endl;
	
	Stack<int> s5(s4);
	std::cout<<s5.top()<<std::endl;
	
	Queue<int> q4;
	q4.enqueue(1);
	
	Queue<int> q5(q4);
	std::cout<<q5.dequeue()<<std::endl;
	
	return 0;
}
