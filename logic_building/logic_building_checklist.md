# Master Your Logic Building (Before Starting DSA) — Expanded Edition

Original questions and structure by **CodeWithNishchal**. This version rewrites each problem with a bit more context, explanation, and a friendly nudge in the direction you should be thinking — closer to how a course instructor would frame it, rather than a bare one-liner. Nothing about the underlying problems has changed; this is purely an explanatory expansion for my own practice tracking.

Original source / follow the creator:
- YouTube: https://www.youtube.com/@CodeWithNishchal
- Instagram: https://www.instagram.com/codewithnishchal/
- LinkedIn: https://www.linkedin.com/in/nishchal-muradia/

Check a box once you've solved it. Add a link next to a checked item once you have a solution file for it.

---

## Phase 1: Conditional Thinking

**The goal here isn't just "write an if-statement."** It's to build the instinct of translating a real-world rule into a boolean expression without hesitating. By the end of this phase, reading a word problem and immediately seeing the `if`/`else if`/`else` shape in your head should feel automatic.

### Level 1 — Simple Conditions (Getting Started)

- [ ] **Positive, negative, or zero.** Take a single number and print which of the three buckets it falls into. This is the "hello world" of conditionals — get comfortable with `if / else if / else` here before anything else.
- [ ] **Even or odd.** Use the modulo operator (`%`) to check divisibility by 2. This is the first time you'll really *feel* what `%` is for.
- [ ] **Divisible by 5.** Same idea as above, but notice how the logic barely changes — just the divisor. Good moment to notice patterns in your own code.
- [ ] **Divisible by both 3 and 5.** Now combine two conditions with `&&`. Think about what happens if you check them one at a time vs. combined.
- [ ] **Leap year check.** The classic "looks simple, has a trap" problem. A year is a leap year if divisible by 4, *except* century years, *unless* divisible by 400. Get this wrong once, learn it forever.
- [ ] **Larger of two numbers.** Compare `a` and `b` and print whichever is bigger. Trivial on its own, but it's the seed of every "find the max" problem you'll ever write.
- [ ] **Largest of three numbers.** Now you have to think about ordering — do you compare pairs, or use nested conditions? Try it more than one way.
- [ ] **Temperature → cold/warm/hot.** Take a numeric temperature and classify it into a range. This introduces "bucketing" a continuous value — very common in real applications (grading, pricing tiers, etc.).
- [ ] **Vowel or consonant.** Take a character and check it against `a, e, i, o, u`. Think about whether you want to handle both uppercase and lowercase input.
- [ ] **Uppercase / lowercase / digit / special char.** Classify a single character into one of four categories. This is your first taste of ASCII-range thinking (`'A'-'Z'`, `'a'-'z'`, `'0'-'9'`).

### Level 2 — Nested If & Multiple Conditions

- [ ] **Valid triangle from three sides.** Given three side lengths, check if they can actually form a triangle (triangle inequality: each side must be less than the sum of the other two).
- [ ] **Triangle type: equilateral/isosceles/scalene.** Once you know it's a valid triangle, classify it by how many sides are equal. Good practice chaining conditions logically.
- [ ] **Marks → grade (A/B/C/D/F).** A classic grading-scale problem. Pay attention to the *order* you check your ranges in — get it backwards and everything grades wrong.
- [ ] **One number a multiple of the other.** Given two numbers, check if either one divides the other evenly.
- [ ] **Hour → good morning/afternoon/evening/night.** Take a 24-hour value and bucket it into a greeting. Think carefully about your boundary hours (is 12 PM "afternoon" or "morning"?).
- [ ] **Voting eligibility (18+).** Dead simple on the surface — a good spot to also think about "what if age is negative or absurdly large" as a mental exercise, even if you don't code for it yet.
- [ ] **Both even, both odd, or mixed.** Given two numbers, classify the *pair*, not just each number individually. This is your first taste of combined-state logic.
- [ ] **Char between a-m or n-z.** Split the alphabet in half and check which half a letter falls in.
- [ ] **Day number → day name.** Convert `1-7` into `"Monday"..."Sunday"`. A great candidate to try both as a long if-else chain and (later, once you know it) a switch-case.
- [ ] **Month number → days in month (no leap year).** Convert `1-12` into the correct day count, ignoring February's leap year quirk for now — that'll come back to bite you specifically in Phase 1 Level 5's date problems.

### Level 3 — Math/Number Logic

