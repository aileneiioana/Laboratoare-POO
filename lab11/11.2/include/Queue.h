#ifndef QUEUE_H
#define QUEUE_H


template <class T>
class Queue
{
 public:
 Queue(int = 10);
 ~Queue() { delete[] queuePtr; }
 bool push(const T&);
 bool pop(T&);
 private:
 int size;
 int nrcrt;
 int first;
 T* queuePtr;
 bool isEmpty() const {if(nrcrt==0)
        return true;
    else return false;}
 bool isFull() const {if(nrcrt==size) return true;
    else return false;}
};
template<class T>
Queue<T>::Queue(int s)
{
 size = s > 0 ? s : 10;
 queuePtr= new T[size];
 nrcrt =0;
 first =0;
}

template<class T>
bool Queue<T>::push(const T& pushval)
{
 if(!isFull())
 {
 queuePtr[nrcrt++]=pushval;
    return true;
 }
 return false;
}

template<class T>
bool Queue<T>::pop(T& popval)
{
 if(!isEmpty())
 {
 popval=queuePtr[0];
   for(int i=0;i<nrcrt;++i)
    queuePtr[i]=queuePtr[i+1];
    nrcrt--;
    return true;
 }
 return false;
}

#endif // QUEUE_H
