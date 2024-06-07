import cv2
import numpy as np
import matplotlib.pyplot as plt

# Define the data matrix
data = np.array([
    [1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000],
    [1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000],
    [700, 200, 200, 200, 200, 200, 700, 700],
    [800, 180, 180, 180, 180, 180, 700, 700],
    [750, 160, 160, 160, 160, 160, 700, 700],
    [800, 150, 150, 150, 150, 150, 700, 700],
    [750, 130, 130, 130, 130, 130, 700, 700],
    [730, 100, 100, 100, 100, 100, 700, 700]
], dtype=np.float32)

# Normalize the matrix to the range 0-255
normalized = cv2.normalize(data, None, 0, 255, cv2.NORM_MINMAX)

# Convert to an 8-bit image
image8bit = np.uint8(normalized)

# Apply Sobel operator
sobelx = cv2.Sobel(image8bit, cv2.CV_64F, 1, 0, ksize=3)
sobely = cv2.Sobel(image8bit, cv2.CV_64F, 0, 1, ksize=3)
sobel = np.sqrt(sobelx**2 + sobely**2)
sobel = cv2.convertScaleAbs(sobel)

# Display the images
plt.figure(figsize=(10, 5))

plt.subplot(1, 3, 1)
plt.title('Normalized Image')
plt.imshow(image8bit, cmap='gray')
plt.axis('off')

plt.subplot(1, 3, 2)
plt.title('Sobel Edges')
plt.imshow(sobel, cmap='gray')
plt.axis('off')

plt.subplot(1, 3, 3)
plt.title('Contours')
# Find contours
contours, hierarchy = cv2.findContours(sobel, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
# Draw contours on a blank image
contour_img = np.zeros_like(image8bit)
cv2.drawContours(contour_img, contours, -1, (255, 255, 255), 1)
plt.imshow(contour_img, cmap='gray')
plt.axis('off')

plt.tight_layout()
plt.show()
