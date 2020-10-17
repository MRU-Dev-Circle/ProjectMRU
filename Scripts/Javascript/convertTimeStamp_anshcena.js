/* LANGUAGE: Javascript
 AUTHOR: Ansh Varun
 GITHUB: https://github.com/anshcena

 This script will return timestamp to a local date and time
*/

const getTime = convertTime('passYourTimeStamp');

function convertTime(timestamp) {
    var d = new Date(timestamp);
    console.log(d)   // Fri Oct 18 2013 18:53:14 GMT+1000 (EST) 

    var time = d.getHours() + ':' + d.getMinutes() + ':' + d.getSeconds()
    var date = ' | ' + d.getDate() + '-' + d.getMonth() + '-' + d.getFullYear();
    return time + date;
  }