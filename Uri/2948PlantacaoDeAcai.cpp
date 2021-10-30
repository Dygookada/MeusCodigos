#include <bits/stdc++.h>
using namespace std;

typedef pair<double,double> dd;

set<dd> hull;
  
// Returns the side of point p with respect to line
// joining points p1 and p2.
int findSide(dd p1, dd p2, dd p)
{
    double val = (p.second - p1.second) * (p2.first - p1.first) -
              (p2.second - p1.second) * (p.first - p1.first);
  
    if (val > 0)
        return 1;
    if (val < 0)
        return -1;
    return 0;
}
  
// returns a value proportional to the distance
// between the point p and the line joining the
// points p1 and p2
double lineDist(dd p1, dd p2, dd p)
{
    return abs ((p.second - p1.second) * (p2.first - p1.first) -
               (p2.second - p1.second) * (p.first - p1.first));
}
  
// End points of line L are p1 and p2.  side can have value
// 1 or -1 specifying each of the parts made by the line L
void quickHull(dd a[], int n, dd p1, dd p2, int side)
{
    int ind = -1;
    double max_dist = 0;
  
    // finding the point with maximum distance
    // from L and also on the specified side of L.
    for (int i=0; i<n; i++)
    {
        double temp = lineDist(p1, p2, a[i]);
        if (findSide(p1, p2, a[i]) == side && temp > max_dist)
        {
            ind = i;
            max_dist = temp;
        }
    }
  
    // If no point is found, add the end points
    // of L to the convex hull.
    if (ind == -1)
    {
        hull.insert(p1);
        hull.insert(p2);
        return;
    }
  
    // Recur for the two parts divided by a[ind]
    quickHull(a, n, a[ind], p1, -findSide(a[ind], p1, p2));
    quickHull(a, n, a[ind], p2, -findSide(a[ind], p2, p1));
}
  
void printHull(dd a[], int n)
{

    if (n < 3)
    {
        cout << "Convex hull not possible\n";
        return;
    }
 
    int min_x = 0, max_x = 0;
    for (int i=1; i<n; i++)
    {
        if (a[i].first < a[min_x].first)
            min_x = i;
        if (a[i].first > a[max_x].first)
            max_x = i;
    }
    quickHull(a, n, a[min_x], a[max_x], 1);
    quickHull(a, n, a[min_x], a[max_x], -1);
	double distmax=0;
    while (!hull.empty())
    {
        cout << "(" <<( *hull.begin()).first << ", "
             << (*hull.begin()).second << ") ";
        hull.erase(hull.begin());
    }
}

int main()
{
	int n;
	double x,y,distmax=0;
	
	cin>>n;
	dd p[n];
	dd p1,p2;
	cin>>x>>y;
	p1=p[0]=dd(x,y);
	cin>>x>>y;
	p1=p[1]=dd(x,y);
	for( int i=2; i<n; i++)
	{
		cin>>x>>y;
		p[i]=dd(x,y);
	}
}
