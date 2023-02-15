const https = require('https');

https.get('https://coderbyte.com/api/challenges/json/json-cleaning', (resp) => {
  
  let data = '';
  resp.on('data', (chunk) => {
    data += chunk;
  });
  // parse json data here...
  resp.on('data',()=>{
  const parsedData = JSON.parse(data);
  const isValid = val => val && val !== '-' && val !== 'N/A';

  const cleanedobj = (obj) => {

    // if(Array.isArray(obj)){
    //   return obj.filter(isValid).map(cleanedobj);
    // }
    // if(typeof obj === 'object'){
    //   console.log(obj);
    //   for(const [k,v] of Object.entries(obj)){
    //     if(!isValid(v)){
    //       delete obj[k];
    //     }
    //     else{
    //       obj[k] = cleanedobj(v);
    //     }
    //   }
    // }
    if (Array.isArray(obj)) {
      return obj
        .filter(isValid)
        .map(cleanedobj);
    }
    if (typeof obj === 'object') {
      for (const [key, value] of Object.entries(obj)) {
        if (!isValid(value)) {
          delete obj[key];
        } else {
          obj[key] = cleanedobj(value);
        }
      }
    }
    return obj;
  }
  console.log("data",parsedData);
  const newObj = cleanedobj(parsedData);
  console.log("newData",newObj);
  // console.log(resp);

});
})