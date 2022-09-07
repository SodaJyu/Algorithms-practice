// Logic:
// we are given a grid of ints. 1's represent land and 0's represent the sea
// We need to calculate how many islands are present within the grid

// First we create two nested for loops - this is to allow us to access every single index in the grid along with a counter set to 0
// Then we want to check whether the number at a given index is 1 - or land - if so then we will call a recursive function and increment the count by 1
//   the recursive function will need to make sure that the values supplied are within the bounds of the grid and that the indices passed in do not point to a 0
//   if the indices are in bounds and the number doesnt equal zero, we will then change the number at that index to a 0 or anything other than a 1
//   but now we need to check whether the land was connected to other land in the 4 cardinal directions: N E S W
//   we do this by calling the recursive function 4 times, but changing the indices by + and - 1 in both the x and y directions.
// Now we can return the count
