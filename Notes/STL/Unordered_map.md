1. Initialize the Unordered_map
```c++
// create an unordered_map with integer key and value
unordered_map<int, int> unordered_map1;

// create an unordered_map with string key and int value
unordered_map<string, int> ump_string;
```

2. Insert elements in the Unordered_map
```c++
// insert elements in random order
unordered_map1[1] = 1;
unordered_map1[3] = 3;
unordered_map1[2] = 2;

unordered_map1["One"] = 1;
unordered_map1.insert({"Two", 2});
```

3. Interate over the Unordered_map
```c++
for(const auto& key_value: unordered_map1) {
    string key = key_value.first;
    int value = key_value.second;
    cout << key << " - " << value << endl;
  }
```

4. Find an element in the Unordered_map
```c++
// find an element in the unordered_map
auto it = unordered_map1.find(1);
    if(it != unordered_map1.end()) {
    cout << "Key found: " << it->first << " Value: " << it->second << endl;
    } else {
    cout << "Key not found" << endl;
    }
```

```c++
// count() returns 0 if the key doesn't exist
if (student.count(1433)) {
    cout << "Yes";
}
else {
    cout << "No";
}
```


- (String) If you want to access the value with assignning : `unordered_map1[4] == NULL`
```c++
std::unordered_map<char, char> unordered_map1;
std::cout << unordered_map1[4] << std::endl; // prints NULL value
```

- (Integer) If you want to access the value with assignning : `unordered_map1[4] == 0`
```c++
std::unordered_map<int, int> unordered_map1;
std::cout << unordered_map1[4] << std::endl; // prints 0
```