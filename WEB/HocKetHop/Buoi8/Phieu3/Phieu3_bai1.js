const array1 = [1, 0, 2, 3, 4];
const array2 = [3, 5, 6, 7, 8, 13];

function countArray(arr, arr1) {
  if (arr.length > arr1.length) {
    return arr.map((element, index) => {
      return arr1[index] ? element + arr1[index] : element;
    });
  } else {
    return arr1.map((element, index) => {
      return arr[index] !== undefined ? element + arr[index] : element;
    });
  }
}

console.log(countArray(array1, array2));
