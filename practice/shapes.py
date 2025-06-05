from math import pi
from abc import ABC, abstractmethod


class Shape(ABC):
    @abstractmethod
    def area():
        pass


class Rectangle(Shape):
    def __init__(self, width, height):
        self._width = width
        self._height = height
    
    def get_length(self):
        return self._height

    def get_width(self):
        return self._width

    def area(self):
        return self._height * self._width


class Circle(Shape):
    def __init__(self, radius):
        self._radius = radius
    
    def get_radius(self):
        return self._radius

    def area(self):
        return pi * self._radius ** 2
