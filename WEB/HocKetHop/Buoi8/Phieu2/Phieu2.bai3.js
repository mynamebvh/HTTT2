const str = 'I love You';

function convertOrdinaryFlowers(str) {
  const char = str.split('');
  return char.map((element) => toUpperChar(element)).join('');
}

function toUpperChar(char) {
  if (char === char.toUpperCase()) {
    return char.toLowerCase();
  } else {
    return char.toUpperCase();
  }
}
console.log(convertOrdinaryFlowers(str));
