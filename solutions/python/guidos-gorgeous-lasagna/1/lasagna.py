"""Functions used in preparing Guido's gorgeous lasagna.

Learn about Guido, the creator of the Python language:
https://en.wikipedia.org/wiki/Guido_van_Rossum

This is a module docstring, used to describe the functionality
of a module and its functions and/or classes.
"""

EXPECTED_BAKE_TIME = 40
PREPARATION_TIME = 2

def bake_time_remaining(int):
    """Calculate the elapsed cooking time.

    :param baketime_remaining: int - the number of minutes elapsed
    :return: int - the number of minutes remaining
    
    This function takes one integer and subtracts it from the expected bake time
    """
    return EXPECTED_BAKE_TIME - int
def number_of_layers(int):
    """Calculate the number of layers

    :param number_of_layers: int - the number of layers in the lasagna.
    :return: int - the number of layers

    This function takes an integer and returns it
    """
    return int
def preparation_time_in_minutes(number_of_layers):
    """Calculate the prep time in minutes

    :param number_of_layers: int - the number of layers in the lasagna.
    :return: int - the total prep time

    This function takes two integers representing the time it took to prepare the lasagna
    """
    return number_of_layers * PREPARATION_TIME
    
def elapsed_time_in_minutes(number_of_layers, elapsed_bake_time):
    """Calculate the elapsed cooking time.

    :param number_of_layers: int - the number of layers in the lasagna.
    :param elapsed_bake_time: int - time the lasagna has been baking in the oven.
    :return: int - total time elapsed (in minutes) preparing and baking.

    This function takes two integers representing the number of lasagna 
    layers and the time already spent baking the lasagna. It calculates 
    the total elapsed minutes spent cooking (preparing + baking).
    """
    time = preparation_time_in_minutes(number_of_layers)
    result = time +  elapsed_bake_time
    return result
