#!/usr/bin/env python3
"""
Created by: Ihor Chernyshev
Created on: Feb 2025
This module circumference the area of a circle
"""

import math

diameter = 42


def main() -> None:
    """
    The main() function calculates the circumference of a circle,
    """
    print("If a circle has a radius of", (diameter), "mm:")
    print(f"Area is {(math.pi * diameter):.5f} mm².")
    print("Done.")


if __name__ == "__main__":
    main()
