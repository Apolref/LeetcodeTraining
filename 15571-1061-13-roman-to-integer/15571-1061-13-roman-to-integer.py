class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        ans = 0
        aux2 = 0
        while s:
            if s:
                aux = s[0]
            s = s[1:]
            if aux=='M':
                if aux2=='C':
                    ans = ans+800
                else:
                    ans = ans+1000

            if aux=='D':
                if aux2=='C':
                    ans = ans+300
                else:
                    ans = ans+500

            if aux=='C': 
                if aux2=='X':
                    ans = ans+80
                else:
                    ans = ans+100

            if aux=='L':
                if aux2=='X':
                    ans = ans+30
                else:
                    ans = ans+50

            if aux=='X':
                if aux2=='I':
                    ans = ans+8
                else:
                    ans = ans+10

            if aux=='V':
                if aux2=='I':
                    ans = ans+3
                else:
                    ans = ans+5
            if aux=='I':
                ans = ans+1
            aux2 = aux
        return ans