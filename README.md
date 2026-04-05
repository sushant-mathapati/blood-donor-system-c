# blood-donor-system-c
Simple C program to find compatible blood donors based on blood group
Blood Donor System in C

📌 Description

This project is a simple console-based application written in C that helps find compatible blood donors based on blood group. It demonstrates basic concepts like structures, functions, arrays, and string handling.

---

🚀 Features

- Add multiple donors
- Store donor name and blood group
- Find compatible donors based on recipient blood group
- Uses real-world blood compatibility logic

---

⚙️ How It Works

The program:

1. Takes input of multiple donors (name + blood group)
2. Accepts a required blood group
3. Checks compatibility using predefined rules:
   - O → Donates to all
   - A → A, AB
   - B → B, AB
   - AB → AB only
4. Displays matching donors

---

🛠️ How to Run

Step 1: Compile

gcc blood_donor.c -o blood_donor

Step 2: Run

./blood_donor

---

📊 Example

Input:

Enter number of donors: 3
Rahul O
Amit A
Suresh B

Enter required blood group: A

Output:

Compatible Donors:
Rahul (O)
Amit (A)

---

🔮 Future Improvements

- File handling (store donor data permanently)
- Menu-driven system
- Search by name
- Add age and contact details
- Convert into GUI or web app

---

👨‍💻 Author

Sushant Mathapati
