using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace CS_Test
{   
    class INI
    {
        private string inipath = "";
        ConfigParam configparam = new ConfigParam();

        public INI(string _path)
        {
            this.inipath = _path;
        }

        [DllImport("kernel32")]
        private static extern long WritePrivateProfileString(string section, string key, 
            string value, string filepath);

        [DllImport("kernel32")]
        private static extern int GetPrivateProfileString(string section, string key, string def,
            StringBuilder retVal, int size, string filepath);

        public void WriteValue(string section, string key, string value, string inipath)
        {
            WritePrivateProfileString(section, key, value, inipath);
        }

        public string ReadValue(string section, string key)
        {
            StringBuilder value = new StringBuilder(255);
            int i = GetPrivateProfileString(section, key, "", value, 255, this.inipath);
            return value.ToString();
        }
        
        public void SaveINIFile(ConfigParam configdata)
        {
            WritePrivateProfileString("Test", "Test1", Convert.ToString(configdata.Addr), this.inipath);
            //WriteValue("Test", "Test1", Convert.ToString(configdata.Addr), this.inipath);
            WriteValue("Test", "Test2", Convert.ToString(configdata.PortNum), this.inipath);
        }

        public ConfigParam LoadINIFile()
        {
            string val;
            val = ReadValue("Test", "Test1");
            configparam.Addr = val;
            val = ReadValue("Test", "Test2");
            configparam.PortNum = Convert.ToInt32(val);

            return configparam;
        }
    }
}
