# Hash tables
- are meant to solve the slow access times of linked lists
- labels each node!

## defn
hash table slots are indexed drawers
- Keys are stored in hash table slots, NOT key/value
- Keys are still what you access the slots with,
- Slots are pretty fixed, so you don't use up so much memory. You can have multiple keys in a single slot, but that's slow.
Hash function: filter that spreads out stuff
Load factor: ratio between keys / # of slots
- smaller is better
collision: more than one key in one slot

Hash Function: 
    (key) -> Hash table index
Accessing value:
    (Hash table index, key) -> value
Hash .get
    (key) -> value

Chaining Hash Table: In the case of collision, we link up multiple keys at the same slot 
- each slot is a linked list of keys
- we store the key/value pairs so searching for the keys is possible

Open Addressing Hash table:
- resolves collisions after hashing
- Each slot has exactly one key
- may make things harder to locate by taking adjacent spaces

# project notes
smaller standard deviation is better. Data is well spread out
