



int  VowelCount(string a){
    int count = 0 ;
    for(int i = 0 ; i< a.size() ; i++){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' ){
                count++;
            }
    }
    return count;
}

class Solution {
public:
    bool halvesAreAlike(string s) {
        string a = s.substr(0,s.size()/2);
        string b = s.substr((s.size()/2) ,s.size()/2);
       
       1704_Determine_if_String_Halves_Are_Alike
        

        if( VowelCount(a) ==  VowelCount(b)){
            return true;
        }
        else{

        return false;
        }

        
    }
};