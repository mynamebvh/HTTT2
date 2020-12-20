var st = 'hello world';
// 012345678910
function reverseString(str) {
  const length = str.length;
  var temp = '';
  for (let i = 0; i < length / 2; i++) {
    temp = st[i];
    str = setCharAt(str, i, st[length - (i + 1)]);
    str = setCharAt(str, length - (i + 1), temp);
  }

  return str;
}

function setCharAt(str, index, chr) {
  if (index > str.length - 1) return str;
  return str.substring(0, index) + chr + str.substring(index + 1);
}

console.log(reverseString(st));
