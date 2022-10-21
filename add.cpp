def two_sum(nums, target)
    lookup = {}
    nums.each_with_index do |x, i|
        if lookup.has_key?(target - x)
            return [lookup[target - x], i] 
        end
        lookup[x] = i
    end
    return []
end
