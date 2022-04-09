#include <stdio.h>
#include <math.h>

int main(void) 
{
	int a[1000];
	    int n;
	    printf("Nhap so phan tu: "); scanf("%d", &n);
	    for(int i=0; i<n; i++)
			{
				printf("Nhap gia tri tai vi tri a[%d]: ", i+1); scanf("%d", &a[i]);
			}
		int best = -32768; 
		int start = 0, end = 0, mid = 0;
		for (int i = 0; i < n; i++) {
				int sum = 0;
			for (int j = i; j < n; j++) {
				if (sum + a[j] < a[j]) {
					sum = a[j];
					mid = j;
				} else {
					sum += a[j];
				}
				if (best < sum) {
					best = sum;
					start = mid;
					end = j;
				}
			}
		}
		
		printf("\nKhoi luong lon nhat la: %d ", best);
		printf("\nDay con lien tuc tu vi tri %d toi vi tri %d", start+1, end+1);
		
		return 0;
}
