//---------------------------------------------------
// Program Written by Zachary "Xander" Bruce
// Insertion Sort Algorithm written in Zig 0.13.0
//
// To compile and run this program go to this website:
// https://ziglang.org/learn/getting-started/
//
// And install Zig using you platforms package manager
// or follow the "Direct Download" instructions. Under
// the "Installing Zig" header
//
// once you have completed all of the steps and installed
// Zig, make sure you have Zig installed with the:
//
// zig -version
//
// ensure you have the equivalent ouput to mine:
//
// 0.13.0
//
// Once that is completed run the program with the
// command:
//
// zig run InsertionSort.zig
//
//---------------------------------------------------

const std = @import("std");
const ARRAY_SIZE: u8 = 10; // Unsigned 8 bit integer

pub fn main() void {
    var arr = [ARRAY_SIZE]i8{ 1, 18, 21, 7, 0, 10, 42, 65, 2, 12 };

    std.debug.print("UNSORTED ARRAY\n", .{});
    printArray(arr);
    var sortedIndex: usize = undefined; // Unsigned Size

    for (1..ARRAY_SIZE) |index| { // index is set to the current iteration of the for loop between 1 - ARRAY_SIZE
        const key: i8 = arr[index]; // constant signed 8 bit integer
        sortedIndex = index - 1;

        while (sortedIndex < ARRAY_SIZE and key < arr[sortedIndex] and sortedIndex >= 0) { // Hack to break while loop
            arr[sortedIndex + 1] = arr[sortedIndex];
            sortedIndex -%= 1; // decrement by 1 and if we overflow then wrap the overflow back to the highest unsigned value
        }

        if (sortedIndex > ARRAY_SIZE) { // Hack for making the compiler happy with unsigned size overflow, I am not good at this
            arr[0] = key;
        } else {
            arr[sortedIndex + 1] = key;
        }
    }

    std.debug.print("SORTED ARRAY\n", .{});
    printArray(arr);
}

pub fn printArray(arr: [ARRAY_SIZE]i8) void {
    for (arr, 0..) |key, index| {
        std.debug.print("Index:{d} ", .{index});
        std.debug.print("Value:{d}\n", .{key});
    }
}
