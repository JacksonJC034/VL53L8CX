def hex_to_dec(hex_data):
    """Convert a list of hexadecimal pairs to their decimal equivalents."""
    decimal_data = []
    for i in range(0, len(hex_data), 2):
        combined_hex = hex_data[i] + hex_data[i + 1]  # Combine two hex values into one hex number
        decimal_value = int(combined_hex, 16)  # Convert the combined hex number to decimal
        decimal_data.append(decimal_value)
    return decimal_data

def read_hex_from_file(file_path):
    """Read a single line of hexadecimal data from a file."""
    with open(file_path, 'r') as file:
        line = file.readline().strip()
        hex_data = line.split()
    return hex_data

def write_dec_to_file(decimal_data, output_file_path):
    """Write decimal data to an output file, one value per line."""
    with open(output_file_path, 'w') as file:
        for value in decimal_data:
            file.write(f"{value}\n")

def main(input_file_path, output_file_path):
    hex_data = read_hex_from_file(input_file_path)
    decimal_data = hex_to_dec(hex_data)
    write_dec_to_file(decimal_data, output_file_path)
    print(f"Converted hex data to decimal and saved to {output_file_path}")

if __name__ == "__main__":
    input_file_path = 'data.txt'  # Replace with your input file path
    output_file_path = '1_50.txt'  # Replace with your output file path
    main(input_file_path, output_file_path)
