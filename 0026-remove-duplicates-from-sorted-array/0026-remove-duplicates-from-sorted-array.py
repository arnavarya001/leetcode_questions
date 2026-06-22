class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
            st = set({})
            # st = sorted(set(nums))
            for i in nums:
                st.add(i)
                j=0
            for i in sorted(st):
                nums[j] = i
                j += 1

            return len(st)
