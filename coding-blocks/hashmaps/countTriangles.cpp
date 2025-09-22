#include <bits/stdc++.h>
#include <vector>
#include <map>
using namespace std;

class Point {
  public:
    int x;
    int y;
    
    Point(int x, int y){
        this->x = x;
        this->y= y;
    }
};

int triangle (vector<Point>& points){
    map<int,int> xFreqMap;
    map<int,int> yFreqMap;
    for (Point p : points){
        xFreqMap[p.x]++;
        yFreqMap[p.y]++;
    }
    int cnt = 0;
    for (Point pivot : points){
        int a = xFreqMap[pivot.x];
        int b = yFreqMap[pivot.y];
        cnt += (a-1)*(b-1);
    }
    return cnt;
}

int main() {
	vector<Point> points = {
	    Point(1,2),
	    Point(2,1),
	    Point(2,2),
	    Point(2,3),
	    Point(4,2)
	};
	//O(n^2)
	int cnt = 0;
	for (Point pivot : points){
	    int a = 0; //tracks no. of points with same x-coord as the pivot 
	    int b = 0; //tracks no. of points with same y-coord as the pivot
	    for (Point p : points){
	        if (p.x == pivot.x) a++;
	        if (p.y == pivot.y) b++;
	    }
	    cnt += (a-1) * (b-1);
	}
	cout << cnt << endl;
	cout << triangle(points) << endl;
    return 0;
}
