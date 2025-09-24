// app.js
const express = require('express');
const app = express();

// Define a route
app.get('/', (req, res) => {
  res.send('Hello, World from Express!');
});

// Start server
app.listen(3000, () => {
  console.log('Express server running at http://localhost:3000/');
});
