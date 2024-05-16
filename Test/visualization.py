import matplotlib.pyplot as plt
import numpy as np

def read_dec_from_file(file_path):
    """Read decimal data from a file and return as a list of floats."""
    with open(file_path, 'r') as file:
        decimal_data = [float(line.strip()) for line in file]
    return decimal_data

def visualize_sensor_data(data, output_file_path):
    """Visualize the sensor data as a heatmap."""
    # Reshape data into 8x8 matrix
    data_matrix = np.array(data).reshape((8, 8))

    # Reverse the rows to match the desired orientation
    data_matrix = np.flipud(data_matrix)

    # Create heatmap
    plt.imshow(data_matrix, cmap='viridis', origin='lower')

    # Add color bar
    plt.colorbar(label='Distance [mm]')

    # Add labels
    plt.title('VL53L8CX Sensor Distance Measurements')
    plt.xlabel('Sensor Column')
    plt.ylabel('Sensor Row')

    # Save and show the heatmap
    plt.savefig(output_file_path)
    plt.show()

def main(input_file_path, output_image_path):
    decimal_data = read_dec_from_file(input_file_path)
    visualize_sensor_data(decimal_data, output_image_path)
    print(f"Visualized sensor data and saved to {output_image_path}")

if __name__ == "__main__":
    input_file_path = '1_50.txt'  # Replace with your input file path
    output_image_path = '1_50.png'  # Replace with your output image file path
    main(input_file_path, output_image_path)
