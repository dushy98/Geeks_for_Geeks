# 9. Addition Under Modulo
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given two numbers a and b, find the sum of a and b. Since the sum can be very large, find the sum&nbsp;modulo <strong>10<sup>9</sup>+7.</strong></span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>a = 9223372036854775807
b = 9223372036854775807
<strong>Output: </strong>582344006
<strong>Explanation: 
</strong>9223372036854775807 + 9223372036854775807 
= 18446744073709551614.
18446744073709551614 mod (10<sup>9</sup>+7)
= 582344006</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>a = 1000000007
b = 1000000007
<strong>Output: </strong>0
<strong>Explanation: </strong>1000000007 + 1000000007 =
(2000000014) mod (10<sup>9</sup>+7) = 0</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function<strong> </strong> <strong>sumUnderModulo()&nbsp;</strong>that takes<strong> a and b as input parameters</strong> and <strong>returns sum </strong>of a and b under modulo <strong>10<sup>9</sup>+7</strong>. </span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong> : O(1)<br>
<strong>Expected Auxilliary Space </strong>:&nbsp; O(1)</span></p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Constraints:</span></strong><br>
<span style="font-size:18px">1 &lt;= a,b &lt;= 2<sup>63</sup>-1</span></p>
 <p></p>
            </div>