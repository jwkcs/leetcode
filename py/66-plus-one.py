class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        if digits[-1] < 9:
            digits[-1] += 1
        else:
            for i, v in reversed(list(enumerate(digits))):
                if v < 9:
                    digits[i] += 1
                    break
                else:
                    digits[i] = 0
                    
            if digits[0] == 0:
                digits.insert(0, 1)

        return digits