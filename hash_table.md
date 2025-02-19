# Hash tables
- are meant to solve the slow access times of linked lists
- labels each node!

## defn
hash table slots are indexed drawers
- Keys are stored in hash table slots, NOT key/value
- Keys are still what you access the slots with,
- Slots are pretty fixed, so you don't use up so much memory. You can have multiple keys in a single slot, but that's slow.
**Hash function** : filter that helps us spread out keys in a hash map
**Load factor** : ratio between keys / # of slots
- smaller is better
- On average how many keys one slot will hold
**Collision** : more than one key in one slot


Hash Function: 
    (key) -> Hash table index
Accessing value:
    (Hash table index, key) -> value
Hash .get
    (key) -> value

Chaining Hash Table: In the case of collision, we link up multiple keys at the same slot 
- each slot is a linked list of keys
- we store the key/value pairs so searching for the keys is possible

Open Addressing Hash table: (OA)
- resolves collisions after hashing
- Each slot has exactly one key
- may make things harder to locate by taking adjacent spaces
- Load Factor maximum of 1.


## Day 2 Notes

Recall the dynamically growing linked list
- \[data1, ptr\] -> \[data2, ptr\] -> ...

Hash table is meant to be a dynamic structure with a way easier search method
- Also allows you to index by strings

### Resolving collisions
Linear Probing:
- adding to the hash output until we find a slot that is empty
- Used for Open Addressing hash tables
Quadratic Probing:
- increase the key with a quadratic function
- $h'(k) = k+ c_1 * i + c_2 * i^2$
- increment i until you find slot or you reach $i = n-1$, where you skip the element
- i reset to 0 every time there is a conflict

# project notes
smaller standard deviation is better. Data is well spread out
