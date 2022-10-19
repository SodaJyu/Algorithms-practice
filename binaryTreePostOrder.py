class Solution:
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        result = []
        if not root: return result
        def recurse(root):
            if root.left:
                recurse(root.left)
            if root.right:
                recurse(root.right)
            result.append(root.val)
        
        recurse(root)
        return result