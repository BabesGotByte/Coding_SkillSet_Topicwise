#define st students
#define sa sandwiches
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        int i=0,j=0,flag=0,c=0;
        
        while(i<students.size() && j<sandwiches.size()){
            
            if(st[i]==sa[j]){
                i++;
                j++;
                
                c=0;
            }
            
            else{
                c++;
                
                st.push_back(st[i]);
                i++;
                
            }
            
            if(c==st.size()-i)
                break;
            
            
            
        }
        
        return c;
        
        
    }
};
