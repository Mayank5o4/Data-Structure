int areaHistogram(vector<int> height){ //TC: O(n)
    int n =height.size();
    vector<int> nsl(n);
    vector<int> nsr(n);
    stack<int> s;
    //next smaller left
    nsl[0] = -1;
    s.push(0);
    for(int i=0; i<height.size(); i++){
    int curr = height[i];
    while(!s.empty() && curr <= s.top()){
        s.pop();
    }
    if(s.empty()){
        nsl[i] = -1;
    }else{
        nsl[i] = s.top();
    }
    s.push(curr);
    }
    while(!s.empty()){
        s.pop();
    }

    //next smaller right
    
    s.push(n-1);
    nsr[n-1] = n;
    for(int i = n-2;i >= 0; i--)
    {
        int curr = height[i];
        while(!s.empty() && curr <= height[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsr[i] = n;
        }else{
            nsr[i] = s.top();
        }
        s.push(curr);
    }

    int maxarea = 0;
    for(int i=0; i<n; i+=){
        int ht = height[i];
        int width = nsr[i] - nsl[i] - 1;
        int area = max(area, maxarea);
    }
    cout<< "max area of histogram:" << maxarea <<endl    
}