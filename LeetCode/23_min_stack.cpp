#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>
using namespace std;

class MinStack {
private:
    vector<vector<int>> st;
public:
     MinStack() {
         int val = 0;
         MinStack* obj = new MinStack();
         obj->push(val);
         obj->pop();
         int param_3 = obj->top();
         int param_4 = obj->getMin();
    }
   
    void push(int val) {
        int min_val = getMin();
        if (st.empty() || min_val > val) {
            min_val = val;
        }
        st.push_back({val, min_val});        
    }
   
    void pop() {
        st.pop_back();
    }
   
    int top() {
        return st.empty() ? -1 : st.back()[0];
    }
   
    int getMin() {
        return st.empty() ? -1 : st.back()[1];
    }
};
