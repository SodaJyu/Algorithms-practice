class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;

        for (int i = 0; i < moves.size(); i++) {
            char current = moves[i];
            if (current == 'R') {
                x += 1;
            } else if (current == 'L') {
                x -= 1;
            } else if (current == 'U') {
                y += 1;
            } else if (current == 'D') {
                y -= 1;
            }
        }
        return x == 0 && y == 0;
    }
};