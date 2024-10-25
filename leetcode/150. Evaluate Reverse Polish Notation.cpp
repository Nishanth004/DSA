class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (const string& op : tokens) {
            if (op == "+" || op == "-" || op == "*" || op == "/") {
                int second = st.top(); 
                st.pop();
                int first = st.top(); 
                st.pop();

                switch (op[0]) {  
                    case '+': st.push(first + second); 
                                break;
                    case '-': st.push(first - second); 
                                break;
                    case '*': st.push(first * second); 
                                break;
                    case '/': st.push(first / second); 
                                break;
                }
            } else {
                st.push(stoi(op));  
            }
        }
        return st.top(); 
    }
};
