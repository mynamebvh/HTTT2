const st1 = 'abcd';
const st2 = 'cbad';
const st3 = 'abc';
const st4 = 'xyz';

function checkWords(str, str1) {
  if (str.length !== str1.length) return false;
  else {
    for (let i = 0; i < str.length; i++) {
      if (str1.indexOf(str[i]) < 0) {
        return false;
      }
    }
  }
  return true;
}

console.log(checkWords(st1, st2));
console.log(checkWords(st3, st4));
