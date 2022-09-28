// Min Stack


class MinStack {
    int minVal = INT_MAX;
    stack <int> s; 

public:
    void push( int val){
        if ( minVal >= val){
            s.push(minVal); 
            minVal = val;
        }

        s.push()
    }


    void pop(){
        if( s.top() == minVal)
        {
            s.pop();
            minVal =s.top();
        }
    }

        s.pop();
    int top(){
        return s.top();
    }
    int getMin(){
        return minVal;
    }

};