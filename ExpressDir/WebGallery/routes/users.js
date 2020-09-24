var express = require('express');
var router = express.Router();

/* GET users listing. */
router.get('/', function(req, res, next) {
  res.render('users', {specific: 'Hello User, This ones for ya!!', title: 'Users'});
});

module.exports = router;
