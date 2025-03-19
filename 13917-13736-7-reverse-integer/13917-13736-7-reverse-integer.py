class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        negativo = x < 0
        x = abs(x)
        x_str = str(x)

        reversed_str = x_str[::-1]

        ans = int(reversed_str)

        if negativo:
            ans=-ans

        if ans < -2**31 or ans > 2**31 - 1 :
            return 0

        return ans            