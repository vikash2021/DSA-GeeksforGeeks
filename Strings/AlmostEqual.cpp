int countChars(string s1, string s2){
    
    int count1[26] = {0}, count2[26] = {0}; 
   
    for (int i=0; s1[i]!='\0'; i++) 
        count1[s1[i]-'a']++; 
  
    for (int i=0; s2[i]!='\0'; i++) 
        count2[s2[i]-'a']++; 
 
    int result = 0; 
    for (int i=0; i<26; i++) 
        result += abs(count1[i] - count2[i]); 
    return result; 
    
}
