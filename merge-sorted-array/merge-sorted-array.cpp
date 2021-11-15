class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // if(m==0){nums1 = nums2;}
        // else{
        //     int check = 0, c1 = 0, c2 = 0;
        // while((n -1 - c2)>=0)
        //     if(c1 == n){
        //         nums1[m+n-1-c1-c2] = nums2[n-1-c2];
        //         c2++;
        //     }
        //     else if(nums1[m-1-c1]>nums2[n-1-c2]){
        //         nums1[m+n-1-c1-c2] = nums1[m-1-c1];
        //         nums1[m-1-c1] = 0;
        //             c1++;
        //     }else{
        //         nums1[m+n-1-c1-c2] = nums2[n-1-c2];
        //         c2++;
        //     }
        // }
        
        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[i-m];
            }
            sort(nums1.begin(), nums1.end());
    
    }
};