/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let t=[]
    for(let i=0;i<arr.length;i++){
        if(fn(arr[i],i)){
            t.push(arr[i])
        }
    }
    return t
};