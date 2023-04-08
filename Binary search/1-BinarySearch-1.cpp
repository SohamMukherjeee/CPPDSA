 // problem of searching--->> if we need to search a target element from an array  
 // we call it problem of seaching


//  Binary Search Algorithm  //


// target = 35

//          0   1    2    3    4    5    6    7 
//  array=  1   9   13   15   18   22   35   40
//          ^             ^                   ^
//          |             |                   |
//         strt          mid                 end   
//   

//  Coding Impletation
// int binarySearch(vector<int>&input,int target){
//     int lo=0;
//     int hi=input.size()-1;
//     while(lo<=hi){
//         int mid=(lo+hi)/2; (kaam chal jayega)
//         int mid=lo+(hi-lo)/2;
//         if(input[mid]==target)return mid;
//         else if(input[mid]<target){
//             discard the left of mid 
//             lo=mid+1;
//         }
//         else{
//             hi=mid-1;
//             discard the right 0f mid
//         }
//     }
//     return -1;
// } 