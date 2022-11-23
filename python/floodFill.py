class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        if not image: return image
        newColor = image[sr][sc]
        
        if color != newColor:
            self.recurse(image, sr, sc, color, newColor)
        
        return image
    
    def recurse(self, image: List[List[int]], sr: int, sc: int, color: int, newColor: int):
        if sr < 0 or sr > len(image) - 1 or sc < 0 or sc > len(image[0]) - 1: return
        
        if image[sr][sc] == newColor:
            image[sr][sc] = color
        
            self.recurse(image, sr + 1, sc, color, newColor)
            self.recurse(image, sr - 1, sc, color, newColor)
            self.recurse(image, sr, sc + 1, color, newColor)
            self.recurse(image, sr, sc - 1, color, newColor)