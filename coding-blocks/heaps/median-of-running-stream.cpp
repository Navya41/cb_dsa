#define pqmin priority_queue <int,vector<int>,greater<int>> 
#define pqmax priority_queue <int>
class MedianFinder {
public:
    pqmax leftMaxHeap;
    pqmin rightMinHeap;
    double median;
    MedianFinder() {
    }
    void addNum(int num) {
        if (leftMaxHeap.empty()){
            median = num;
            leftMaxHeap.push(num);
        } else {
            if (num <= median){
               if (leftMaxHeap.size() == rightMinHeap.size()){
                    leftMaxHeap.push(num);
                    median = leftMaxHeap.top();
               } 
               else if (leftMaxHeap.size() > rightMinHeap.size()){
                    rightMinHeap.push(leftMaxHeap.top());
                    leftMaxHeap.pop();
                    leftMaxHeap.push(num);
                    median = (leftMaxHeap.top() + rightMinHeap.top())/2.0;
               } else {
                    leftMaxHeap.push(num);
                    median = (leftMaxHeap.top() + rightMinHeap.top())/2.0;
               }
            } else {
                if (leftMaxHeap.size() == rightMinHeap.size()){
                    rightMinHeap.push(num);
                    median = rightMinHeap.top();
                }
                else if (leftMaxHeap.size() < rightMinHeap.size()){
                    leftMaxHeap.push(rightMinHeap.top());
                    rightMinHeap.pop();
                    rightMinHeap.push(num);
                    median = (leftMaxHeap.top() + rightMinHeap.top())/2.0;
                } else{
                    rightMinHeap.push(num);
                    median = (leftMaxHeap.top() + rightMinHeap.top())/2.0;
                }
            }
        }
    }
    
    double findMedian() {
        return median;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */