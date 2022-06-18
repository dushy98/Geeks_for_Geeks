# 8. Linked List Insertion At Position
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given a linked list of size n. You need to<strong> insert</strong> an <strong>element data </strong>just <strong>after </strong>the <strong>given position pos</strong>.<br>
The position of <strong>first </strong>element is <strong>1</strong>. If the given position is <strong>greater </strong>than n, then don't insert anything as it is not possible.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>LinkedList: 1-&gt;2-&gt;3-&gt;4-&gt;5
position = 6, data = 10
<strong>Output: </strong>1 2 3 4 5
<strong>Explanation: </strong>The given linked list is
1 2 3 4 5. The data 10 is to be inserted
after position 6. However, the linked
list only contains 5 elements so we
cannot insert the data.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>LinkedList: 2-&gt;4-&gt;6-&gt;7-&gt;5-&gt;1-&gt;0
position = 7, data = 99
<strong>Output: </strong>2 4 6 7 5 1 0 99</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a <strong>function </strong>problem. You only need to complete the function <strong>insertAtPosition</strong> that takes <strong>head, pos, and data</strong> as parameters. &nbsp;The <strong>printing </strong>is done <strong>automatically </strong>by the<strong> driver code</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n, pos &lt;= 10<sup>3</sup></span></p>
 <p></p>
            </div>