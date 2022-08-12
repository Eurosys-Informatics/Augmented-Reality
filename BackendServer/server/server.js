const express = require('express');
const fs = require('fs');
var https = require('https');


//const historyApiFallback = require('connect-history-api-fallback');
//const mongoose = require('mongoose');
//const path = require('path');
//const webpack = require('webpack');
//const webpackDevMiddleware = require('webpack-dev-middleware');
//const webpackHotMiddleware = require('webpack-hot-middleware');

//const config = require('../config/config');
//const webpackConfig = require('../webpack.config');

const isDev = process.env.NODE_ENV !== 'production';
const port = process.env.PORT || 82;
const busboy = require('connect-busboy');
const busboyBodyParser = require('busboy-body-parser');

// Configuration
// ================================================================================================

// Set up Mongoose
//mongoose.connect(isDev ? config.db_dev : config.db);
//mongoose.Promise = global.Promise;

const app = express();
app.use(busboy());
app.use(express.urlencoded({ extended: true }));
app.use(express.json());
app.use(busboyBodyParser());
//app.use(busboyBodyParser({ limit: '250mb' }));
app.use(function (req, res, next) {
  res.header("Access-Control-Allow-Origin", "*");
  res.header("Access-Control-Allow-Methods", "GET, PUT, POST, DELETE");
  res.header("Access-Control-Allow-Headers", "Origin, cache-control, postman-token, X-Requested-With, Content-Type, Accept");
  next();
});

// API routes
require('./routes')(app);

//if (isDev) {
//  const compiler = webpack(webpackConfig);

//  app.use(historyApiFallback({
//    verbose: false
//  }));

//  app.use(webpackDevMiddleware(compiler, {
//    publicPath: webpackConfig.output.publicPath,
//    contentBase: path.resolve(__dirname, '../client/public'),
//    stats: {
//      colors: true,
//      hash: false,
//      timings: true,
//      chunks: false,
//      chunkModules: false,
//      modules: false
//    }
//  }));

//  app.use(webpackHotMiddleware(compiler));
//  app.use(express.static(path.resolve(__dirname, '../dist')));
//} else {
//  app.use(express.static(path.resolve(__dirname, '../dist')));
//  app.get('*', function (req, res) {
//    res.sendFile(path.resolve(__dirname, '../dist/index.html'));
//    res.end();
//  });
//}

var server_s = https.createServer({
  key: fs.readFileSync('ssl_certi/privkey.pem'),
  cert: fs.readFileSync('ssl_certi/cert.pem'),
  ca: fs.readFileSync('ssl_certi/fullchain.pem'),
  requestCert: false,
  rejectUnauthorized: false
}, app);
server_s.listen(82);


//app.listen(port, (err) => {
//  if (err) {
//    console.log(err);
//  }

//  console.info('>>> ðŸŒŽ Open http://0.0.0.0:%s/ in your browser.', port);
//});

module.exports = app;
