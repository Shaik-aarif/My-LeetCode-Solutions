class Solution {
public:
    int maxVowels(string s, int k) {
        int l = 0 ;
        int r = 0 ;
        int cnt = 0 ;
        int ans = INT_MIN;
        for(int i = 0 ; i<k ; i++ ){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || 
                   s[i] == 'o' || s[i] == 'u'){
                       cnt++;
                       
                   }
                   r = i ;
        }
        
        r++;
        ans = max(ans , cnt);
        for(int i  = r ; i < s.size() ; i++){
             if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || 
                   s[i] == 'o' || s[i] == 'u'){
                       cnt++;
                   }
            if(s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || 
                   s[l] == 'o' || s[l] == 'u'){
                       cnt--;
                       l++;
                   }else{
                       l++;
                   }

            ans  = max(ans , cnt);
            
        }
        return ans;
    }
};