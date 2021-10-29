class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        List sdm = new ArrayList();

        for(int i=left;i<=right;i++)
        {
            if(isSelfDividing(i))
                sdm.add(i);
        }
            return sdm;
        }

    public boolean isSelfDividing(int num)
    {
        int n=num;
        while(n!=0)
        {
            int d=n%10;
            if(d==0 || num%d!=0)
                return false;
            n/=10;
        }
        return true;
    }
}
