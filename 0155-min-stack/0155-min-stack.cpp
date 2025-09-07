class MinStack {
public:
stack<long long>st;
long long mini = INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){ 
            st.push(val);
            mini = val;
        }
        else{
            if(val >= mini) {
                st.push(val);
            }
            else{
                long long newVal = 2LL * val - mini;
                st.push(newVal);
                mini = val;
            }

        }
    }
    
    void pop() {
        if(st.empty()) return;
        long long k = st.top();
        st.pop();
        if(k < mini){
            mini= 2 * mini - k;
        }
    }
    
    int top() {
        if(st.empty()) return -1;
        else{
            if(st.top() < mini) return (int)mini;
            else return (int)st.top();
        }
    }
    
    int getMin() {
        return (int)mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */