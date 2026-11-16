
# Chocolate Wrapper Exchange

## Aim
To calculate the total number of chocolates that can be eaten with a given amount of money using a wrapper exchange offer.

## Introduction
In this problem, we are given:
- `n` = Total money available.
- `m` = Price of one chocolate.
- `k` = Number of wrappers required to get one free chocolate.

We first purchase chocolates using the available money. Then, we exchange the collected wrappers for free chocolates until we have fewer than `k` wrappers.

## Algorithm
1. Start.
2. Read the total money (`n`), chocolate price (`m`), and wrapper exchange value (`k`).
3. Check whether the inputs are valid.
4. Calculate the initial chocolates purchased using `n / m`.
5. Set the initial wrapper count equal to the chocolates purchased.
6. Repeat while the wrapper count is greater than or equal to `k`:
   - Calculate free chocolates using `wrappers / k`.
   - Add free chocolates to the total count.
   - Calculate remaining wrappers using `(wrappers % k) + freeChocolates`.
7. Display the total chocolates.
8. Stop.

## Example

**Input:**
- Total Money = `15`
- Chocolate Price = `2`
- Wrapper Exchange Value = `3`

**Working:**

Initial Purchase:
- Chocolates purchased = 15 / 2 = 7
- Wrappers = 7
- Total Chocolates = 7

Wrapper Exchange:

| Step | Wrappers Available | Free Chocolates | Total Chocolates |
|---|---:|---:|---:|
| Initial | 7 | 0 | 7 |
| 1 | 7 | 2 | 9 |
| 2 | 3 | 1 | 10 |
| Final | 1 | 0 | 10 |

**Output:** `Total Chocolates: 10`

## Time Complexity
- O(log n), approximately for a fixed wrapper exchange value greater than 1.

## Space Complexity
- O(1)

## Conclusion
The Chocolate Wrapper Exchange problem calculates the maximum number of chocolates that can be eaten by purchasing chocolates and repeatedly exchanging wrappers for free chocolates.
