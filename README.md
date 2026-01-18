solutions of codeforce problems

---

A. Constructive Problem

My code first counts the frequency of all elements and finds x, the MEX of the array, which is the smallest non-negative integer missing from it. The task is to check whether it is possible to remove exactly one contiguous subarray so that the MEX of the remaining elements becomes x+1. If x == n, then all numbers from 0 to n−1 already exist and removing any subarray will necessarily remove some required value, so the answer is NO. If x+1 is already missing, the MEX is already x+1, so removing any safe subarray keeps it valid and the answer is YES. If x+1 appears exactly once (or if x == 0), we can delete a subarray containing that single occurrence, making x+1 disappear while all numbers 0..x remain, so the answer is again YES. The remaining difficult case is when x+1 appears multiple times: here the code simulates removing a contiguous segment starting from the first occurrence of x+1 and extending rightward until all x+1 values are removed, while decreasing frequencies and ensuring that no number smaller than x loses its last occurrence. If this process succeeds, such a subarray exists and the answer is YES; otherwise, removing all x+1s would also eliminate some required number and the answer is NO.

 ---
