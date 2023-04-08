//  peak element in moutain array

// int lo=0;
// int hi = array.size()-1;
// int mid;
// int ans=-1;
// while(lo<=hi){
//     mid=lo+(hi-lo)/2;
//     if(array[mid]>array[mid-1]){
//         // inc curve
//         ans=mid;
//         lo=mid+1;}
//         else{
//             hi=mid-1;
//         }
//     }
//     return ans;
// }


//###############################################################################################################

//checking peak element in mountain array but no of mountain curve is more than two
// int lo=0,hi=n-1;
// int mid;
// while(lo<=hi){
//  mid=lo+(hi-lo)/2;
//  if(mid==0) //  if mid is in index 0, so to check 
//  {
//     if(array[mid] > array[mid+1]){
//         return 0;
//     } else{
//         return 1;
//     }
//  }
//  else if(mid==n-1) // if mid is in last index
//  {
//     if(array[mid]>array[mid-1]){
//         return n-1;
//     }
//     else{
//         return n-2;
//     }
//  }
//  else{
//     if(array[mid]>array[mid+1]&array[mid]>array[mid-1]){
//         return mid;
//     }
//     else if(array[mid]>array[mid-1]){
//         lo=mid+1;
//     }
//     else {
//         hi=mid-1;
//     }
//  }
 
// }
// return -1;