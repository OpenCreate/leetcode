/*
两数之和 II - 输入有序数组
给定一个已按照 升序排列  的整数数组 numbers
，请你从数组中找出两个数满足相加之和等于目标数 target 。

函数应该以长度为 2 的整数数组的形式返回这两个数的下标值。numbers 的下标 从 1
开始计数 ，所以答案数组应当满足 1 <= answer[0] < answer[1] <= numbers.length 。

你可以假设每个输入只对应唯一的答案，而且你不可以重复使用相同的元素。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/all-about-array/x9i1x6/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/

class Solution {
 public:
  vector<int> twoSum(vector<int>& numbers, int target) {
    //对撞指针
    int i = 0;
    int j = numbers.size() - 1;
    while (i <= j) {
      if (numbers[i] + numbers[j] > target)
        j--;
      else if (numbers[i] + numbers[j] < target)
        i++;
      else {
        return vector<int>{i + 1, j + 1};
      }
    }
    return vector<int>{};
  }
};