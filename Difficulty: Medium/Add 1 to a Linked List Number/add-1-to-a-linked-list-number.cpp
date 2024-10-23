//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* reverse(Node* head){
        if(head == nullptr || head->next == nullptr) return head;
        Node* temp = head;
        Node* prevPtr = nullptr;
        
        while(temp){
            Node* nextPtr = temp->next;
            temp->next = prevPtr;
            prevPtr = temp;
            temp = nextPtr;
        }
       return prevPtr;
        
    }
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
        Node* reversedHead = reverse(head);
        Node* temp = reversedHead;
        int carry = 1;
        while(temp){
           if(temp->data + carry < 10){ 
                temp->data = temp->data+carry;
                carry = 0;
                break;
           }
           else {
               temp->data = 0;
               carry = 1;
               temp = temp->next;
           }
        }
        if(carry == 1){
            Node* newHead = reverse(reversedHead);
            Node* newNode = new Node(1);
            newNode->next = newHead;
            return newNode;
        }
        head = reverse(reversedHead);
        return head;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends