class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        inter = []
        nums1 = list(set(nums1))
        nums2 = list(set(nums2))
        for i in nums1:
            if  i in nums2:
                inter.append(i)
        return inter
