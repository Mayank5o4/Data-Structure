#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//span = max no.of consecutive days (including current) for which price <= today's price
//span = i - prevHigh

void stockSpanProblem(vector<int> stock, vector<int> span){
    stack<int> s;
    s.push(0);
    span[0] = 1;
 
    for(int i=1; i<stock.size(); i++){
        int currprice = stock[i];
        while(!s.empty() && currprice >= stock[s.top()]){
            s.pop();
        }

        if(s.empty()){
            span[i] = i + 1;
        }else{
            int prevHigh = s.top();
            span[i] = i - prevHigh;
        }
    }
    for(int i=0; i<span.size(); i++){
        cout<< span[i]<< " ";
    }
    cout<<endl;
}
