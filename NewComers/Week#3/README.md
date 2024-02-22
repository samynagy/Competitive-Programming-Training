# Week #3

### Arrays 
 ![array](https://lh3.googleusercontent.com/xqWisTnSm05gCYF24akBwy5hIjqxkDHZhmqdAqOy9N6b-HHxBmkhQgnVeGAk4zWbpa4XqY42LNWrSeQMqvu7SRypdvpBNRw_HfQLcLfWA5SC5LboIHg9D5mHNc--cNlPBYxnyt1C)
 
 ### Intro To Arrays
- [ ] what is an array, how and when to use it
- [ ] [video](https://www.youtube.com/watch?v=0HT2-2qD654)
 ### practice 1D arrays
 - [ ] [video](https://www.youtube.com/watch?v=38l7MZbUZdM)
 ### intro to 2D arrays 
 - [ ] [video](https://www.youtube.com/watch?v=-GxY9NCG9Bw)
 ### practice 2D arrays
 - [ ] [video](https://www.youtube.com/watch?v=rUDC13pfB5E&t=202s&ab_channel=ArabicCompetitiveProgramming)
 ### frequency array 
 - [ ] [video](https://www.youtube.com/watch?v=kQGTjql8WjI&t=430s&ab_channel=MuhammedAfifi)

## if you want to dig deeper into how arrays work internally read the following section 
- you can skip this section if you feel the information provided is a bit hard to understand :D
 ### Virtual Memory [VM]
 ![VM](https://www.boardinfinity.com/blog/content/images/2023/02/Virtual-Memory-1.png)
  - Virtual memory is like a big imaginary space that your computer creates when it doesn't have enough physical memory (RAM) to handle all the tasks at once. It pretends that there's more memory available than there really is.
  - When you run multiple programs or tasks on your computer, each one needs memory to store data and instructions. However, your computer's RAM is limited, and it can't hold everything at once. That's where virtual memory comes in.
  - Virtual memory works by using a portion of your computer's storage drive (like the hard drive or SSD) as an extension of RAM. It temporarily moves data that's not immediately needed from RAM to this storage space. When the data is needed again, it's moved back into RAM.
  - This swapping of data between RAM and the storage drive happens automatically and behind the scenes, so you don't have to worry about it. It allows your computer to run more programs simultaneously without running out of memory.

 ### Arrays and Virtual Memory 
  - iam sure that you heard that arrays are contiguous in memory **but which one, virtual or physical memory(RAM)** ?
     - In C++, the memory addresses of array elements are contiguous in virtual memory, which is how the program perceives memory addressing. Virtual memory is managed by the operating system and provides each process with the illusion of having its own contiguous address space, regardless of the actual physical memory layout.
     - **While the elements of an array may or may not be physically contiguous in RAM (Random Access Memory), they are logically contiguous in virtual memory.**
### why the accessing time is so fast O(1)?
![Memory_Rep](https://logicmojo.com/assets/dist/new_pages/images/arraymemoryjava.png)
 - suppose i have an array like this
 ```cpp
int arr[5] = {5, 1, 10, 22, 9};
```
- suppose the first element **<arr[0]>** is at address *1024* and an integer takes up to 4 bytes then the second element will be at address *1028*
- then you can access any element like this
```cpp
int thirdElement = *(arr+2); // 10
```
- you can think about it like this
```cpp
(address of the first element of the array + (index*4 bytes))
```

### Good luck and happy hacking <3
![my_fav_gif](https://i.pinimg.com/originals/d1/75/14/d17514e2c03ec6b0e67ba7f18439a011.gif)
