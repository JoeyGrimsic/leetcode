/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function (nums) {
  const numSet = new Set();
  nums.forEach(function (element) {
    if (numSet.has(element)) {
      return true;
    } else {
      numSet.add(element);
    }
  });
};
