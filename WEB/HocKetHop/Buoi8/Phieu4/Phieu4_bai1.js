array1 = [1, 2, 3, 4, 1, 2, 2, 1];

function countNumber(arr) {
  const obj = {};

  for (number of arr) {
    number = number.toString();
    if (obj[number] === undefined) {
      obj[number] = 1;
    } else {
      obj[number]++;
    }
  }
  return obj;
}

function showMax(obj) {
  const result = [];
  const listValues = Object.values(obj);
  const max = Math.max(...listValues);
  const listKeys = Object.keys(obj);

  for (let i = 0; i < listKeys.length; i++) {
    if (obj[listKeys[i]] === max) result.push(listKeys[i]);
  }

  return result.map((num) => parseInt(num));
}
console.log(showMax(countNumber(array1)));
