class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int size = arr.size(); 
        int current_value = arr[0]; // Starting with the value to the right of the first value 
        
        for(int i = 1; i <= size - 1; i++) { 
            for(int j = i; j <= size - 1; j++) { 
                if(current_value < arr[j]) { 
                    current_value = arr[j]; 
                } 
                arr[i] = current_value;    
            }
        } 

        arr[size-1] = -1;  
        return arr;  
    }
}; 


