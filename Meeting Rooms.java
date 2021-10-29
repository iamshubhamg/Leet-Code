class Solution {
    public static boolean canAttendMeetings(Interval[] intervals) {
        Arrays.sort(intervals, new Comparator<Interval>() {
            @Override
            public int compare(Interval o1, Interval o2) {
                return o1.start - o2.start;
            }
        });

        int i=0;
        while (i < intervals.length - 1) {
            if (intervals[i].end > intervals[i+1].start) {
                return false;
            }

            i++;
        }

        return true;
    }
}
