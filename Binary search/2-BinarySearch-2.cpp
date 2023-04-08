// Given an array of integers 'a' that is sorted in non-decreasing order. 
//Find the first and the last position of the given 'target' element in the sorted array.
// Follow O-based indexing. 

//If 'target' is not found in the array, return [-1, -1).

// Input:
// Array = [1, 2, 3, 3, 3, 5, 111, target = 3

// Output:

// [2,4]



// int<vector>ans{-1,-1};
// int lo=0,hi=Array.size()-1;
// int mid=lo+(hi-lo)/2;
// while(lo<=hi){
    if(Array[mid]>=target){
        ans.push_back(mid);
        hi=mid-1;
    }

}