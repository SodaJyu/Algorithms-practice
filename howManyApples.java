class Solution {
    public int maxNumberOfApples(int[] weight) {
        int maxLoad = 5000;
        int count = 0;
        Arrays.sort(weight);
        for (int i : weight) {
            if (i > maxLoad) continue;
            maxLoad -= i;
            count++;
        }
        return count;
    }
}
