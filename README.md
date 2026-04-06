Blood Donor System in C

📌 Description

This project is a console-based application written in C that helps identify eligible and compatible blood donors based on real-world conditions.

It not only checks blood group compatibility but also verifies donor eligibility using criteria such as age and time since last donation.

---

🚀 Features

- Add multiple donors with:
  - Name
  - Blood group
  - Age
  - Months since last donation
- Check blood group compatibility
- Validate donor eligibility:
  - Age must be ≥ 18
  - Last donation must be at least 3 months ago
- Display only eligible and compatible donors
- Structured using functions and clean logic

---

⚙️ How It Works

The program follows these steps:

1. Takes input for multiple donors (name, blood group, age, last donation)
2. Accepts a required blood group
3. Applies two layers of filtering:
   - Eligibility Check
     - Age ≥ 18
     - Last donation ≥ 3 months
   - Compatibility Check
     - O → Donates to all
     - A → A, AB
     - B → B, AB
     - AB → AB only
4. Displays only donors who satisfy both conditions

---

🛠️ How to Run

Step 1: Compile

gcc blood_donor_v2.c -o blood_donor

Step 2: Run

./blood_donor

---

📊 Example

Input:

Enter number of donors: 3

Donor 1:
Rahul O 25 4

Donor 2:
Amit A 17 5

Donor 3:
Suresh B 30 2

Enter required blood group: A

Output:

--- Eligible & Compatible Donors ---
Rahul (O, Age: 25, Last Donation: 4 months ago)

---

🔮 Future Improvements

- File handling (store donor data permanently)
- Menu-driven system
- Search by name or blood group
- Add contact details (phone/email)
- Convert into a GUI or web-based application

---

👨‍💻 Author

Sushant Mathapati