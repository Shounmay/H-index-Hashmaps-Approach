<h1 align='center'><u><b> H-Index Kickstart 2019</b> </u></h1>

<h2> <u>Problem Link:</u> https://codingcompetitions.withgoogle.com/kickstart/round/0000000000050edd/00000000001a274e </h2>

<h1 ><u> Idea Used: </u></h1>

## We must be clear that for an index i, the h-index could be h_ind(prev) or h_ind+1.

## When we are in ith citiation,if the cit[i]>h_index(till i-1 citiation), then h_ind+1 could be an answer

## So we need to add cit[i] to our hashmap and increment the frequency of numbers greater than equal to h_ind.

## Now we have to subtract frequency of h_ind , so now the value of frequency give the total count of numbers

## greater than h_ind. Now comapre h_ind+1 with freq and update h_ind.

<h1 ><u> Time and Space Analysis </u></h1>

## Time-Complexity: O(N)

## Space-Compexity: O(N)
