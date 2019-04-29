#include "priority_queue.h"
#include <iostream>
using namespace std;


//template<class T>
// void priority_queue<T>::push(const pair<T, int>& p)
//{
//	 size_t i = 0;
//	 for (size_t i = 0; i < arr.size(); i++)
//	 {
//		 if (arr[i].second == p.second)
//			 break;
//	 }
//	 arr.insert(begin(arr) + i, p);
//}
//
//template<class T> 
//void priority_queue<T>::push(pair<T, int>&& p)
//{
//	size_t i = 0;
//		for (size_t i = 0; i < arr.size(); i++)
//		{
//			if (arr[i].second == p.second)
//				break;
//		}
//	arr.insert(begin(arr) + i, p);
//}
//
//template<class T>
// void priority_queue<T>::push(const T & obj, int priority)
//{
//	 pair<T, int>p(obj, priority);
//	 push(move(p));
//}
//
//template<class T>
// void priority_queue<T>::pop()
//{
//	 arr.pop_back();
//}
//
//template<class T>
// int priority_queue<T>::size() const
//{
//	return arr.size;
//}
//
// template<class T>
// const pair<T, int>& priority_queue<T>::top() const
// {
//	 return arr[arr.size() - 1];
// }
//
// template<class T>
// void priority_queue<T>::print() const
// {
//	 for (size_t i = 0; i < arr.size; i++)
//	 {
//		 cout << this->arr[i].first << "  " << this->arr[i].second << endl;
//	 }
// }
//
