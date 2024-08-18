// Working Solution 
// Question 1299. Replace Elements with Greatest Element on Right Side. 

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int size = arr.size(); 
        
        for(int i = 1; i <= size - 1; i++) { 
            int current_value = arr[i]; // Starting with the value to the right of the first value 
            for(int j = i; j <= size - 1; j++) { 
                if(current_value < arr[j]) { 
                    current_value = arr[j]; 
                } 
            } 
            arr[i - 1] = current_value;    
        } 
        arr[size-1] = -1;  
        return arr;  
    }
}
