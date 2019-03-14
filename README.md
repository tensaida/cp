# cp
Repo for competitive programming

## Notes

1. char array's size must be n+1 to accomodate for the terminator char
2. (in stack) vec<vec<>> v; push_back will give segfault. 
	correct: vec<vec<>> v; for(...)v.pb(v1);
	or better: declare in heap
3. Generating a power set = working on the set's binary representation (all permutations of it)!