# Angle Between Clock Hands

## Aim
Write a C program to calculate the angle between the hour and minute hands of a clock.

## Logic
1. Take hours and minutes from the user.
2. Calculate the hour hand angle.
3. Calculate the minute hand angle.
4. Find the difference between both angles.
5. If the angle is greater than 180°, subtract it from 360°.
6. Display the final angle.

## Simple Equations

**Hour Hand Angle:**

`(Hours × 30) + (Minutes × 0.5)`

**Minute Hand Angle:**

`Minutes × 6`

**Angle:**

`|Hour Hand Angle - Minute Hand Angle|`

If the angle is greater than 180°:

`Final Angle = 360 - Angle`

## Complexity
- Time: O(1)
- Space: O(1)