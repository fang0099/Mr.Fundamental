/*
 * Singleton
 */
class CSingleton
{
    private:
        CSingleton(){}
        ~CSingleton(){}
        static CSingleton* m_pInstance;   
    public:
        static CSingleton* getInstance()
        {
            if(m_pInstance==NULL)
            {
                m_pInstance = new CSingleton(); 
            }
            return m_pInstance;
        }

};

CSingleton* CSingleton::m_pInstance = NULL;
