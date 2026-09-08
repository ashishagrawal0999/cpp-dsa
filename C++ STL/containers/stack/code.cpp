#include<iostream>
#include<stack>

using namespace std;
int main(){

    // Adapter class that provides a last in first out (lifo) data structure

    // Insertion and deletion both takes place in and from the top of the stack

    // |____|  <- top of the stack
    // |____|
    // |____|

    // header file -> #include<stack>

    // Implemented using other containers (e.g., vector , deque , list) as the underlying storage

    // creation :

    stack<int> st;

    st.push(10);    // 10
    st.push(20);    // 10 20
    st.push(30);    // 10 20 30

    cout<<st.size()<<" ";

    st.pop();
    cout<<st.size()<<" ";

    cout<<st.top()<<" "; // returns the value which is present at the top of stack



    if(st.empty() == true){
        cout<<"Stack is empty";
    } else {
        cout<<"Stack is not empty";
    }


    stack<int> st2;
    st2.push(40);
    st2.push(50);
    st2.push(60);

    st.swap(st2);

    // Iterate nhi krskte because stack me iterator jaisa kuchh hai nhi
    // st.top print krke , element pop krna hoga , aur har element print krenge jab tk stack empty nhi hojaata

    while(st.empty() == false){  // !st.empty()
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    return 0;
}


