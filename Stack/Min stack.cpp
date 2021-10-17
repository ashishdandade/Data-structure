// Two methods can be employed first using the stack of the STL itself next using vectors implementing the stack where the pair stores the second value stores min value till now
// Method 1 is given below and Method 2 is given after that.

// Method 1.
// Example) values to be pushed [6 , 8 ,-1 , 2 ,-5 ,6]
// only push operation is illustrated below where in the second value in pair stores min value till now
// |6 , -5 |
// |-5, -5 |
// | 2, -1 |
// | -1 ,-1 |
// | 8 , 6 |
// |6,_6 |

// The moment the element gets removed(pop) still minimum value till remains the same.


class MinStack {
private:
    vector<pair<int,int>> s1;
	//First store the value second stores the min value till now
public:
    /*Initialise the Stack*/
    MinStack() {
       
    }
    
    void push(int val) {
       //Here vector is empty s so bottom of stack becomes [6,6]
      if(s1.size() == 0){
          s1.push_back(make_pair(val, val));
      }
      else {
          int value = val;
          int min_value = min(val,s1[s1.size()- 1].second);
          
          s1.push_back(make_pair(value,min_value));
      }
        
    }
    
    void pop() {
       s1.pop_back();
    }
    
    int top() {
        return s1[s1.size()- 1].first;
    }
    
    int getMin() {
        return s1[s1.size()- 1].second;
        
    }
};
// Using two Stacks
// Here instead of second pair we use one more Stack of at anytime remain same size as main stack

class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s1;
    stack<int> s2;
    MinStack() {
        
    }
    
    void push(int val) {
        s1.push(val);
        if(s2.empty())
            s2.push(val);
        else 
            s2.push(min(val,s2.top()));
    }
    
    void pop() {
        s1.pop();
        s2.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};
