class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        
        for i in s:
            if i == '[':
                stack.append('[')
            elif i == '(':
                stack.append('(')
            elif i == '{':
                stack.append('{')
            else:
                if len(stack) == 0:
                    return False
                parens = stack.pop()
                if parens == '[' and i != ']' or parens == '(' and i != ')' or parens == '{' and i != '}':
                    return False
        
        return len(stack) == 0