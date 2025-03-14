import React, { useState, useEffect } from "react";
import axios from "axios";

function App() {
    const [views, setViews] = useState(0);
    const [message, setMessage] = useState("");

    useEffect(() => {
        fetchViews();
    }, []);

    // 📌 Fetch Views
    const fetchViews = async () => {
        try {
            const res = await axios.get("http://localhost:5000/api/views");
            setViews(res.data.views);
        } catch (err) {
            console.error("Error fetching views:", err);
        }
    };

    // 📌 Record View
    const addView = async () => {
        try {
            const res = await axios.post("http://localhost:5000/api/views");
            setMessage(res.data.message);
            fetchViews();
        } catch (err) {
            setMessage(err.response?.data?.message || "Error adding view");
        }
    };

    return (
        <div style={{ textAlign: "center", padding: "20px" }}>
            <h1>Page Views Today</h1>
            <h2>{views}</h2>
            <button onClick={addView}>Add View</button>
            <p>{message}</p>
        </div>
    );
}

export default App;
