# 1. Implement Stack Using Array
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Implement stack using array</span></p>

<p><span style="font-size:18px">You are given q queries. The queries can be of 3 types:</span><br>
<span style="font-size:18px"><span style="font-family:arial,helvetica,sans-serif"><strong>Query Type: &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Operation</strong><br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1 x: &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; Push x<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 2: &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Pop the top element<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 3: &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; display stack from bottom to top in a single line.</span></span></p>

<p><span style="font-size:18px">The stack here is implemented by an array <strong>stack[]</strong>, and maxSize of the stack is <strong>100000</strong>. If a push operation is performed beyond this size, you must print <strong>"Stack Full"(without quotes). </strong>Similarly, an unsuccessful pop operation should print <strong>"Stack Empty"(without quotes).&nbsp; </strong>If a display operation is performed on an empty stack print <strong>-1</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>q[] = {(1, 4), 3, 2, 2, 3}
<strong>Output: </strong>4
        Stack Empty<strong>
</strong>        -1<strong>
Explanation: </strong>push() --&gt; 4
display() --&gt; <strong>4</strong> gets printed
pop() --&gt; Pop 4
pop() --&gt; stack is empty so print <strong>Stack 
          Empty</strong>
display() --&gt; stack is empty so print<strong> -1</strong></span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>q[] = {(1, 3), 3}
<strong>Output: </strong>3<strong>
Explanation: </strong>push() --&gt; 3
display() --&gt; <strong>3</strong> gets printed</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input task is performed by the driver code. You need to complete the provided functions. Complete function <strong>push()</strong> which takes an element as input parameter and <strong>pop()</strong>, <strong>display()</strong> functions.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>: push: O(1), pop: O(1), display: O(N)<br>
<strong>Expected Auxilliary Space</strong>: O(N)</span></p>

<p><strong><span style="font-size:18px">Constraints:</span></strong><br>
<span style="font-size:18px">1 ≤ Number of Operations ≤ 10<sup>3</sup></span></p>
 <p></p>
            </div>