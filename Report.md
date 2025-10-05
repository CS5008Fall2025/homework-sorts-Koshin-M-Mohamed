# Sort Analysis Data

## Results Table
Make sure to go out to at least 100,000 (more are welcome), and you have 10 different values (more welcome). You are welcome to go farther, but given 100,000 can take about 20 seconds using a selection sort on a fast desktop computer, and 200,000 took 77 seconds, you start having to wait much longer the more 0s you add. However, to build a clearer line, you will want more data points, and you will find merge and quick are able to handle higher numbers easier (but at a cost you will explore below). 

You are free to write a script to run the program and build your table (then copy that table built into the markdown). If you do that, please include the script into the repo.  Note: merge and quick sorts are going to be explored in the team activity for Module 06. You can start on it now, but welcome to wait.

 

### Table [^note]
| N       | Bubble     | Selection  | Insertion  | Merge      | Quick      |
| :------ | :--------: | :--------: | :--------: | :--------: | :--------: |
| 50      | 0.000005   | 0.000003   | 0.000001   | 0          | 0.000002   |
| 100     | 0.000015   | 0.000007   | 0.000005   | 0          | 0.000004   |
| 500     | 0.000275   | 0.00012    | 0.000061   | 0.00004    | 0.000025   |
| 1000    | 0.000878   | 0.000354   | 0.000312   | 0.000001   | 0.000048   |
| 5,000   | 0.022559   | 0.008824   | 0.005545   | 0.000427   | 0.000271   |
| 10,000  | 0.089501   | 0.030854   | 0.020023   | 0.000006   | 0.000516   |
| 20,000  | 0.554713   | 0.144151   | 0.092604   | 0.001911   | 0.001238   |
| 50,000  | 4.153304   | 0.869817   | 0.576423   | 0.005013   | 0.003717   |
| 100,000 | 17.686523  | 3.545854   | 2.291145   | 0.011022   | 0.007519   |







## BigO Analysis  / Questions

### 1. Build a line chart
Build a line chart using your favorite program. Your X axis will be N increasing, and your Y access will be the numbers for each type of sort. This will create something similar to the graph in the instructions, though it won't be as smooth. Due to speed differences, you may need to break up the $O(\log n)$ and $O(n^2)$ into different charts.

Include the image in your markdown. As a reminder, you save the image in your repo, and use [image markdown].

![Sort Times Line Chart](src/lineChart.png)


### 2. Analysis
Looking at the graph and the table, what can you say about the various sorts? Which are the fastest? Which are the slowest? Which are the most consistent? Which are the least consistent? Use this space to reflect in your own words your observations.

From the table and chart, Bubble is the slowest, Selection is a bit faster, and Insertion is faster than both but still slower than Merge and Quick. Merge and Quick are the fastest and handle large arrays easily. Bubble, Selection, and Insertion get way slower as N increases, while Merge and Quick grow more predictably and consistently.

### 3. Big O
Build another table that presents the best, worst, and average case for Bubble, Selection, Insertion, Merge, and Quick. You are free to use resources for this, but please reference them if you do. 

| Algorithm      | Best Case (Ω) | Average Case (Θ) | Worst Case (O) |
| -------------- | ------------- | ---------------- | -------------- |
| Bubble Sort    | Ω(n)          | Θ(n²)            | O(n²)          |
| Selection Sort | Ω(n²)         | Θ(n²)            | O(n²)          |
| Insertion Sort | Ω(n)          | Θ(n²)            | O(n²)          |
| Merge Sort     | Ω(n log n)    | Θ(n log n)       | O(n log n)     |
| Quick Sort     | Ω(n log n)    | Θ(n log n)       | O(n²)          |


Refrence:  https://www.geeksforgeeks.org/dsa/analysis-of-different-sorting-techniques/


#### 3.2 Worst Case
Provide example of arrays that generate _worst_ case for Bubble, Selection, Insertion, Merge Sorts

| Algorithm      | Worst Case Example Array                             |
| -------------- | ---------------------------------------------------- |
| Bubble Sort    | `[10, 9, 8, 7, 6, 5, 4, 3, 2, 1]`                    |
| Selection Sort | `[4, 2, 9, 1, 5]`                                    |
| Insertion Sort | `[10, 9, 8, 7, 6, 5]`                                |
| Merge Sort     | `[5, 3, 8, 1, 6]`                                    |
| Quick Sort     | `[10, 9, 8, 7, 6]`                                   |



#### 3.3 Best Case
Provide example of arrays that generate _best_ case for Bubble, Selection, Insertion, Merge Sorts 

| Algorithm      | Best Case Example Array                         |
| -------------- | ----------------------------------------------- |
| Bubble Sort    | `[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]`               |
| Selection Sort | `[1, 2, 3, 4, 5]`                               |
| Insertion Sort | `[1, 2, 3, 4, 5, 6]`                            |
| Merge Sort     | `[5, 3, 8, 1, 6]`                               |


#### 3.4 Memory Considerations
Order the various sorts based on which take up the most memory when sorting to the least memory. You may have to research this, and include the mathematical notation. 

