const words = [
  'a',
  'b',
  'c',
  'd',
  'e',
  'f',
  'g',
  'h',
  'i',
  'j',
  'k',
  'l',
  'm',
  'n',
  'o',
  'p',
  'q',
  'r',
  's',
  't',
  'u',
  'v',
  'w',
  'x',
  'y',
  'z',
];

const choose = 4;
const test = 'hoang';
function encode(words, arr, choose) {
  const result = [];
  const listChar = arr.split('');
  for (ele of listChar) {
    const index = words.indexOf(ele);
    result.push(words[(index + choose) % 26]);
  }
  return result.join("");
}

function decode(word, arr, choose) {
  const result = [];
  
}
console.log(encode(words, test, choose));
