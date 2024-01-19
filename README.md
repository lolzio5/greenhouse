# Autonomous Arduino-Controlled Greenhouse

_Completed in March 2020 (at age 14)_

This project had the aim to design and implement an autonomous greenhouse, which can automatically regulate the water moisture level and the temperature inside the greenhouse, without needing any human intervention, to increase crop yield inside the greenhouse.

## Background research and scope

The first, most important part of the project was determining what factors must be controlled as part of this control system. To improve plant yield, specific conditions must be controlled within an appropriate range. 

<br> 

The 4 main needs of plants are water, air, sunlight and ground nutrients. Ensuring that they have sufficient amounts of each was therefore a primary goal of this project. 

<br>

This sufficient amount is given as:

| Basic Need | Amount | 
|------------|--------|
|Water | Ground moisture must be between 40% and 45%|
|Sunlight | 6-8 hours a day |
| $CO~2~$ | Average is 391ppm, ideal is 1500ppm | 
| Nutrients | Ratio of 6-6-6 between main nutrients |
| Temperature | 25˚C |
| Ground pH | 6.5 |

---

However, not all of these can be controlled. Increasing or decreasing the $CO~2~$ concentration, using manure for example, would prove to be rather difficult on a prototype project. Sunlight is also difficult to control, as it would require a lamp, increasing energy costs of the greenhouse. 

---

Therefore, all components will be controlled in the following way:

| Basic Need | Method for control | 
|------------|--------|
|Water | Irrigation system with water pump based on ground moisture measurements|
|Sunlight | Not controlled |
| $CO~2~$ | Not controlled | 
| Nutrients | Use of nutrient rich soil with fertilizer |
| Temperature | Opening of the greenhouse based on temperature measurements |
| Ground pH | Use of soil with controlled pH value |

---

## Working Principles of the solution