Merge Sort	O(n) – needs extra array for merging
Quick Sort	O(log n) – recursion stack
Bubble Sort	O(1) – sorts in-place
Selection Sort	O(1) – sorts in-place
Insertion Sort	O(1) – sorts in-place

### 4. Growth of Functions
Give the following values, place them correctly into *six* categories. Use the bullets, and feel free to cut and paste the full LatexMath we used to generate them.  

#### Categories
* $10000$ , $100$

* $3n$ ,  $100n$  

* $n^2$ , $5n^2+5n$  

*  $n\log_2n$ 

* $2^{(n-1)}$, $2^n$ 

* $n!$

### 5. Growth of Function Language

Pair the following terms with the correct function in the table. 
* Constant, Logarithmic, Linear, Quadratic, Cubic, Exponential, Factorial

| Big $O$     |  Name  |
| ------      | ------ |
| $O(n^3)$    | Cubic |
| $O(1)$      | Constant |
| $O(n)$      | Linear |
| $O(\log_2n)$ |Logarithmic |
| $O(n^2)$    |  Quadratic |
| $O(n!)$     | Factorial  |
| $O(2^n)$    |  Exponential |



### 6. Stable vs Unstable
Look up stability as it refers to sorting. In your own words, describe one sort that is stable and one sort that isn't stable  

A stable sort keeps numbers that are the same in the same order as the original list. Bubble sort is stable because equal numbers don’t get moved out of order. Selection sort is unstable because it can swap equal numbers and change their original order.


### 6.2 When stability is needed?
Explain in your own words a case in which you will want a stable algorithm over an unstable. Include an example. 

You want a stable sort when the order of equal items matters. For example, if you have a list of people with the same age and you first sorted them by name, using a stable sort to then sort by age will keep the names in the original order for people with the same age. If the sort isn’t stable, that original order could get messed up.

### 7. Gold Thief

You are planning a heist to steal a rare coin that weighs 1.0001 ounces. The problem is that the rare coin was mixed with a bunch of counter fit coins. You know the counter fit coins only weight 1.0000 ounce each. There are in total 250 coins.  You have a simple balance scale where the coins can be weighed against each other. Hint: don't think about all the coins at once, but how you can break it up into even(ish) piles. 

#### 7.1 Algorithm
Describe an algorithm that will help you find the coin. We encourage you to use pseudo-code, but not required.

The goal is to identify the single coin that is slightly heavier. I would approach this by repeatedly splitting the coins into smaller groups and comparing their weights, similar to how merge sort or quick sort processes data.

function findHeavierCoin(coins):
    while more than 1 coin:
        # Split coins into 2 groups
        group1, group2 = splitInHalf(coins)

        # Weigh the groups
        if weigh(group1) > weigh(group2):
            coins = group1  # heavier coin is here
        else:
            coins = group2  # heavier coin is here

    # Only 1 coin left, that's the heavier one
    return coins[0]


#### 7.2 Time Complexity
What is the average time complexity of your algorithm? 

O(log n), because each is weighing roughly halves the number of coins.

## Technical Interview Practice Questions

For both these questions, are you are free to use what you did as the last section on the team activities/answered as a group, or you can use a different question.

1. Select one technical interview question (this module or previous) from the [technical interview list](https://github.com/CS5008-khoury/Resources/blob/main/TechInterviewQuestions.md) below and answer it in a few sentences. You can use any resource you like to answer the question.

2. Select one coding question (this module or previous) from the [coding practice repository](https://github.com/CS5008-khoury/Resources/blob/main/LeetCodePractice.md) and include a c file with that code with your submission. Make sure to add comments on what you learned, and if you compared your solution with others. 
 

## Deeper Thinking
Sorting algorithms are still being studied today. They often include a statistical analysis of data before sorting. This next question will require some research, as it isn't included in class content. When you call `sort()` or `sorted()` in Python 3.6+, what sort is it using? 

#### Visualize
Find a graphic / visualization (can be a youtube video) that demonstrates the sort in action. 

#### Big O
Give the worst and best case time-complexity, and examples that would generate them. 

<hr>

## References
Add your references here. A good reference includes an inline citation, such as [1] , and then down in your references section, you include the full details of the reference. Use [ACM Reference format].

GeeksforGeeks. "Analysis of Different Sorting Techniques." GeeksforGeeks, 2025.2. ...





## Footnotes:
[^note]: You will want at least 10 different N values, probably more to see the curve for Merge and Quick. If bubble, selection, and insertion start to take more than a  minute, you can say $> 60s$ or - . For example 
    | N | Bubble | Selection | Insertion | Merge | Quick |
    | :-- | :--: | :--: | :--: | :--: | :--: |
    | 10,000|0.197758|0.070548|0.000070|0.000513|0.000230|
    |100,000|-|-|-|0.131061|0.018602|

<!-- links moved to bottom for easier reading in plain text (btw, this a comment that doesn't show in the webpage generated-->
[image markdown]: https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax#images

[ACM Reference Format]: https://www.acm.org/publications/authors/reference-formatting
[IEEE]: https://www.ieee.org/content/dam/ieee-org/ieee/web/org/conferences/style_references_manual.pdf