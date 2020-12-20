var st = 'hello world hi';

function formatSrting(str) {
  const words = str.split(/\s+/);
  const result = words.map((element) => toUpperChar(element));
  return result.join(' ');
}

function toUpperChar(str) {
  return str.substring(0, 1).toUpperCase() + str.substring(1);
}

console.log(formatSrting(st));
