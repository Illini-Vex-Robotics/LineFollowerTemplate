# Line Follower Template

**Illini VEX Robotics — 2026–2027 Programming Onboarding Activity**

This repository is the starter template used during onboarding for new members of the Illini VEX Robotics programming team. It's designed to teach the Git workflow we use all year, while giving new members a hands-on introduction to programming logic in the context of robotics.

| | | |
|---|---|---|
| ![Photo 1](docs/images/photo1.jpg) | ![Photo 2](docs/images/photo2.jpg) | ![Photo 3](docs/images/photo3.jpg) |

---

## About This Activity

After setting up VS Code and the PROS extension, new members:

1. Cloned this repository and opened it in VS Code
2. Received a brief crash course on C++ conditionals and VEX optical sensors
3. Got a walkthrough of the template's structure
4. Worked in teams to write an algorithm that completes a line-follower maze as fast as possible

The template intentionally handles sensor and timer setup so new members can focus on:
- Learning the **Git operations** (clone, branch, commit, push, pull) we'll use throughout the season
- Building **logic and reasoning skills** for programming and robotics, without getting stuck on C++ syntax or the PROS API

---

## What's Included

- **Sensor object definitions:** the VEX optical sensor and motor objects are declared at the top of `main.cpp` — you just fill in the port numbers
- **Built-in timer**
  - Starts when the **A** button is pressed on the VEX controller
  - Stops automatically upon maze completion
  - Can also be stopped manually by pressing **A** again, acting as a kill switch if the robot leaves the line

---

## Getting Started

1. Install [VS Code](https://code.visualstudio.com/) and the [PROS extension](https://pros.cs.purdue.edu/v5/getting-started/index.html)
2. Clone this repository:
   ```bash
   git clone <repo-url>
   ```
3. Open the folder in VS Code
4. Pull in the PROS kernel and libraries (they aren't committed to this repo — the
   versions are listed in `project.pros`):
   ```bash
   pros c install kernel@4.2.2
   pros c install liblvgl@9.2.0
   ```
   `pros c fetch` alone only downloads them to the PROS cache; `install` also
   applies them to the project, creating the `include/` and `firmware/` folders
   the build needs.
5. Build and upload to the V5 brain using the PROS extension
6. Press **A** on the controller to start the timer and begin the run

---

## 🏆 Leaderboard

Fastest maze completion times from the onboarding event:

| Rank | Team / Name | Time (s) | Notes |
|------|-------------|----------|-------|
| 🥇 1 | | | |
| 🥈 2 | | | |
| 🥉 3 | | | |
| 4 | | | |
| 5 | | | |