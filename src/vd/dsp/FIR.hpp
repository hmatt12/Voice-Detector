template <class T>
class FIR{
	public:
		FIR(const T weights_in[], int order_in);
		~FIR();
		T update(const T sample);
	private:
		T* weights, samples;
		int order, sampleCount;
};
