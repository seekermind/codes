const http = require('http');

const server = http.createServer((req,res) => {
    if(req.url == '/'){
        res.write("you are home");
        res.end();
    }
    if(req.url == '/user'){
        res.write("hello user");
        res.end();
    }
});

server.listen(3000, () => console.log('up and runing.'));