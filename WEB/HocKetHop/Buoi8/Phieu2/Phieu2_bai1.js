const color = [
  'Blue ',
  'Green',
  'Red',
  'Orange',
  'Violet',
  'Indigo',
  'Yellow ',
];
const name = ['th', 'st', 'nd', 'rd'];

function countWords(color, name) {
  const result = color.map((element, index) => {
    if (index <= 2) return `${index + 1 + name[index + 1]} choice is ${element}`;
    return `${index + 1 + name[0]} choice is ${element}`;
  });
  return result;
}

console.log(countWords(color, name));
