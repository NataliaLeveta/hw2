Αρχικά ορίζουμε με r τους γύρους του παιχνιδιού. Το πρόγραμμά μας θα τρέχει έως 10^6 γύρους. 
Στην περίπτωση που βρισκόμαστε σε περιττό γύρο τότε θα τυπώνει 'C' και θα αλλάζει γραμμή. 
Αντίστοιχα στη περίπτωη που βρισκόμαστε σε άρτιο γύρο θα τυπώνει 'D' και θα αλλάζει γραμμή.
Μετά από κάθε χρήση της συνάρτησης putchar χρησιμοποιείται η fflush για να εξασφαλιστεί η εκτύπωση όλων των χαρακτήρων στο  stdout.
Στη συνέχεια ορίζουμε μία μεταβλητή move στην οποία διαβάζεται και αποθηκεύεται η κίνηση του αντιπάλου.
'Οσο το πρόγραμμα διαβάζει χαρακτήρα διάφορο του 'C', 'D' ή 'EOF' τον αγνωεί και προχωράει στον επόμενο χαρακτήρα. 
Τέλος πηγαίνει στον επόμενο επόμενο αγώνα 
 
