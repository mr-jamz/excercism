**Instructions**

- In this exercise, you'll be writing code to help a freelancer communicate with a project manager. Your task is to provide a few utilities to quickly calculate daily and monthly rates, optionally with a given discount.
- We first establish a few rules between the freelancer and the project manager:
- The daily rate is 8 times the hourly rate.
- A month has 22 billable days.
- Sometimes, the freelancer is offering to apply a discount on their daily rate (for example for their most loyal customers or not-for-profit customers).
- Discounts are modeled as fractional numbers representing percentages, for example, 25.0 (25%).

**1. Calculate the daily rate given an hourly rate**

- Implement a function called daily_rate to calculate the daily rate given an hourly rate as a parameter. The contract defines that a day has 8 billable hours.

**ex:**<br>
daily_rate(60)<br>
// => 480.0<br>

- The returned daily rate should be of type double.

**2. Calculate a discounted price**

- Implement a function apply_discount to calculate the price after a discount. It should accept two parameters: the original price and the discount rate in percent.

**ex:**<br>
apply_discount(150, 10)<br>
// => 135.0<br>

- The returned value should always be of type double, not rounded in any way.

**3. Calculate the monthly rate, given an hourly rate and a discount**
   
- Implement a monthly_rate function to calculate the discounted monthly rate. It should have two parameters, an hourly rate and the discount in percent.

**ex:**<br>
monthly_rate(77, 10.5)<br>
// => 12130<br>

- The returned monthly rate should be rounded up (take the ceiling) to the nearest integer.

**4. Calculate the number of complete workdays given a budget, hourly rate, and discount**
   
- Implement a function days_in_budget that takes a budget, an hourly rate, and a discount, and calculates how many complete days of work that covers.

**ex:**<br>
days_in_budget(20'000, 80, 11.0)<br>
// => 35<br>

^------------------------------^

The returned number of days should be rounded down (take the floor) to the next integer.
