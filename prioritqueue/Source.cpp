#include<iostream>
#include <string>
#include"priority_queue.h"
using namespace std;

void main()
{
	priority_queue<string> pq;
	pq.push("S1", 0);
	pq.push("S2", 0);
	pq.push("P1", 1);
	pq.push("B1", 2);
	pq.push("Pr", 100);

	pq.print();



	system("pause");
}