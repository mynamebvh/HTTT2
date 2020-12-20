const str = 'Java that vi dieu';
const str1 = 'Hoc java that vi dieu';

function isStartByJava(str) {
  if (str.indexOf('Java') === 0) {
    console.log('Chuoi bat dau bang Java');
  } else {
    console.log('Chuoi khong bat dau bang Java');
  }
}

isStartByJava(str);
isStartByJava(str1);