- [ ] **3-digit number, all digits distinct.** Extract each digit (hundreds, tens, units) and compare them pairwise.
- [ ] **Middle digit largest/smallest/neither.** Extract the three digits of a 3-digit number and compare the middle one against the outer two.
- [ ] **4-digit number, first == last digit.** Extracting digits from the *ends* of a longer number — a nice step up in digit-extraction difficulty.
- [ ] **Single/double/multi-digit check.** Classify a number by how many digits it has, without actually counting digits one by one (yet — that's a loop problem for later). Use range comparisons instead.
- [ ] **Multiple of 7 or ends in 7.** Combines a modulo check with a "look at the last digit" check — two different techniques, one condition.
- [ ] **(x,y) → quadrant.** Classic coordinate geometry logic. Don't forget to think about what happens on the axes themselves (x=0 or y=0).
- [ ] **Can amount be split into 2000/500/100 notes.** Given an amount, check if it can be represented using only those denominations with no leftover. Think in terms of the greatest common divisor of the note values.
- [ ] **Number in range [100,999].** Simple range check — but notice this is functionally identical to "is this a 3-digit number," just phrased differently.
- [ ] **Two angles → third angle of triangle.** Angles in a triangle sum to 180°; subtract the two given from that.
- [ ] **Perfect square without sqrt().** The fun constraint here is *without* using the square root function — try incrementing a counter and squaring it until you match or exceed the number.

### Level 4 — Logical Operators / Compound Conditions

- [ ] **Letter, digit or neither.** Classify a character into one of three buckets using compound boolean logic.
- [ ] **FizzBuzz.** *The* interview classic. Print "Fizz" for multiples of 3, "Buzz" for multiples of 5, "FizzBuzz" for both, and the number otherwise. If you've never done it, this is a rite of passage.
- [ ] **Median of three numbers.** Find the middle value of three numbers without sorting them — just comparisons.
- [ ] **AM or PM from 24h time.** Convert a 24-hour timestamp into an AM/PM label.
- [ ] **Tax eligibility (age > 18, income > 5L).** Combine two independent real-world conditions with `&&`.
- [ ] **Both positive and sum < 100.** Another compound condition — notice how natural language ("and") maps directly onto `&&` here.
- [ ] **Digit → word ("Zero"–"Nine").** Convert a single digit into its English word form. This is really a 10-way classification — good candidate for a switch-case once you learn it.
- [ ] **Weekday or weekend.** Given a day number, classify it into one of two buckets rather than naming the specific day.
- [ ] **Electricity bill by slab.** Calculate a bill where the rate changes depending on which "slab" (range) of units consumed you're in — a preview of tiered-pricing logic used in a ton of real billing systems.
- [ ] **Password check (len >= 8, has a digit).** Combine a length check with a scan for at least one digit character — your first tiny taste of validation logic.

### Level 5 — Tricky/Creative

- [ ] **Point on x-axis/y-axis/origin.** A refinement of the quadrant problem — this time you're checking the special boundary cases specifically.
- [ ] **Pythagorean triplet check.** Given three numbers, check if `a² + b² = c²` holds for some ordering of them. Think about whether you need to check all three permutations.
- [ ] **Valid calendar date (day, month).** Combine your "days in month" logic with a validity check — does the day number actually make sense for that month?
- [ ] **Angle between clock hands.** A genuinely fun geometry problem: given hours and minutes, calculate the angle between the hour and minute hands.
- [ ] **Arithmetic progression check.** Given three numbers, check if the difference between consecutive terms is constant.
- [ ] **Geometric progression check.** Same idea, but check if the *ratio* between consecutive terms is constant instead of the difference.
- [ ] **First+last digit == middle digit (3-digit num).** A digit-extraction and comparison problem, similar in spirit to Level 3 but with an added arithmetic step.
- [ ] **Digit sum > digit product.** Extract all digits, sum them, multiply them, then compare. Watch out for numbers containing a 0 — what does that do to the product?
- [ ] **Compare two dates.** Given two (day, month) pairs, determine which comes first in the calendar year.
- [ ] **Year → century.** Convert a year into its century label (e.g. 1999 → "20th century"). The off-by-one trap here (why is 1999 the *20th* century, not the 19th?) is the whole point of the exercise.

---

## Phase 2: Looping & Patterns

**This phase is about repetition without repeating yourself.** Once you're comfortable making a single decision, the next skill is making the *same* decision, or the *same* action, over and over — correctly, and without an off-by-one error creeping in. Dry-running your loops on paper before you run the code is a habit worth building right here.

### Level 1 — Basic Loops

- [ ] **Print 1 to 10.** The very first loop you'll ever write. Try it with `for` and then again with `while` so you feel the difference between the two.
- [ ] **Even numbers 1–100.** Loop through a range and filter using the modulo check from Phase 1.
- [ ] **Odd numbers 1–100.** Mirror image of the above — good for noticing how small the change is once the loop skeleton exists.
- [ ] **Print 10 down to 1.** Reverse-direction looping. Pay close attention to your loop's increment/decrement and its condition.
- [ ] **Multiplication table of n.** Loop from 1 to 10, printing `n × i = result` each time. A staple "practice the loop body" exercise.
- [ ] **Sum of first n naturals.** Accumulate a running total inside a loop — your first real use of an accumulator variable.
- [ ] **Sum of evens up to n.** Combine the accumulator pattern with a filter condition inside the loop.
- [ ] **Sum of odds up to n.** Same as above, opposite filter.
- [ ] **Factorial.** Accumulate a running *product* instead of a sum — notice you have to start it at 1, not 0, or everything collapses to zero.
- [ ] **Product of digits.** Extract each digit of a number (using `%` and `/`) and multiply them together as you go.

### Level 2 — Number-based Loops

- [ ] **Count digits.** Repeatedly divide by 10 until the number reaches 0, counting how many times you divided.
- [ ] **Reverse a number.** Peel off digits from the end and build a new number in reverse order — a foundational technique you'll reuse constantly.
- [ ] **Palindrome number check.** Reverse the number (using the technique above) and compare it to the original.
- [ ] **Sum of digits.** Extract and add digits one at a time — the addition sibling of "product of digits" from Level 1.
- [ ] **Armstrong number check.** A number where the sum of its own digits, each raised to the power of the digit count, equals the number itself (e.g. 153 = 1³+5³+3³). A great combined digit-extraction + power exercise.
- [ ] **Perfect number check.** A number equal to the sum of its own proper divisors (e.g. 6 = 1+2+3). Requires looping through all possible divisors.
- [ ] **Primes between 1–100.** Loop through a range and, for each number, check primality — this naturally leads into nested loops.
- [ ] **Is-prime check.** Isolate just the primality check itself — try to make it efficient by only checking divisors up to the square root.
- [ ] **Fibonacci series (n terms).** Generate the sequence where each term is the sum of the two before it — track two "previous" values as you go.
- [ ] **Sum of first n Fibonacci terms.** Extend the above to keep a running total alongside the sequence generation.

### Level 3 — Math/Logical Patterns

- [ ] **Squares 1 to n.** Loop and print `i*i` for each value — simple, but sets up the pattern-printing mindset for Level 4.
- [ ] **Cubes 1 to n.** Same idea with `i*i*i`.
- [ ] **Numbers between a,b divisible by 7.** Combine a bounded range loop with a modulo filter.
- [ ] **GCD via loop.** Find the greatest common divisor by iterating and checking common factors, or by implementing the subtraction-based Euclidean approach.
- [ ] **LCM via loop.** Find the least common multiple — a nice problem to pair with GCD, since `LCM = (a*b)/GCD(a,b)`.
- [ ] **All factors of n.** Loop from 1 to n and print every number that divides evenly.
- [ ] **Sum of factors.** Extend the above to accumulate a total instead of just printing.
- [ ] **Strong number check.** A number equal to the sum of the factorials of its own digits (e.g. 145 = 1! + 4! + 5!).
- [ ] **Arithmetic progression (a, d).** Generate n terms of a sequence given a starting value and common difference.
- [ ] **Geometric progression (a, r).** Generate n terms given a starting value and common ratio.

### Level 4 — Pattern Printing (Stars/Numbers)

- [ ] See the separate star-pattern practice sheet from the original source for this level. This section is specifically about *nested* loops — an outer loop for rows, an inner loop for columns — and is genuinely one of the best ways to build spatial/logical intuition before recursion.

### Level 5 — Logical Loop Combinations

- [ ] **Digit-sum-even numbers, 1–100.** Combine digit-sum logic from Level 2 with a filtering loop.
- [ ] **Div by 7 not 5, count in 1–500.** A compound filter inside a loop — practice combining `&&` with modulo checks at scale.
- [ ] **Palindromes 1–500.** Loop through a range and apply your palindrome check from Level 2 to each number.
- [ ] **Digit sum multiple of 3, 1–100.** Another digit-sum filter, this time checking divisibility of the sum itself.
- [ ] **Smallest/largest digit in a number.** Extract all digits and track the min/max as you go — your first "running min/max" pattern, which you'll use constantly with arrays later.
- [ ] **Even number of set bits, 1–n.** Count how many 1s appear in a number's binary representation and check if that count is even. A nice bridge toward bitwise thinking.
- [ ] **Row i prints i*i.** A pattern-printing problem where the printed value itself depends on the row index — connects directly back into Level 4.
- [ ] **Factorial of each num, 1 to n.** Loop through a range and compute (and print) the factorial for each value — combining two loop skills (an outer range loop, an inner factorial loop).
- [ ] **Sum of odd digits vs even digits.** Extract digits and route each one into one of two running totals based on its parity.
- [ ] **Sum 5 inputs, skip 0 with continue.** Your first deliberate use of `continue` — a chance to see exactly what it skips and what it doesn't.

---

## Phase 3: Recursion

**This is the phase where a lot of people hit a wall — and that's normal.** The mental shift from "loop until done" to "define the problem in terms of a smaller version of itself" takes real practice. The trick that helps most people: always identify your **base case** (when do you stop?) before you even think about the recursive case.

### Level 1 — Foundations of Recursion

- [ ] **Print 1 to n.** The simplest possible recursive function — call yourself with `n-1`... or is it `n+1`? Think carefully about which direction makes the base case reachable.
- [ ] **Print n to 1.** The mirror version — notice how just moving the print statement before or after the recursive call changes the printed order entirely.
- [ ] **Even numbers 1 to n recursively.** Combine a base case with a conditional print inside the recursive call.
- [ ] **Odd numbers 1 to n recursively.** Same idea, opposite filter.
- [ ] **Sum of first n naturals recursively.** Instead of an accumulator variable, the "running total" now lives in the return values stacking up through your recursive calls.
- [ ] **Factorial recursively.** The textbook example of recursion for a reason — `n! = n * (n-1)!`, with `0! = 1` as your base case.
- [ ] **Power (x^n) recursively.** Multiply `x` by itself `n` times using recursive calls, with `x^0 = 1` as the base case.
- [ ] **nth Fibonacci recursively.** Notice how naturally the recursive definition matches the mathematical one — and also notice how slow it gets for larger n (a good motivator for optimization later).
- [ ] **Fibonacci series (n terms) recursively.** Generate the full sequence, not just the nth term, using recursive calls.
- [ ] **Sum of digits recursively.** Peel off one digit per call and add it to the recursive result of the rest.

### Level 2 — Number-based Recursion

- [ ] **Count digits recursively.** Each call strips one digit and adds 1 to the recursive count of what remains.
- [ ] **Reverse a number recursively.** A genuinely tricky one — you'll likely need a helper variable passed through the recursive calls to build the reversed result.
- [ ] **Palindrome check recursively.** Compare digits from the outside in, recursively shrinking the problem.
- [ ] **Product of digits recursively.** Same shape as sum of digits, but multiplying instead of adding — remember your base case needs to return 1, not 0.
- [ ] **GCD (Euclid's algorithm) recursively.** One of the most elegant classic recursive algorithms — `gcd(a,b) = gcd(b, a%b)`, with `gcd(a,0) = a`.
- [ ] **Decimal to binary recursively.** Convert a number to its binary representation by recursively dividing by 2.
- [ ] **Digits to words recursively.** e.g. `123 → "one two three"` — combine digit extraction with a lookup of word forms, recursively working through each digit.
- [ ] **Sum of first n evens recursively.** Recursive version of the accumulator pattern from Phase 2, applied to even numbers specifically.
- [ ] **Sum of first n odds recursively.** Same, for odd numbers.
- [ ] **nCr via Pascal's relation recursively.** Use the identity `C(n,r) = C(n-1,r-1) + C(n-1,r)` — a great early example of a recursive function with *two* recursive calls instead of one.

### Level 3 — Pattern Printing via Recursion

- [ ] **Line of n stars recursively.** Replace a simple loop with a recursive call — the base case is just "n reaches 0."
- [ ] **n×n square of stars recursively.** Nest two recursive functions (or one function recursing on both rows and columns) to reproduce a grid.
- [ ] **Triangle, top-down, recursively.** Each recursive call prints one more star than the last, building the triangle shape row by row.
- [ ] **Triangle, bottom-up, recursively.** Reverse the direction — start wide and shrink with each call.
- [ ] **Numbers 1 to n per row, recursively.** Combine your "print 1 to n" recursion with an outer recursive loop over rows.
- [ ] **Reverse triangle recursively.** Combine the bottom-up shape with number rather than star printing.
- [ ] **Multiplication table recursively.** Replace the loop-based multiplication table from Phase 2 with a recursive version.
- [ ] **Increasing + decreasing in one function.** Print ascending numbers before the recursive call and descending numbers after it — a great exercise in understanding *when* code executes relative to the recursive call.
- [ ] **Print 1+2+...+n, showing each step.** Print the partial expression as you build up the recursion, not just the final sum.
- [ ] **A, AB, ABC... pattern recursively.** Build up a string one character at a time through the recursive calls.

### Level 4 — String Recursion

- [ ] **Reverse a string recursively.** Move the first character to the end of the recursive result of the rest of the string.
- [ ] **Palindrome string check recursively.** Compare the first and last characters, then recurse on the substring in between.
- [ ] **Count vowels recursively.** Check the first character, then add the recursive count of vowels in the rest of the string.
- [ ] **Remove all spaces recursively.** Skip the character if it's a space, otherwise keep it and recurse on the rest.
- [ ] **Replace char (a → x) recursively.** Check and substitute the first character, then recurse.
- [ ] **Remove all occurrences of a char recursively.** Similar to removing spaces, but generalized to any target character.
- [ ] **Print chars one by one recursively.** The simplest possible string recursion — print the first character, then recurse on the rest.
- [ ] **Print string reversed, no loops.** A pure-recursion constraint version of the reverse-string problem — no helper loop allowed anywhere.
- [ ] **To uppercase recursively.** Convert the first character, then recurse on the rest and concatenate.
- [ ] **Count vowels vs consonants recursively.** Track two counts simultaneously as the recursion unwinds.

---

## Phase 4: Basic Arrays

**Arrays are where "iterative logical thinking" really clicks into place.** Every technique from Phase 2 (loops, accumulators, filters) comes back here, just applied to a collection instead of a single number. If you can already picture how a loop walks through 1 to n, you're most of the way to picturing how it walks through an array's indices.

### Level 1 — Fundamentals

- [ ] **Read n ints into array, print them.** The absolute basics of array input and traversal — get comfortable with index-based access before anything fancier.
- [ ] **Sum of elements.** The accumulator pattern from Phase 2, now applied across array indices instead of a numeric range.
- [ ] **Average.** Sum the array, then divide by its length — watch out for integer division truncating your result.
- [ ] **Max element.** Track a running "best so far" as you traverse — this pattern will come back constantly.
- [ ] **Min element.** Mirror of max — same pattern, flipped comparison.
- [ ] **Count positive/negative/zero.** Three counters, one traversal — practice updating multiple accumulators in a single pass.
- [ ] **Count even/odd.** Same idea, different classification rule.
- [ ] **Index of max.** Instead of tracking the *value*, track the *position* where it occurs.
- [ ] **Index of min.** Same, for the minimum.
- [ ] **Elements greater than k.** Filter and print — the array version of the "range check" problems from Phase 1.

### Level 2 — Searching/Counting

- [ ] **Does x exist in array.** Linear search — walk the array and check for a match, stopping early once found.
- [ ] **Count occurrences of x.** Similar to search, but don't stop early — keep a running count instead.
- [ ] **First occurrence.** Return the index of the first match, then stop.
- [ ] **Last occurrence.** Either traverse backward, or traverse forward and keep overwriting the "last found" index.
- [ ] **All elements unique?** Compare every pair of elements (nested loop) to check for duplicates — this is also your first real taste of O(n²) thinking, even before you formally learn Big-O.
- [ ] **Sum of evens.** Combine the accumulator pattern with a filter, applied to array elements this time.
- [ ] **Sum of odds.** Mirror of the above.
- [ ] **Count of primes in array.** Apply your Phase 2 "is-prime" logic to each array element.
- [ ] **Count divisible by 3 and 5.** A compound filter applied across the array.
- [ ] **Count perfect squares.** Apply your Phase 1 perfect-square check to each element.

### Level 3 — Transform/Manipulate

- [ ] **Array of squares.** Build a *new* array by transforming each element — your first taste of a "map" operation, even before you know that word.
- [ ] **Array of evens only.** Build a new, smaller array containing only elements that pass a filter.
- [ ] **Negatives → 0.** Modify the array in place, replacing values that meet a condition.
- [ ] **Even → 1, odd → 0.** A full binary transformation of every element based on a condition.
- [ ] **Swap first & last.** A tiny but important exercise in using a temp variable correctly.
- [ ] **Reverse array manually.** Swap elements from both ends moving inward — don't use a built-in reverse function, build the logic yourself.
- [ ] **Rotate left by 1.** Shift every element one position left, wrapping the first element around to the end.
- [ ] **Rotate right by 1.** Mirror of the above, shifting right instead.
- [ ] **Swap alternate elements.** Swap index 0↔1, 2↔3, and so on — good index-arithmetic practice.
- [ ] **Manual array copy.** Copy every element from one array into another, index by index, without a built-in copy function.

### Level 4 — Aggregate/Comparative

- [ ] **Arrays equal (same order)?** Compare two arrays element-by-element at matching indices.
- [ ] **Arrays equal (ignore order)?** A trickier version — you need to check that both arrays contain the same *multiset* of values, regardless of position.
- [ ] **Merge two arrays.** Combine two arrays into a single new one.
- [ ] **Common elements.** Find values present in both arrays — your first taste of "set intersection" logic.
- [ ] **In A but not in B.** Find values unique to the first array — "set difference" logic.
- [ ] **Count of common elements.** Same as "common elements," but just count them instead of listing them.
- [ ] **Element-wise sum A[i]+B[i].** Requires both arrays be the same length — combine values at matching positions.
- [ ] **Element-wise product.** Same idea, multiplication instead of addition.
- [ ] **Frequency array.** Build a new array where each position tracks how many times a corresponding value appeared in the original.
- [ ] **Elements appearing more than once.** Use nested comparison (or your frequency array) to spot duplicates.

### Level 5 — Logical/Applied

- [ ] **Sorted ascending?** Walk the array checking that each element is ≥ the one before it.
- [ ] **Sorted descending?** Mirror check, opposite direction.
- [ ] **Second largest.** Track two running values (largest and second-largest) in a single pass — a classic interview-style twist on "find the max."
- [ ] **Second smallest.** Mirror of the above.
- [ ] **Max - min.** Combine your max and min logic, then take the difference — the array's "range."
- [ ] **Sum excluding max and min.** Find max and min first, then sum everything else.
- [ ] **Count pairs summing to k.** A nested-loop pair-checking problem — a great warm-up for two-pointer and hashing techniques you'll meet properly in DSA.
- [ ] **Count elements > average.** Compute the average first, then filter against it in a second pass.
- [ ] **Frequency of each element.** A more general version of the "frequency array" problem — this time for arbitrary values, not just small ranges.
- [ ] **Elements occurring exactly once.** Filter using your frequency logic to find values with a count of exactly 1.

---

## Phase 5: Strings

**Think of a string as "an array of characters wearing a disguise."** Almost every technique that worked on arrays in Phase 4 works on strings too — traversal, filtering, accumulation, in-place modification. The extra wrinkle is that strings also carry meaning at the *word* level, not just the character level, which is where the later categories in this phase come in.

### Basic Handling

- [ ] **String length.** Know how your language/library gets this for you, but also understand what it's counting under the hood.
- [ ] **First & last char.** Simple index access at the two ends of the string.
- [ ] **To uppercase.** Convert every character, one at a time — same "transform each element" pattern from Phase 4.
- [ ] **To lowercase.** Mirror of the above.
- [ ] **Char count excluding spaces.** A filtered count — total length minus the space characters.
- [ ] **Word count in sentence.** Count the transitions between "in a word" and "not in a word" as you scan — trickier than it first looks with multiple consecutive spaces.
- [ ] **Concatenate two strings.** Join two strings into one — get comfortable with whatever concatenation method your language offers.
- [ ] **Lexicographic compare.** Compare two strings character by character the way a dictionary would order them.
- [ ] **ASCII value per char.** Print the underlying numeric code for each character — reinforces that a "character" is really just a small integer under the hood.
- [ ] **Empty string check.** A trivial but important edge case to always keep in mind for every other string problem here.

### Counting/Char Analysis

- [ ] **Vowels vs consonants.** Apply your Phase 1 vowel check across every character in the string, tallying two separate counts.
- [ ] **Digits, letters, special chars count.** A three-way character classification applied across an entire string.
- [ ] **Uppercase vs lowercase count.** Another two-way character classification, tallied across the whole string.
- [ ] **Frequency of each char (no map).** Without a hash map/dictionary, you'll need something like a 256-length array indexed by ASCII value — a clever workaround worth understanding deeply.
- [ ] **Count spaces.** A single-character-type count, isolated from the "letters/digits/special" breakdown above.
- [ ] **Count occurrences of a char.** Given a specific target character, count how many times it shows up.
- [ ] **Alphabets before/after 'm'.** Split the alphabet at a chosen letter and count on each side — reuses your Phase 1 "char between a-m or n-z" logic.
- [ ] **Substrings starting/ending with same char.** Check pairs of positions in the string where the characters at both ends match.
- [ ] **Words starting with a vowel.** Combine word-boundary detection with a vowel check on the first letter of each word.
- [ ] **Words ending in 's'.** Same idea, checking the last letter of each word instead.

### Reversing/Palindromes

- [ ] **Reverse string manually.** Same two-pointer swap technique from array reversal, applied to string characters.
- [ ] **Reverse each word.** Reverse the characters *within* each word, but keep word order the same.
- [ ] **Reverse word order in sentence.** The opposite — keep each word intact, but reverse the order they appear in.
- [ ] **Palindrome check.** Same logic as the array/number palindrome checks, applied to string characters instead.
- [ ] **Two strings, one the reverse of other?** Reverse one string and compare it to the other.
- [ ] **Middle character(s).** Handle both the even-length and odd-length cases — this is a classic "watch your edge cases" problem.
- [ ] **Second half, reversed.** Split the string in half, then reverse only the second portion.
- [ ] **Strip first & last char.** Return a substring that excludes the two boundary characters.
- [ ] **Reverse letters only, digits stay put.** A genuinely tricky two-pointer variant — you skip over digit positions while still swapping letters.
- [ ] **Reverse skipping spaces.** Similar constraint, but with spaces as the "untouched" characters instead of digits.

### Char/Word Manipulation

- [ ] **Remove vowels.** Build a new string, skipping any vowel characters as you go.
- [ ] **Remove spaces.** Same filtering idea, this time excluding spaces.
- [ ] **Vowels → '\*'.** A substitution rather than a removal — keep the character *position* but change its value.
- [ ] **Spaces → '\_'.** Same substitution idea, applied to spaces.
- [ ] **Remove digits.** Filter out digit characters while rebuilding the string.
- [ ] **Remove duplicate characters.** Keep track of which characters you've already seen (an array indexed by ASCII works well here too) and skip repeats.
- [ ] **Keep only first occurrence of each char.** Closely related to the above — same tracking technique, phrased slightly differently.
- [ ] **Collapse consecutive duplicates ("aaabb" → "ab").** Compare each character only to its immediate neighbor, not the whole "seen" set.
- [ ] **Swap case.** Flip every uppercase letter to lowercase and vice versa in a single pass.
- [ ] **Shift each char by 1 ("abc" → "bcd").** A gentle introduction to Caesar-cipher-style character arithmetic.

### Word-level Thinking

- [ ] **Print each word on its own line.** Basic word-splitting and iteration.
- [ ] **Count words with even length.** Combine word splitting with a length check on each word.
- [ ] **Longest word.** The "running max" pattern from Phase 4, applied to word lengths instead of numbers.
- [ ] **Shortest word.** Mirror of the above.
- [ ] **Swap first & last word.** Similar spirit to the array "swap first & last element" problem, but at word granularity.
- [ ] **Words starting and ending with same letter.** Combine word extraction with a first/last character comparison.
- [ ] **Words containing 'a'.** Filter words based on whether a target character appears anywhere inside them.
- [ ] **Capitalize first letter of each word.** A per-word transformation, rebuilding the sentence as you go.
- [ ] **Title case sentence.** Extend the above — capitalize first letters, but also lowercase the rest of each word.
- [ ] **Normalize extra spaces.** Collapse multiple consecutive spaces down to one — a nice combination of the "collapse consecutive duplicates" idea applied specifically to whitespace.

---

## Phase 6: Mixed Logical Challenges

**This phase doesn't teach anything new — it tests whether the earlier phases actually stuck.** Every problem here recombines techniques from Phases 1–5 in slightly unfamiliar shapes. If you find yourself stuck, ask "which earlier problem does this resemble?" before reaching for a totally new approach.

### Number-based

- [ ] **Div by 3 and 5, 1 to N.** A direct callback to Phase 1's compound divisibility check, now applied across a range like in Phase 2.
- [ ] **Digit sum (loop).** Revisit your Phase 2 digit-extraction technique.
- [ ] **Armstrong check.** Reapply the Phase 2 Armstrong logic from memory, without looking it up.
- [ ] **Armstrong numbers, 1–1000.** Combine the single-number check with a range loop.
- [ ] **Factorial via recursion.** Deliberately reuse your Phase 3 recursive factorial here instead of a loop.
- [ ] **Count even digits.** Extract digits and filter by parity, same shape as several Phase 2/4 problems.
- [ ] **Primes 1 to N.** Reapply your is-prime check across a range.
- [ ] **Reverse number.** Straight callback to Phase 2.
- [ ] **Palindrome number.** Combine reverse-number with a comparison, as before.
- [ ] **Perfect number check.** Reapply the Phase 2 factor-sum logic.

### String + Logic

- [ ] **Anagram check, no collections.** Compare character frequency counts between two strings — reuse your "frequency without a map" technique from Phase 5, without an actual hash map/set.
- [ ] **Vowel count per word.** Combine word splitting with the vowel-counting logic from Phase 5.
- [ ] **Reverse words with even length.** Combine word splitting, a length filter, and selective reversal.
- [ ] **Vowel → position (a=1,e=2...).** Map each vowel to a fixed numeric position and substitute it into the string.
- [ ] **Chars appearing more than once, no map.** Reapply your ASCII-array frequency trick from Phase 5.
- [ ] **Words starting/ending same letter.** Direct callback to a Phase 5 word-level problem.
- [ ] **Toggle case, alternate words.** Combine word iteration with a case-swap applied only to every other word.
- [ ] **Rotation check between two strings.** Check if one string is a rotated version of another (hint: think about what happens when you concatenate a string with itself).
- [ ] **Word with most vowels.** Combine word splitting, vowel counting, and the "running max" pattern.
- [ ] **Remove duplicate words.** Track which words you've already seen (similar to the duplicate-character technique) and skip repeats.

### Array + Looping

- [ ] **Max & min.** Straight callback to Phase 4 fundamentals.
- [ ] **Count pos/neg/zero.** Another direct Phase 4 callback.
- [ ] **Unique elements.** Reapply your Phase 4 uniqueness-checking logic.
- [ ] **Reverse in place.** Reuse the two-pointer swap technique from before.
- [ ] **Shift zeros to end.** A genuinely popular interview problem — move all zero elements to the end while preserving the relative order of non-zero elements.
- [ ] **Evens at even indices.** Check a condition that depends on *both* the value and its position — a nice combination of two ideas you've practiced separately.
- [ ] **Merge two arrays.** Direct callback to Phase 4.
- [ ] **Second largest.** Reapply the two-variable tracking technique from Phase 4 Level 5.
- [ ] **Rotate right by 1.** Direct callback to Phase 4.
- [ ] **Sum at odd indices.** A filtered accumulator based on index parity rather than value parity.

### Nested Logic/Pattern Flow

- [ ] **10x10 multiplication grid.** A formatted, two-dimensional extension of the Phase 2 multiplication table.
- [ ] **Pairs summing to a target.** Direct callback to the Phase 4 "count pairs" problem, this time printing the actual pairs.
- [ ] **All subarrays.** Generate every contiguous slice of an array using nested loops — an important building block for a huge number of future DSA problems.
- [ ] **Sorted check (asc or desc).** Combine both of your Phase 4 sortedness checks into a single function that reports which (if either) applies.
- [ ] **Consecutive repeats of a number.** Track a running streak length as you scan the array.
- [ ] **Matching char pairs, nested loop.** Compare every pair of character positions in a string for equality.
- [ ] **A, AB, ABC pattern.** Direct callback to the Phase 3 recursive pattern, now as a plain nested loop.
- [ ] **Pascal's triangle, N rows.** A genuinely satisfying nested-loop pattern where each value depends on the row above it.
- [ ] **Fibonacci via recursion, N terms.** Deliberate callback to Phase 3.
- [ ] **Spiral number pattern.** A challenging 2D traversal problem — track your current direction and turn when you hit a boundary or an already-filled cell.

### Applied Reasoning

- [ ] **Pass count from marks (>= 40).** A combination of a threshold filter and a counting accumulator, dressed up in a real-world scenario.
- [ ] **Classify ages: minor/adult/senior.** A three-way range classification, similar in spirit to the Phase 1 temperature problem.
- [ ] **Password validation (upper, lower, digit, special).** A fuller version of the Phase 1 password check — now checking for all four character categories, not just length and one digit.
- [ ] **Calculator via switch-case.** Take an operator and two numbers, and dispatch to the correct arithmetic operation using a switch statement.
- [ ] **Coin flip heads/tails counter.** Simulate repeated random events and tally outcomes — your first taste of working with randomness.
- [ ] **Digit frequency in a number.** Combine digit extraction with a frequency array, similar to the string character-frequency problems.
- [ ] **Common elements, two arrays.** Direct callback to Phase 4.
- [ ] **Common chars, two strings.** The string analogue of the array "common elements" problem.
- [ ] **Primes in an array.** Direct callback to Phase 4.
- [ ] **Palindromic words in a sentence.** Combine word splitting with your Phase 5 palindrome check, applied to each word individually.

---

*Follow the original creator for more: [YouTube](https://www.youtube.com/@CodeWithNishchal) · [Instagram](https://www.instagram.com/codewithnishchal/) · [LinkedIn](https://www.linkedin.com/in/nishchal-muradia/)*
