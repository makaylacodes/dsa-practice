/*
	Given int array, return true if any value appears at least twice
	Ex. nums = [1,2,3,1] -> true,  nums = [1,2,3,4] -> false

	If seen num previously, then there is a duplicate. Otherwise insert into a hash set to track visited.

	Time: O(n)
	Space:O(n)
*/