#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <vector>

using namespace std;

void slowPrint(const string& text, int delay = 50) {
 for (char c : text) {
  cout << c << flush;
  this_thread::sleep_for(chrono::milliseconds(delay));
 }
 cout << endl;
}

void simulateSpoof(const string& target) {
 slowPrint("[*] Starting DNS spoofing simulation...");
 this_thread::sleep_for(chrono::seconds(1));

 slowPrint("[*] Resolving DNS for " + target + "...");
 this_thread::sleep_for(chrono::seconds(2));

 slowPrint("[*] Sending spoofed DNS response...");
 this_thread::sleep_for(chrono::seconds(2));

 slowPrint("[*] Poisoning cache...");
 this_thread::sleep_for(chrono::seconds(1));

 slowPrint("[+] DNS spoofing complete.");
}

int main() {
 cout << "DNSPhantom v1.0\n";
 cout << "Enter domain to spoof:\n> ";

 string domain;
 getline(cin, domain);

 simulateSpoof(domain);

 cout << "\nUse responsibly. This is a simulation only.\n";

 return 0;
}
