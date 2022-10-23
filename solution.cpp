class Solution {
    public int edgeScore(int[] edges) {
        int n = edges.length;
        int[] score = new int[n];
        int maxScore = 0;
        int node = 0;
        for (int i = 0; i < n; i++) {
            score[edges[i]] += i;
            if (score[edges[i]] >= maxScore) {
                if (score[edges[i]] == maxScore) {
                    node = Math.min(node, edges[i]);
                } else {
                    node = edges[i];
                }
                maxScore = score[edges[i]];
            }
        }
        return node;
    }
}
