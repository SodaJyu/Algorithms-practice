class Solution:
    def mergeTrees(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> Optional[TreeNode]:
        if not root1 and root2: return root2
        if not root2 and root1: return root1
        
        def dfs (root1: Optional[TreeNode], root2: Optional[TreeNode]):
            if not root1 and not root2: return
            
            root1.val += root2.val
            
            if root1.left and root2.left:
                dfs(root1.left, root2.left)
            if root1.right and root2.right:
                dfs(root1.right, root2.right)
            if not root1.left and root2.left:
                root1.left = root2.left
            if not root1.right and root2.right:
                root1.right = root2.right
                
        dfs(root1, root2)
        return root1