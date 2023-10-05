def top_k_frequent(nums, k):
    """
        Finds the top k most frequent elements in a list of integers.

        @params: nums (list): A list of integers.
                k (int): The number of most frequent elements to return.

        @returns: list: A list of the top k most frequent elements in 'nums'.
    """
    count = {}
    for i in nums:
        count[i] = 1 + count.get(i, 0)

    sorted_items = sorted(count.items(), key=lambda x: x[1], reverse=True)

    k_frequent = [item[0] for item in sorted_items[:k]]

    return k_frequent


# call the function
result = top_k_frequent([1, 1, 1, 2, 2, 3], 2)
print(result)
