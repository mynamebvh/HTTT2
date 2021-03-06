const Apify = require('apify');
const fs = require('fs');
const account = {
    username: '2019606167',
    password: '091120'
}
Apify.main(async () => {
    const browser = await Apify.launchPuppeteer({ headless: false });
    const page = await browser.newPage();
    await page.goto('https://sv.dhcnhn.vn/');
    await page.type('input[name="ctl00$inpUserName"]', account.username);
    await page.type('input[name="ctl00$inpPassword"]', account.password);
    await page.click('input[name="ctl00$butLogin"]');
    await page.waitForNavigation();
    await page.goto('https://sv.dhcnhn.vn/student/result/studyresults');
    let data = await page.evaluate(() => {
        let dataJson = [];
        // let dataTable = document.querySelectorAll('.table.table-bordered.table-striped>tbody tr');
        let dataTable = document.querySelectorAll('.table.table-bordered.table-striped>tbody tr');
        for(let i = 4; i < dataTable.length; i++){
            let dataRow = dataTable[i].getElementsByTagName('td');
            dataJson.push({
                'Subject': dataRow[1].innerText,
                'className': dataRow[2].innerText,
                'classCode' : dataRow[3].innerText,
                'pointOften': {
                    'One': dataRow[4].innerText,
                    'Two': dataRow[5].innerText,
                    'Three': dataRow[6].innerText
                },
                'midtermPoint': dataRow[14].innerText,
                'mediumScore': dataRow[17].innerText
            });
        }
        return dataJson;
    });

    console.log(data);
    fs.writeFileSync('hmm.json', JSON.stringify(data, 0, 3));
    await page.close();
    await browser.close();
    console.log('Done.');
});