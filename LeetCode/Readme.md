1. Dont write unnecessary code : It increase the runtime and space complexity of the code.

```c++
      int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != 0) {
                swap(nums[right], nums[left]);
                left++;
            }
        }
```

```c++
      int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != 0) {
                swap(nums[right], nums[left]);
                left++;
            }
        }

         for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << " ";
        }
```

Just because of adding a print for loop : Runtime will increase a lot.
