#include <iostream> // include input and output stream
class ListNode { // Creating a class called ListNode  

    public: // Public Data Encapsulation of Data Memebers 
        int val_; // Declaration  
        ListNode* next = nullptr; // Initialization

    ListNode(int val) { // Constructor Method 
        val_ = val; // Assingment statement between data memebers and parameter value  
    }


}; 


int main(int argc, char* argv[]) { 


    ListNode node1(200); 
    ListNode node2(650); 
    ListNode node3(370); 

    ListNode* head = &node1; 

    node1.next = &node2; // Since node1 is create as objects we would use dot notation to 
    node2.next = &node3; // access the next data memeber of the object.   

    ListNode* curr = &node1; 
    while(curr != nullptr) { 
        std::cout << "Value: " << curr->val_ << std::endl;  
        curr = curr->next; 
    } 

}
