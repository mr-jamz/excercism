// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    if (balance < 0){
        // any balance below zero
        return 3.213;
    } else if (balance < 1000){
        // any balance >= 0 and < 1000
        return .5;
    } else if (balance <5000){
        // any balance >= 1000 and < 5000
        return 1.621;
    } else{
        // any balance > 5000
        return 2.475;
    }
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    // balance * interest rate / percentage
    return balance * interest_rate(balance) / 100;
}

// annual_balance_update calculates the annual balance update, taking into account the interest rate.
double annual_balance_update(double balance) {
    // find the added interest via the previous function, add interest to total balance
    return yearly_interest(balance) + balance;
}

// years_until_desired_balance calculates the minimum number of years required to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    // base year number is 0
    int years {0};
    // check that balance is less than target
    while (balance < target_balance){
        // check balance each iteration
        double last_balance = balance;
        // update yearly balance]
        balance = annual_balance_update(balance);
        if (balance > last_balance){
            // add a year if target has not been reached
            years++;
        } else {
            // once target balance is reached return the number of years it took
            return years;
        }
    }
    // return the total years from function
    return years;
}
