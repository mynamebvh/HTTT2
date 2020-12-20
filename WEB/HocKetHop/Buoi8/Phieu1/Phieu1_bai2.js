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

function findMax(obj) {
  const list = Object.keys(obj);
  var max = obj[list[0]];
  const ele = obj;
  for (let i = 1; i <= list.length; i++) {
    if (obj[list[i]] > max) max = obj[list[i]];
  }
  const key = Object.keys(obj)[Object.values(obj).indexOf(max)];
  return {
    key,
    max,
  };
}

const result = findMax(count(arr1));
console.log(`${result.key} (${result.max} times)`);
