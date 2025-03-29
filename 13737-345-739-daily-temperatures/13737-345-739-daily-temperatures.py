class Solution(object):
    def dailyTemperatures(self, temperatures):
        n = len(temperatures)
        ans = [0] * n
        stack = []

        for i in range(n - 1, -1, -1):
            while stack and temperatures[stack[-1]] <= temperatures[i]:
                stack.pop()
            if stack:
                ans[i] = stack[-1] - i
            else:
                ans[i] = 0

            stack.append(i)

        return ans

