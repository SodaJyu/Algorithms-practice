impl Solution {
    pub fn judge_circle(moves: String) -> bool {
        let mut co_ordinates = (0, 0);

        for ele in moves.chars() {
            match ele {
                'U' => co_ordinates.1 += 1,
                'D' => co_ordinates.1 -= 1,
                'L' => co_ordinates.0 -= 1,
                'R' => co_ordinates.0 += 1,
                _ => ()
            }
        }
        co_ordinates == (0, 0)
    }
}