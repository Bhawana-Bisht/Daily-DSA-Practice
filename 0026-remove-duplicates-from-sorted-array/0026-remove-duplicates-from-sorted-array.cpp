class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
          int n = nums.size();
        if (n == 0) return 0;
         int  low =0;
          int high= low+1;
         
           
        
         
          while(high<n)
            if(nums[high]== nums[high-1]){
                 high++;
            }
             // unique element
             else{
                low++;
              nums[low]= nums[high];
            high++;
                } 
    return low + 1;
    }     

    };      
                 
                 
        

                 
