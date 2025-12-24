#include<iostream>
using namespace std;
int main()
{
	int x1 = 3;
	int x2 = 6;
	int y1 = 4;
	int y2 = 8;
	int squared_distance;
	squared_distance = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	cout<<"The squared distance between the points are:"<<squared_distance<<endl;
	return 0;
	
}
