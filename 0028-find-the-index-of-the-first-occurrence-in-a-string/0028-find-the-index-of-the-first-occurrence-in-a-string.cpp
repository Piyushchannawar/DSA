class Solution {
public:
    int strStr(string haystack, string needle) {
        int j=0;
        int i=0;
        int point = 0;
        int n1 = haystack.size();
        int n2 = needle.size();
        if(n2 > n1) return -1;

        while(i<n1 && j<n2){
            if(haystack[i]==needle[j]){
                if(i-point+1 == n2){
                    return point;
                }
                i++;
                j++;
            }
            else {
                point++;
                j=0;
                i=point;
            }
        }



        return -1;
    }
};