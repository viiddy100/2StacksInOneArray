#include <iostream>
#include <stack>

using namespace std;

stack<int> sortStack(stack <int>s1){
stack <int>tempStack;

 while(!s1.empty() ){
   int temp =s1.top();
   s1.pop();

   while(!tempStack.empty() && tempStack.top() > temp){
     s1.push(tempStack.top());
     tempStack.pop();

   }
   tempStack.push(temp);

}
return tempStack;
}
int main(){
stack <int> s1;

s1.push(4);
s1.push(2);
s1.push(3);
s1.push(5);
s1.push(1);

stack <int> sortedStack=sortStack(s1);
cout<<"Sorted stack is "<<endl;
while(!sortedStack.empty()){
    cout<<sortedStack.top();
    sortedStack.pop();

}
return 0;
}
