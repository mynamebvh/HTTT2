var arr1 = [3, 'a', 'a', 'a', 2, 3, 'a', 3, 'a', 2, 4, 9, 3];

function count(arr) {
  const obj = {};
  for (e of arr) {
    if (typeof e === 'number') {
      e = e.toString();
      if (obj[e] === undefined) {
        obj[e] = 1;
      } else {
        obj[e]++;
      }
    } else {
      if (obj[e] === undefined) {
        obj[e] = 1;
      } else {
        obj[e]++;
      }
    }
  }

  return obj;
}

function sortDuplicate(obj) {
  const result = Object.entries(count(arr1)).sort(([, a], [, b]) => b - a);
  console.log(result);
  for (let i = 0; i < result.length; i++) {
    if (result[i][1] > 1) {
      console.log(`${result[i][0]} (${result[i][1]} time)`);
    }
  }
}

sortDuplicate(count(arr1));
