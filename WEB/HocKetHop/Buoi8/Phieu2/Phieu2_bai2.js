const str = 'học Java thật vi diệu';

function countChar(str) {
  const charH = str.split(/h/).length - 1;
  const charA = str.split(/a/).length - 1;
  return {
    isEqual: charH === charA ? true : false,
    lengthA: charA,
    lengthH: charH,
  };
}
const result = countChar(str);
if (result.lengthA === result.lengthH) {
  console.log(
    `h xuat hien ${result.lengthH} lan,a xuat hien ${result.lengthA} lan vay so luong bang nhau`
  );
} else {
  console.log(
    `h xuat hien ${result.lengthH} lan,a xuat hien ${result.lengthA} lan vay so luong khong bang nhau`
  );
}
