c****************************************
c Insertion Sort in Fortran 77
c Program written by: Zachary "Xander" Bruce
c
c You will have to install a FORTRAN compiler, in my instance I ran on
c linux I downloaded gfortran with the command:
c 
c        sudo apt install gfortran
c
c To compile and run the file you should use the command:
c 
c        gfortran -std=legacy -o QuickSort quicksort.f
c 
c the std=legacy will tell the compiler to use older FORTRAN standards
c compile the program.
c **************************************

      PROGRAM MAIN

c Varibales to be used in the program
          INTEGER arr(10)
          INTEGER arraySize
          INTEGER n
          INTEGER newn
          INTEGER i
          INTEGER temp
          n = 10
c Hard coded array values
          arraySize = 10
          arr(1) = 0
          arr(2) = 12
          arr(3) = 20
          arr(4) = 15
          arr(5) = 7
          arr(6) = 21 
          arr(7) = 2
          arr(8) = 1
          arr(9) = 19
          arr(10) = 30
c printing array
          PRINT *, "Unsorted Array: ", arr

c Beginning of do while loop
20    continue

      newn = 0

c For loops in Fortran 77
      do i = 2, arraySize, 1

      if (arr(i - 1) > arr(i))then

c Performing Swap
          temp = arr(i-1)
          arr(i - 1) = arr(i)
          arr(i) = temp
          newn = i

      end if

      enddo

      n = newn

c do while conditional
      if (n .GE. 1) then
          go to 20
      end if

         PRINT *, "Sorted Array: ", arr

      END PROGRAM MAIN


