#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

class NumberArray
{
	private:
		float *array;
		int arr_size;
	public:
		// Constuctors
		NumberArray(int);
		~NumberArray();

		void storeValue(int, float);
		float retrieveValue(int);

		float highest();
		float lowest();

		float average();
};

#endif
